#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NodeBackground

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "SkillTreeGroups_structs.hpp"
#include "SkillTreeGroupColors_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NodeBackground.NodeBackground_C
// 0x0078 (0x0918 - 0x08A0)
class UNodeBackground_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A0(0x0008)(Transient, DuplicateTransient)
	ESkillTreeGroups                              Group;                                             // 0x08A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A9[0x3];                                      // 0x08A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillTreeGroupColors                  GroupColors;                                       // 0x08AC(0x0054)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Horizontal;                                        // 0x0900(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_901[0x7];                                      // 0x0901(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 VerticalStyle;                                     // 0x0908(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 HorizontalStyle;                                   // 0x0910(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NodeBackground(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetBackgroundColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NodeBackground_C">();
	}
	static class UNodeBackground_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNodeBackground_C>();
	}
};
static_assert(alignof(UNodeBackground_C) == 0x000008, "Wrong alignment on UNodeBackground_C");
static_assert(sizeof(UNodeBackground_C) == 0x000918, "Wrong size on UNodeBackground_C");
static_assert(offsetof(UNodeBackground_C, UberGraphFrame) == 0x0008A0, "Member 'UNodeBackground_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNodeBackground_C, Group) == 0x0008A8, "Member 'UNodeBackground_C::Group' has a wrong offset!");
static_assert(offsetof(UNodeBackground_C, GroupColors) == 0x0008AC, "Member 'UNodeBackground_C::GroupColors' has a wrong offset!");
static_assert(offsetof(UNodeBackground_C, Horizontal) == 0x000900, "Member 'UNodeBackground_C::Horizontal' has a wrong offset!");
static_assert(offsetof(UNodeBackground_C, VerticalStyle) == 0x000908, "Member 'UNodeBackground_C::VerticalStyle' has a wrong offset!");
static_assert(offsetof(UNodeBackground_C, HorizontalStyle) == 0x000910, "Member 'UNodeBackground_C::HorizontalStyle' has a wrong offset!");

}

