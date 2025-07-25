#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformResultModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemTransformResultModal.ItemTransformResultModal_C
// 0x0070 (0x0450 - 0x03E0)
class UItemTransformResultModal_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      ContinueButton;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      InspectButton;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainModeItemDetailsHostPanel_C*        MainModeItemDetailsHostPanel;                      // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          RecycleItemsBorder;                                // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RecycleItemsBox;                                   // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 TransformResultItemCard;                           // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnContinue;                                        // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                              RewardItem;                                        // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemInstanceQuantityPair>  Reward_Items;                                      // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFortItemInstanceQuantityPair>  Recycle_Items;                                     // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void OnContinue__DelegateSignature();
	void ExecuteUbergraph_ItemTransformResultModal(int32 EntryPoint);
	void OnActivated();
	void BndEvt__InspectButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OpenInspect();
	void OpenResult(TArray<struct FFortItemInstanceQuantityPair>& RewardItems, TArray<struct FFortItemInstanceQuantityPair>& SacrificeItems);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemTransformResultModal_C">();
	}
	static class UItemTransformResultModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemTransformResultModal_C>();
	}
};
static_assert(alignof(UItemTransformResultModal_C) == 0x000008, "Wrong alignment on UItemTransformResultModal_C");
static_assert(sizeof(UItemTransformResultModal_C) == 0x000450, "Wrong size on UItemTransformResultModal_C");
static_assert(offsetof(UItemTransformResultModal_C, UberGraphFrame) == 0x0003E0, "Member 'UItemTransformResultModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemTransformResultModal_C, ContinueButton) == 0x0003E8, "Member 'UItemTransformResultModal_C::ContinueButton' has a wrong offset!");
static_assert(offsetof(UItemTransformResultModal_C, InspectButton) == 0x0003F0, "Member 'UItemTransformResultModal_C::InspectButton' has a wrong offset!");
static_assert(offsetof(UItemTransformResultModal_C, MainModeItemDetailsHostPanel) == 0x0003F8, "Member 'UItemTransformResultModal_C::MainModeItemDetailsHostPanel' has a wrong offset!");
static_assert(offsetof(UItemTransformResultModal_C, RecycleItemsBorder) == 0x000400, "Member 'UItemTransformResultModal_C::RecycleItemsBorder' has a wrong offset!");
static_assert(offsetof(UItemTransformResultModal_C, RecycleItemsBox) == 0x000408, "Member 'UItemTransformResultModal_C::RecycleItemsBox' has a wrong offset!");
static_assert(offsetof(UItemTransformResultModal_C, TransformResultItemCard) == 0x000410, "Member 'UItemTransformResultModal_C::TransformResultItemCard' has a wrong offset!");
static_assert(offsetof(UItemTransformResultModal_C, OnContinue) == 0x000418, "Member 'UItemTransformResultModal_C::OnContinue' has a wrong offset!");
static_assert(offsetof(UItemTransformResultModal_C, RewardItem) == 0x000428, "Member 'UItemTransformResultModal_C::RewardItem' has a wrong offset!");
static_assert(offsetof(UItemTransformResultModal_C, Reward_Items) == 0x000430, "Member 'UItemTransformResultModal_C::Reward_Items' has a wrong offset!");
static_assert(offsetof(UItemTransformResultModal_C, Recycle_Items) == 0x000440, "Member 'UItemTransformResultModal_C::Recycle_Items' has a wrong offset!");

}

