#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StyleLibrary

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EFortUIThemeColor_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "EFortUITheme_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass StyleLibrary.StyleLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UStyleLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Get_Theme_Color(const struct FFortUIStylesheet& Stylesheet, EFortUITheme Theme_Type, EFortUIThemeColor Color_Type, class UObject* __WorldContext, struct FLinearColor* Theme_Color);
	static void Get_Theme(const struct FFortUIStylesheet& Stylesheet, EFortUITheme Theme_Type, class UObject* __WorldContext, struct FFortUITheme* Theme);
	static void Get_Standard_Icon_Size(const struct FFortUIStylesheet& Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size);
	static void Get_Item_Icon_Size(const struct FFortUIStylesheet& Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size);
	static void Get_Buff_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Debuff_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Item_Size(const struct FFortUIStylesheet& Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, struct FVector2D* Item_Size);
	static void Get_Unique_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Fire_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Ice_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Bolt_Elemental_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	static void Get_Base___Buff_Colors(EFortStatValueDisplayType Display_Type, EFortBuffState Buff_State, const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* buff);
	static void ResizeBrush(EFortBrushSize BrushSize, const struct FSlateBrush& BaseBrush, class UObject* __WorldContext, struct FSlateBrush* NewParam);
	static void Get_HarvestWeakPoint_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut);
	static void Get_Conning_Color_From_Difficulty_Value(int32 Player_Skill_Level, float Content_Difficulty_Level, const struct FGameDifficultyInfo& Game_Difficulty_Info, int32 Content_Skill_Points, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Success, class FText* ToolTipText, int32* DifficultyValue);
	static void Get_Conning_Color_For_Specific_Difficulty(int32 Difficulty_Value, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Invalid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StyleLibrary_C">();
	}
	static class UStyleLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStyleLibrary_C>();
	}
};
static_assert(alignof(UStyleLibrary_C) == 0x000008, "Wrong alignment on UStyleLibrary_C");
static_assert(sizeof(UStyleLibrary_C) == 0x000028, "Wrong size on UStyleLibrary_C");

}

