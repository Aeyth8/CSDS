#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoostRow

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function XpBoostRow.XpBoostRow_C.Give Boost Clicked__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct XpBoostRow_C_Give_Boost_Clicked__DelegateSignature final
{
public:
	struct FUniqueNetIdRepl                       Player_to_Boost;                                   // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(XpBoostRow_C_Give_Boost_Clicked__DelegateSignature) == 0x000008, "Wrong alignment on XpBoostRow_C_Give_Boost_Clicked__DelegateSignature");
static_assert(sizeof(XpBoostRow_C_Give_Boost_Clicked__DelegateSignature) == 0x000018, "Wrong size on XpBoostRow_C_Give_Boost_Clicked__DelegateSignature");
static_assert(offsetof(XpBoostRow_C_Give_Boost_Clicked__DelegateSignature, Player_to_Boost) == 0x000000, "Member 'XpBoostRow_C_Give_Boost_Clicked__DelegateSignature::Player_to_Boost' has a wrong offset!");

// Function XpBoostRow.XpBoostRow_C.ExecuteUbergraph_XpBoostRow
// 0x0100 (0x0100 - 0x0000)
struct XpBoostRow_C_ExecuteUbergraph_XpBoostRow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDialogResult                             K2Node_CustomEvent_Result2;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_ResultName2;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   Temp_name_Variable;                                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDialogResult                             Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortDialogResult                             K2Node_CustomEvent_Result;                         // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_ResultName;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   Temp_name_Variable2;                               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDialogResult                             Temp_byte_Variable2;                               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum2_CmpSuccess;                     // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                       CallFunc_GetAccountItemWithDefinition_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0088(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue2;             // 0x00A0(0x0018)()
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                       CallFunc_GetAccountItemWithDefinition_ReturnValue2; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_MCPContextConsumeItem* CallFunc_ConsumeItem_ReturnValue;                  // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_MCPContextConsumeItem* CallFunc_ConsumeItem_ReturnValue2;                 // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue4;                     // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow) == 0x000008, "Wrong alignment on XpBoostRow_C_ExecuteUbergraph_XpBoostRow");
static_assert(sizeof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow) == 0x000100, "Wrong size on XpBoostRow_C_ExecuteUbergraph_XpBoostRow");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, EntryPoint) == 0x000000, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::EntryPoint' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_CustomEvent_Result2) == 0x000004, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_CustomEvent_Result2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_CustomEvent_ResultName2) == 0x000008, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_CustomEvent_ResultName2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, Temp_name_Variable) == 0x000020, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, Temp_byte_Variable) == 0x000028, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_SwitchEnum_CmpSuccess) == 0x000029, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_CustomEvent_Result) == 0x00002A, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_CustomEvent_ResultName) == 0x000030, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_CustomEvent_ResultName' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_CreateDelegate_OutputDelegate2) == 0x000038, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, Temp_name_Variable2) == 0x000048, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::Temp_name_Variable2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, Temp_byte_Variable2) == 0x000050, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_SwitchEnum2_CmpSuccess) == 0x000051, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_SwitchEnum2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_GetContext_ReturnValue) == 0x000058, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_GetAccountItemWithDefinition_ReturnValue) == 0x000060, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_GetAccountItemWithDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_CreateDelegate_OutputDelegate3) == 0x000068, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_CreateDelegate_OutputDelegate4) == 0x000078, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_MakeLiteralText_ReturnValue) == 0x000088, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_MakeLiteralText_ReturnValue2) == 0x0000A0, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_MakeLiteralText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue) == 0x0000B8, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2) == 0x0000C0, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_IsValid_ReturnValue2) == 0x0000C9, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, K2Node_ComponentBoundEvent_Button) == 0x0000D0, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_GetContext_ReturnValue2) == 0x0000D8, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_GetAccountItemWithDefinition_ReturnValue2) == 0x0000E0, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_GetAccountItemWithDefinition_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_ConsumeItem_ReturnValue) == 0x0000E8, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_ConsumeItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_ConsumeItem_ReturnValue2) == 0x0000F0, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_ConsumeItem_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_IsValid_ReturnValue3) == 0x0000F8, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_ExecuteUbergraph_XpBoostRow, CallFunc_IsValid_ReturnValue4) == 0x0000F9, "Member 'XpBoostRow_C_ExecuteUbergraph_XpBoostRow::CallFunc_IsValid_ReturnValue4' has a wrong offset!");

// Function XpBoostRow.XpBoostRow_C.BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct XpBoostRow_C_BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XpBoostRow_C_BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on XpBoostRow_C_BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(XpBoostRow_C_BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on XpBoostRow_C_BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(XpBoostRow_C_BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'XpBoostRow_C_BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function XpBoostRow.XpBoostRow_C.DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) XpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0 final
{
public:
	EFortDialogResult                             Result;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ResultName;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0) == 0x000008, "Wrong alignment on XpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0");
static_assert(sizeof(XpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0) == 0x000010, "Wrong size on XpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0");
static_assert(offsetof(XpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0, Result) == 0x000000, "Member 'XpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0::Result' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0, ResultName) == 0x000008, "Member 'XpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0::ResultName' has a wrong offset!");

// Function XpBoostRow.XpBoostRow_C.DialogResult_9BF60C804C82DAA0C1A2839132130883
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) XpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883 final
{
public:
	EFortDialogResult                             Result;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ResultName;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883) == 0x000008, "Wrong alignment on XpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883");
static_assert(sizeof(XpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883) == 0x000010, "Wrong size on XpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883");
static_assert(offsetof(XpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883, Result) == 0x000000, "Member 'XpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883::Result' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883, ResultName) == 0x000008, "Member 'XpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883::ResultName' has a wrong offset!");

// Function XpBoostRow.XpBoostRow_C.Update Party Member
// 0x0330 (0x0330 - 0x0000)
struct XpBoostRow_C_Update_Party_Member final
{
public:
	bool                                          Row_Has_Party_Member;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTeamMemberInfo                    Party_Members_Info;                                // 0x0008(0x0190)(Parm)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasBoost_Result;                          // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasBoost_Result2;                         // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A3[0x5];                                      // 0x01A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01A8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01E8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01F8(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0210(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue2;             // 0x0228(0x0018)()
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayersUniqueID_ReturnValue;       // 0x0243(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue3;                  // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue; // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue2; // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0260(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData3;             // 0x02A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array2;                           // 0x02E0(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array3;                           // 0x02F0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x0300(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue3;                      // 0x0318(0x0018)()
};
static_assert(alignof(XpBoostRow_C_Update_Party_Member) == 0x000008, "Wrong alignment on XpBoostRow_C_Update_Party_Member");
static_assert(sizeof(XpBoostRow_C_Update_Party_Member) == 0x000330, "Wrong size on XpBoostRow_C_Update_Party_Member");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, Row_Has_Party_Member) == 0x000000, "Member 'XpBoostRow_C_Update_Party_Member::Row_Has_Party_Member' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, Party_Members_Info) == 0x000008, "Member 'XpBoostRow_C_Update_Party_Member::Party_Members_Info' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_GetContext_ReturnValue) == 0x000198, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, Temp_byte_Variable) == 0x0001A0, "Member 'XpBoostRow_C_Update_Party_Member::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_HasBoost_Result) == 0x0001A1, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_HasBoost_Result' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_HasBoost_Result2) == 0x0001A2, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_HasBoost_Result2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, K2Node_MakeStruct_FormatArgumentData) == 0x0001A8, "Member 'XpBoostRow_C_Update_Party_Member::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, K2Node_MakeArray_Array) == 0x0001E8, "Member 'XpBoostRow_C_Update_Party_Member::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_Format_ReturnValue) == 0x0001F8, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_MakeLiteralText_ReturnValue) == 0x000210, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_MakeLiteralText_ReturnValue2) == 0x000228, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_MakeLiteralText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, Temp_byte_Variable2) == 0x000240, "Member 'XpBoostRow_C_Update_Party_Member::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, Temp_bool_Variable) == 0x000241, "Member 'XpBoostRow_C_Update_Party_Member::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, K2Node_Select_Default) == 0x000242, "Member 'XpBoostRow_C_Update_Party_Member::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_IsLocalPlayersUniqueID_ReturnValue) == 0x000243, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_IsLocalPlayersUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_GetContext_ReturnValue2) == 0x000248, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_GetContext_ReturnValue3) == 0x000250, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue) == 0x000258, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue2) == 0x00025C, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_GetPlayersXPPercentContributionToLocalPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, K2Node_MakeStruct_FormatArgumentData2) == 0x000260, "Member 'XpBoostRow_C_Update_Party_Member::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, K2Node_MakeStruct_FormatArgumentData3) == 0x0002A0, "Member 'XpBoostRow_C_Update_Party_Member::K2Node_MakeStruct_FormatArgumentData3' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, K2Node_MakeArray_Array2) == 0x0002E0, "Member 'XpBoostRow_C_Update_Party_Member::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, K2Node_MakeArray_Array3) == 0x0002F0, "Member 'XpBoostRow_C_Update_Party_Member::K2Node_MakeArray_Array3' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_Format_ReturnValue2) == 0x000300, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_Format_ReturnValue2' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_Update_Party_Member, CallFunc_Format_ReturnValue3) == 0x000318, "Member 'XpBoostRow_C_Update_Party_Member::CallFunc_Format_ReturnValue3' has a wrong offset!");

// Function XpBoostRow.XpBoostRow_C.Center On Row
// 0x0008 (0x0008 - 0x0000)
struct XpBoostRow_C_Center_On_Row final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XpBoostRow_C_Center_On_Row) == 0x000008, "Wrong alignment on XpBoostRow_C_Center_On_Row");
static_assert(sizeof(XpBoostRow_C_Center_On_Row) == 0x000008, "Wrong size on XpBoostRow_C_Center_On_Row");
static_assert(offsetof(XpBoostRow_C_Center_On_Row, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'XpBoostRow_C_Center_On_Row::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function XpBoostRow.XpBoostRow_C.Update Boost Material
// 0x0001 (0x0001 - 0x0000)
struct XpBoostRow_C_Update_Boost_Material final
{
public:
	bool                                          Other_Boosted;                                     // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(XpBoostRow_C_Update_Boost_Material) == 0x000001, "Wrong alignment on XpBoostRow_C_Update_Boost_Material");
static_assert(sizeof(XpBoostRow_C_Update_Boost_Material) == 0x000001, "Wrong size on XpBoostRow_C_Update_Boost_Material");
static_assert(offsetof(XpBoostRow_C_Update_Boost_Material, Other_Boosted) == 0x000000, "Member 'XpBoostRow_C_Update_Boost_Material::Other_Boosted' has a wrong offset!");

// Function XpBoostRow.XpBoostRow_C.HasBoost
// 0x0028 (0x0028 - 0x0000)
struct XpBoostRow_C_HasBoost final
{
public:
	class UFortAccountItemDefinition*             AccountItemDef;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                       CallFunc_GetAccountItemWithDefinition_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(XpBoostRow_C_HasBoost) == 0x000008, "Wrong alignment on XpBoostRow_C_HasBoost");
static_assert(sizeof(XpBoostRow_C_HasBoost) == 0x000028, "Wrong size on XpBoostRow_C_HasBoost");
static_assert(offsetof(XpBoostRow_C_HasBoost, AccountItemDef) == 0x000000, "Member 'XpBoostRow_C_HasBoost::AccountItemDef' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_HasBoost, Result) == 0x000008, "Member 'XpBoostRow_C_HasBoost::Result' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_HasBoost, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'XpBoostRow_C_HasBoost::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_HasBoost, CallFunc_GetAccountItemWithDefinition_ReturnValue) == 0x000018, "Member 'XpBoostRow_C_HasBoost::CallFunc_GetAccountItemWithDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_HasBoost, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'XpBoostRow_C_HasBoost::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostRow_C_HasBoost, CallFunc_Greater_IntInt_ReturnValue) == 0x000021, "Member 'XpBoostRow_C_HasBoost::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

