#include "pch.h"

#include "Aeyth8/Global.hpp"
#include "Aeyth8/Tools/Pointers.h"
#include "Aeyth8/Hooks/Hooks.hpp"
#include "Aeyth8/Offsets.h"
#include "Aeyth8/Tools/UFunctions.hpp"
#include "Aeyth8/Tools/BytePatcher.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


// My entire codebase has been designed to use namespaces like this.
using namespace A8CL; using namespace Global; using namespace Pointers;

// Can be reused for other games/builds, you will need to find the offset for FAES::DecryptData 
// For Fortnite Alpha 1.9 specifically, the function can be found using this AOB "41 B8 F0 00 00 00 48 8D 4C 24 20"
// The AES key for Fortnite Alpha 1.9 is 0x79323938716A53623131354E71513341676164333044576E3251597254493843
namespace AES
{
	struct FAESKey { uint8 Key[32]; };

	typedef __int64(__fastcall* DecryptData)(uint8* InData, uint32 InDataSize, const struct FAESKey* Key);

	A8CL::OFFSET DecryptDataPtr("DecryptData", 0x1305460);

	__int64 DecryptDataHook(uint8* InData, uint32 InDataSize, const struct FAESKey* Key)
	{
		FAESKey InterceptedKey(*Key);
		std::string AESKey{""};
	
		for (int i{0}; i < 32; ++i)
		{
			AESKey += HexToString(InterceptedKey.Key[i]);
		}
		LogA("AES", AESKey);

		return DecryptDataPtr.VerifyFC<DecryptData>()(InData, InDataSize, Key);
	}
}

static std::vector<Hooks::HookStructure> HookList =
{
	{OFF::UConsole, UFunctions::UConsole},
	{OFF::Browse, UFunctions::Browse},
	{AES::DecryptDataPtr, AES::DecryptDataHook},
};

constexpr const unsigned char CmdArgs[] = {
    0x6C, 0x00, 0x6F, 0x00, 0x67, 0x00, 0x20, 0x00, 0x2D, 0x00, 0x6E, 0x00, 0x6F, 0x00, 0x73, 0x00,
    0x70, 0x00, 0x6C, 0x00, 0x61, 0x00, 0x73, 0x00, 0x68, 0x00, 0x20, 0x00, 0x2D, 0x00, 0x6E, 0x00,
    0x6F, 0x00, 0x73, 0x00, 0x6F, 0x00, 0x75, 0x00, 0x6E, 0x00, 0x64, 0x00, 0x20, 0x00, 0x2D, 0x00,
    0x6E, 0x00, 0x75, 0x00, 0x6C, 0x00, 0x6C, 0x00, 0x72, 0x00, 0x68, 0x00, 0x69, 0x00, 0x20, 0x00,
    0x2D, 0x00, 0x75, 0x00, 0x73, 0x00, 0x65, 0x00, 0x6F, 0x00, 0x6C, 0x00, 0x64, 0x00, 0x69, 0x00,
    0x74, 0x00, 0x65, 0x00, 0x6D, 0x00, 0x63, 0x00, 0x61, 0x00, 0x72, 0x00, 0x64, 0x00, 0x73, 0x00,
    0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20
};

static void PreInit()
{
	// Retrieves the Global Base Address (GBA) by getting the module handle casted as a uintptr_t
	GBA = (uintptr_t)GetModuleHandleA("FortniteClient-Win64-Shipping.exe");

	LogWin();
	LogA("GetCommandLineA", GetCommandLineA());
	LogA("INITIALIZED", "The Global Base Address [GBA] is " + HexToString(GBA));

	Hooks::Init();
	Hooks::CreateAndEnableHooks(HookList);

	uintptr_t CommandLinePatch = GBA + 0x452CE54;
	LogA("Byte", HexToString(OffsetToByte(CommandLinePatch)));
	BytePatcher::ReplaceBytes(CommandLinePatch, CmdArgs);
}

static void Init() {

	uint32 NullWorld{0};
	while (UWorld() == nullptr)
	{
		++NullWorld;
		if (NullWorld >= 30) LogA("Init", "It has been a minute and the game has still not loaded, try restarting.");
		//LogA("Initialization", "Sleeping..");
		Sleep(2000);
	}

	if (!bConstructedUConsole) bConstructedUConsole = ConstructUConsole();
}

int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return 1;

	Global::InitLog();
	PreInit();

	if (Proxy::Attach(hModule))
		ConstructThread(Init);

	return 1;
}