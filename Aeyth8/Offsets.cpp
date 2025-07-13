#include "Hooks/Hooks.hpp"

class OFFSET;

namespace A8CL
{
namespace OFF
{
	// Basic UE Functions

	OFFSET ProcessEvent("ProcessEvent", 0x0);
	OFFSET UConsole("UConsole::ConsoleCommand", 0x251CF90);
	OFFSET PreLogin("AGameModeBase::PreLogin", 0x0);
	OFFSET Login("AGameModeBase::Login", 0x0);
	OFFSET Browse("UEngine::Browse", 0x024EB110);
	OFFSET SpawnActor("UWorld::SpawnActor", 0x0);
	OFFSET WorldGetNetMode("UWorld::InternalGetNetMode", 0x0);
	OFFSET ActorGetNetMode("AActor::InternalGetNetMode", 0x0);
	OFFSET GetMaxFPS("UEngine::GetMaxFPS", 0x0);
	OFFSET AppPreExit("FEngineLoop::AppPreExit", 0x0);
	OFFSET IsNonPakFileNameAllowed("FPakPlatformFile::IsNonPakFilenameAllowed", 0x0);
	OFFSET FindFileInPakFiles("FPakPlatformFile::FindFileInPakFiles", 0x0);
	OFFSET FileExists("FPakPlatformFile::FileExists", 0x0);

	// Native Game Functions

}
}