#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RejoinWindow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RejoinWindow.RejoinWindow_C
// 0x0070 (0x0460 - 0x03F0)
class URejoinWindow_C final : public UFortRejoinWindowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       AutorejoinText;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ButtonBox;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnRequestAbandon;                                  // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnRequestRejoinRetry;                              // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FDataTableRowHandle>            Buttons;                                           // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FMargin                                ButtonPadding;                                     // 0x0448(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          InitialScreen;                                     // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnRequestAbandon__DelegateSignature();
	void OnRequestRejoinRetry__DelegateSignature();
	void ExecuteUbergraph_RejoinWindow(int32 EntryPoint);
	void OnTimeoutTimeReached();
	void Construct();
	void ShowRetryScreen(const class FText& Failure, float TimeoutSeconds, bool AllowRetry);
	void ShowInitalScreen(float TimeoutSeconds);
	void InitializeRejoinWindow();
	void CenterFirstButton();
	void OnButtonClicked(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RejoinWindow_C">();
	}
	static class URejoinWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URejoinWindow_C>();
	}
};
static_assert(alignof(URejoinWindow_C) == 0x000008, "Wrong alignment on URejoinWindow_C");
static_assert(sizeof(URejoinWindow_C) == 0x000460, "Wrong size on URejoinWindow_C");
static_assert(offsetof(URejoinWindow_C, UberGraphFrame) == 0x0003F0, "Member 'URejoinWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, AutorejoinText) == 0x0003F8, "Member 'URejoinWindow_C::AutorejoinText' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, ButtonBox) == 0x000400, "Member 'URejoinWindow_C::ButtonBox' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, Description) == 0x000408, "Member 'URejoinWindow_C::Description' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, Title) == 0x000410, "Member 'URejoinWindow_C::Title' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, OnRequestAbandon) == 0x000418, "Member 'URejoinWindow_C::OnRequestAbandon' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, OnRequestRejoinRetry) == 0x000428, "Member 'URejoinWindow_C::OnRequestRejoinRetry' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, Buttons) == 0x000438, "Member 'URejoinWindow_C::Buttons' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, ButtonPadding) == 0x000448, "Member 'URejoinWindow_C::ButtonPadding' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, InitialScreen) == 0x000458, "Member 'URejoinWindow_C::InitialScreen' has a wrong offset!");

}

