#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilitiesPage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AbilitiesPage.AbilitiesPage_C
// 0x00A0 (0x0480 - 0x03E0)
class UAbilitiesPage_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           AbilitiesBox;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbilitiesPageTile_C*                   AbilityTilePrimary;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbilitiesPageTile_C*                   AbilityTileSecondary;                              // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbilitiesPageTile_C*                   AbilityTileTertiary;                               // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextAbilityDescription;                      // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextAbilityName;                             // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTierIndicator*                     FortTierIndicatorUnlockTier;                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           GadgetsBox;                                        // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbilitiesPageTile_C*                   GadgetTilePrimary;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAbilitiesPageTile_C*                   GadgetTileSecondary;                               // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMovieWidget_C*                         MovieWidget;                                       // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxMovie;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextLevel;                                         // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxGadgetsList;                            // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherAbilityDescription;                  // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonGroup*                     ButtonGroup;                                       // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          SelectedAbilityButton;                             // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                           VideoMediaSource;                                  // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AbilitiesPage(int32 EntryPoint);
	void OnDeactivated();
	void Construct();
	void OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex);
	void OnActivated();
	void HandleBack(bool* PassThrough);
	void OnAbilitySelected(class UCommonButton* AbilityButton);
	void HandleSelectedButtonChanged(class UCommonButton* InSelectedButton, int32 InSelectedButtonIndex);
	void AddTilesToButtonGroup(class UVerticalBox* ButtonContainer);
	void InitializeAbilityTiles();
	void UpdateAbilityMovie(class UFortGadgetItemDefinition* InGadgetItemDef);
	void HandleInventory(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AbilitiesPage_C">();
	}
	static class UAbilitiesPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbilitiesPage_C>();
	}
};
static_assert(alignof(UAbilitiesPage_C) == 0x000008, "Wrong alignment on UAbilitiesPage_C");
static_assert(sizeof(UAbilitiesPage_C) == 0x000480, "Wrong size on UAbilitiesPage_C");
static_assert(offsetof(UAbilitiesPage_C, UberGraphFrame) == 0x0003E0, "Member 'UAbilitiesPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, AbilitiesBox) == 0x0003E8, "Member 'UAbilitiesPage_C::AbilitiesBox' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, AbilityTilePrimary) == 0x0003F0, "Member 'UAbilitiesPage_C::AbilityTilePrimary' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, AbilityTileSecondary) == 0x0003F8, "Member 'UAbilitiesPage_C::AbilityTileSecondary' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, AbilityTileTertiary) == 0x000400, "Member 'UAbilitiesPage_C::AbilityTileTertiary' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, CommonTextAbilityDescription) == 0x000408, "Member 'UAbilitiesPage_C::CommonTextAbilityDescription' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, CommonTextAbilityName) == 0x000410, "Member 'UAbilitiesPage_C::CommonTextAbilityName' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, FortTierIndicatorUnlockTier) == 0x000418, "Member 'UAbilitiesPage_C::FortTierIndicatorUnlockTier' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, GadgetsBox) == 0x000420, "Member 'UAbilitiesPage_C::GadgetsBox' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, GadgetTilePrimary) == 0x000428, "Member 'UAbilitiesPage_C::GadgetTilePrimary' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, GadgetTileSecondary) == 0x000430, "Member 'UAbilitiesPage_C::GadgetTileSecondary' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, MovieWidget) == 0x000438, "Member 'UAbilitiesPage_C::MovieWidget' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, SafeZone_0) == 0x000440, "Member 'UAbilitiesPage_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, SizeBoxMovie) == 0x000448, "Member 'UAbilitiesPage_C::SizeBoxMovie' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, TextLevel) == 0x000450, "Member 'UAbilitiesPage_C::TextLevel' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, VerticalBoxGadgetsList) == 0x000458, "Member 'UAbilitiesPage_C::VerticalBoxGadgetsList' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, WidgetSwitcherAbilityDescription) == 0x000460, "Member 'UAbilitiesPage_C::WidgetSwitcherAbilityDescription' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, ButtonGroup) == 0x000468, "Member 'UAbilitiesPage_C::ButtonGroup' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, SelectedAbilityButton) == 0x000470, "Member 'UAbilitiesPage_C::SelectedAbilityButton' has a wrong offset!");
static_assert(offsetof(UAbilitiesPage_C, VideoMediaSource) == 0x000478, "Member 'UAbilitiesPage_C::VideoMediaSource' has a wrong offset!");

}

