#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabGameOptionsMain

#include "Basic.hpp"

#include "TabGameOptions_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabGameOptionsMain.TabGameOptionsMain_C
// 0x00C0 (0x0368 - 0x02A8)
class UTabGameOptionsMain_C final : public UTabGameOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TabGameOptionsMain_C;               // 0x02A8(0x0008)(Transient, DuplicateTransient)
	class URotatorSelector_C*                     AutoEquipBetterItems;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     ConsoleUnlockedFPS;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   ControllerLookSensitivityPItch;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   ControllerLookSensitivityYaw;                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     EquipFirstBuildingPieceWhenSwappingQuickbars;      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     FirstMinusPersonCamera;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     ForceFeedback;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   GamepadScopedMultiplier;                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   GamepadTargetingMultiplier;                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     InvertMouse;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     Language;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   MouseScopedMultiplier;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   MouseSensitivity;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   MouseTargetingMultiplier;                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     Region;                                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   SafeZone;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     ShowBackpack;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     ShowHeadAccessories;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     SprintCancelsReload;                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     TapInteract;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     ToggleSprint;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     ToggleTargeting;                                   // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TooltipDisplayReference;                           // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TabGameOptionsMain(int32 EntryPoint);
	void BndEvt__ConsoleUnlockedFPS_K2Node_ComponentBoundEvent_300_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__GamepadTargetingMultiplier_K2Node_ComponentBoundEvent_423_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__GamepadScopedMultiplier_K2Node_ComponentBoundEvent_401_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__ToggleTargeting_K2Node_ComponentBoundEvent_207_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__TargetingMultiplier_K2Node_ComponentBoundEvent_219_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__ScopedMultiplier_K2Node_ComponentBoundEvent_201_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__Region_K2Node_ComponentBoundEvent_105_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__FirstMinusPersonCamera_K2Node_ComponentBoundEvent_106_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void UpdatePossibleLanguages();
	void BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value);
	void Update_Data();
	void Initialize_Data();
	void IntializeGamepadSensitivitySliders();
	void CenterOnTab();
	void UpdateOptionsTab();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabGameOptionsMain_C">();
	}
	static class UTabGameOptionsMain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabGameOptionsMain_C>();
	}
};
static_assert(alignof(UTabGameOptionsMain_C) == 0x000008, "Wrong alignment on UTabGameOptionsMain_C");
static_assert(sizeof(UTabGameOptionsMain_C) == 0x000368, "Wrong size on UTabGameOptionsMain_C");
static_assert(offsetof(UTabGameOptionsMain_C, UberGraphFrame_TabGameOptionsMain_C) == 0x0002A8, "Member 'UTabGameOptionsMain_C::UberGraphFrame_TabGameOptionsMain_C' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, AutoEquipBetterItems) == 0x0002B0, "Member 'UTabGameOptionsMain_C::AutoEquipBetterItems' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, ConsoleUnlockedFPS) == 0x0002B8, "Member 'UTabGameOptionsMain_C::ConsoleUnlockedFPS' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, ControllerLookSensitivityPItch) == 0x0002C0, "Member 'UTabGameOptionsMain_C::ControllerLookSensitivityPItch' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, ControllerLookSensitivityYaw) == 0x0002C8, "Member 'UTabGameOptionsMain_C::ControllerLookSensitivityYaw' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, EquipFirstBuildingPieceWhenSwappingQuickbars) == 0x0002D0, "Member 'UTabGameOptionsMain_C::EquipFirstBuildingPieceWhenSwappingQuickbars' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, FirstMinusPersonCamera) == 0x0002D8, "Member 'UTabGameOptionsMain_C::FirstMinusPersonCamera' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, ForceFeedback) == 0x0002E0, "Member 'UTabGameOptionsMain_C::ForceFeedback' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, GamepadScopedMultiplier) == 0x0002E8, "Member 'UTabGameOptionsMain_C::GamepadScopedMultiplier' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, GamepadTargetingMultiplier) == 0x0002F0, "Member 'UTabGameOptionsMain_C::GamepadTargetingMultiplier' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, InvertMouse) == 0x0002F8, "Member 'UTabGameOptionsMain_C::InvertMouse' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, Language) == 0x000300, "Member 'UTabGameOptionsMain_C::Language' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, MouseScopedMultiplier) == 0x000308, "Member 'UTabGameOptionsMain_C::MouseScopedMultiplier' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, MouseSensitivity) == 0x000310, "Member 'UTabGameOptionsMain_C::MouseSensitivity' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, MouseTargetingMultiplier) == 0x000318, "Member 'UTabGameOptionsMain_C::MouseTargetingMultiplier' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, Region) == 0x000320, "Member 'UTabGameOptionsMain_C::Region' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, SafeZone) == 0x000328, "Member 'UTabGameOptionsMain_C::SafeZone' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, ShowBackpack) == 0x000330, "Member 'UTabGameOptionsMain_C::ShowBackpack' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, ShowHeadAccessories) == 0x000338, "Member 'UTabGameOptionsMain_C::ShowHeadAccessories' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, SprintCancelsReload) == 0x000340, "Member 'UTabGameOptionsMain_C::SprintCancelsReload' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, TapInteract) == 0x000348, "Member 'UTabGameOptionsMain_C::TapInteract' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, ToggleSprint) == 0x000350, "Member 'UTabGameOptionsMain_C::ToggleSprint' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, ToggleTargeting) == 0x000358, "Member 'UTabGameOptionsMain_C::ToggleTargeting' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, TooltipDisplayReference) == 0x000360, "Member 'UTabGameOptionsMain_C::TooltipDisplayReference' has a wrong offset!");

}

