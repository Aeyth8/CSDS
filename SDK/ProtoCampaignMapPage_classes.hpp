#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProtoCampaignMapPage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProtoCampaignMapPage.ProtoCampaignMapPage_C
// 0x00F8 (0x0330 - 0x0238)
class UProtoCampaignMapPage_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 ImageBackground;                                   // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_Page;                                         // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                         CurrentQuestItem;                                  // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Background_image;                                  // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   PageTitle;                                         // 0x0260(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UCanvasPanel*                           CachedQuestsCanvas;                                // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   PowerValue;                                        // 0x0280(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            BackgroundBrush;                                   // 0x0298(0x0090)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bDoNotCheckForMainQuest;                           // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ProtoCampaignMapPage(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GetMainQuest(class UFortQuestItem** OutCurentMainQuest);
	void CheckForMainQuest(bool* TargetQuestFound, int32* TargetQuestPageIndex);
	void SetBackgroundImage();
	void CheckForIncompleteQuestMinusHalloween_Event(bool* TargetQuestFound, int32* TargetQuestPageIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProtoCampaignMapPage_C">();
	}
	static class UProtoCampaignMapPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProtoCampaignMapPage_C>();
	}
};
static_assert(alignof(UProtoCampaignMapPage_C) == 0x000008, "Wrong alignment on UProtoCampaignMapPage_C");
static_assert(sizeof(UProtoCampaignMapPage_C) == 0x000330, "Wrong size on UProtoCampaignMapPage_C");
static_assert(offsetof(UProtoCampaignMapPage_C, UberGraphFrame) == 0x000238, "Member 'UProtoCampaignMapPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProtoCampaignMapPage_C, ImageBackground) == 0x000240, "Member 'UProtoCampaignMapPage_C::ImageBackground' has a wrong offset!");
static_assert(offsetof(UProtoCampaignMapPage_C, Slot_Page) == 0x000248, "Member 'UProtoCampaignMapPage_C::Slot_Page' has a wrong offset!");
static_assert(offsetof(UProtoCampaignMapPage_C, CurrentQuestItem) == 0x000250, "Member 'UProtoCampaignMapPage_C::CurrentQuestItem' has a wrong offset!");
static_assert(offsetof(UProtoCampaignMapPage_C, Background_image) == 0x000258, "Member 'UProtoCampaignMapPage_C::Background_image' has a wrong offset!");
static_assert(offsetof(UProtoCampaignMapPage_C, PageTitle) == 0x000260, "Member 'UProtoCampaignMapPage_C::PageTitle' has a wrong offset!");
static_assert(offsetof(UProtoCampaignMapPage_C, CachedQuestsCanvas) == 0x000278, "Member 'UProtoCampaignMapPage_C::CachedQuestsCanvas' has a wrong offset!");
static_assert(offsetof(UProtoCampaignMapPage_C, PowerValue) == 0x000280, "Member 'UProtoCampaignMapPage_C::PowerValue' has a wrong offset!");
static_assert(offsetof(UProtoCampaignMapPage_C, BackgroundBrush) == 0x000298, "Member 'UProtoCampaignMapPage_C::BackgroundBrush' has a wrong offset!");
static_assert(offsetof(UProtoCampaignMapPage_C, bDoNotCheckForMainQuest) == 0x000328, "Member 'UProtoCampaignMapPage_C::bDoNotCheckForMainQuest' has a wrong offset!");

}

