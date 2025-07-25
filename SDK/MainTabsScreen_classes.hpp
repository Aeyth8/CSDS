#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabsScreen

#include "Basic.hpp"

#include "StoreOfferCosts_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainTabsScreen.MainTabsScreen_C
// 0x0028 (0x0478 - 0x0450)
class UMainTabsScreen_C final : public UFortMainTabsScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                  TopTabContentWidgetSwitcher;                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   LastActiveTabId;                                   // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UnclaimedResearchBangThreshold;                    // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           UnclaimedResearchPointsHandle;                     // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_MainTabsScreen(int32 EntryPoint);
	void HandleMainTabCreated(class FName TabNameID, class UCommonButton* TabButton);
	void HandleMainTabSelected(class FName TabNameID);
	void SquadSlotMarkedAsSeen_Event_0();
	void OnQuestSeen_Event_0(class UFortQuestItem* Quest);
	void Destruct();
	void HandleRefreshSkillTreeNodePage();
	void OnHomebaseInventoryUpdated();
	void Construct();
	void CustomEvent(class FName TabId, class UCommonButton* TabButton);
	void OnActivated();
	void HandleTabCreated(class FName TabId, class UCommonButton* TabButton);
	void HandleTabSelected(class FName TabName);
	void Update_Squad_Tab_Button_Bang(class FName Tab);
	void Update_Hero_Tab_Button_Bang(class FName Tab);
	void Update_Tab_Button_Bangs(class FName InTab);
	void Update_Quest_Tab_Button_Bang(class FName Tab);
	void Update_Armory_Tab_Button_Bang(class FName Tab);
	void Get_Item_from_Transform_Seen_State(class UFortAccountItem* TransformKey, class UFortAccountItem** OutItem);
	void Get_FortPC(class AFortPlayerController** FortPC);
	void Are_Any_Transform_Keys_Unseen(bool* Unseen);
	void Are_Any_Inventory_Items_Unseen(bool* Unseen);
	void Update_Store_Tab_Button_Bang(class FName Tab);
	void Update_Skills_Tab_Button_Bang(class FName Tab);
	bool Are_Any_Nodes_Available_For_Purchase(const class FName NodePageId);
	void Determine_Unclaimed_Resources_at_Threshold(bool* Result);
	void Toggle_Unclaimed_Research_Timer(bool Enable);
	void Handle_Unclaimed_Resources_Updated();
	void HandleMtxStore(class FName Tab_Id);
	void HandleCardPackStore(class FName TabId);
	bool Is_Transform_Feature_Unlocked();
	void Get_Valid_Offers(TArray<struct FCardPackOffer>* Offers);
	void CheckHighestPriorityOffer(TArray<struct FCardPackOffer>& InOfferArray, struct FCardPackOffer* OutPriorityOffer, bool* FoundOffer);
	void GetCustomStoreOfferCost(const struct FCardPackOffer& InCardPackOffer, EStoreOfferCosts* OutCustomStoreOfferCost);
	void CheckDisplayCriteria(EStoreOfferCosts InCustomStoreOfferCost, const struct FCardPackOffer& InCardPackOffer, bool* bPassedDisplayCriteria);
	void Determine_If_Any_nonMinusMTX_offers_are_purchasable(bool* ShowBang);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainTabsScreen_C">();
	}
	static class UMainTabsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainTabsScreen_C>();
	}
};
static_assert(alignof(UMainTabsScreen_C) == 0x000008, "Wrong alignment on UMainTabsScreen_C");
static_assert(sizeof(UMainTabsScreen_C) == 0x000478, "Wrong size on UMainTabsScreen_C");
static_assert(offsetof(UMainTabsScreen_C, UberGraphFrame) == 0x000450, "Member 'UMainTabsScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainTabsScreen_C, TopTabContentWidgetSwitcher) == 0x000458, "Member 'UMainTabsScreen_C::TopTabContentWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UMainTabsScreen_C, LastActiveTabId) == 0x000460, "Member 'UMainTabsScreen_C::LastActiveTabId' has a wrong offset!");
static_assert(offsetof(UMainTabsScreen_C, UnclaimedResearchBangThreshold) == 0x000468, "Member 'UMainTabsScreen_C::UnclaimedResearchBangThreshold' has a wrong offset!");
static_assert(offsetof(UMainTabsScreen_C, UnclaimedResearchPointsHandle) == 0x000470, "Member 'UMainTabsScreen_C::UnclaimedResearchPointsHandle' has a wrong offset!");

}

