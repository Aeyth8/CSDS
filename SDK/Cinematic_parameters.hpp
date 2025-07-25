#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cinematic

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CinematicLanuageToTrackStruct_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic
// 0x0100 (0x0100 - 0x0000)
struct Cinematic_C_ExecuteUbergraph_Cinematic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_HandleClientEvent_EventSource;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_HandleClientEvent_EventFocus;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent;              // 0x0018(0x0020)(ConstParm, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                K2Node_HandleClientEvent_EventSource2;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_HandleClientEvent_EventFocus2;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent2;             // 0x0058(0x0020)(ConstParm, NoDestructor)
	class UFortMediaSubtitlesPlayer*              K2Node_DynamicCast_AsFort_Media_Subtitles_Player;  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaSource*                           K2Node_DynamicCast_AsMedia_Source;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Event_Widget;                               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                      K2Node_Event_State;                                // 0x00A0(0x0003)(NoDestructor)
	uint8                                         Pad_A3[0x5];                                       // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	EFortUIState                                  K2Node_Event_PreviousUIState;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortUIState                                  K2Node_Event_NextUIState;                          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue2;         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;               // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue2;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPreparing_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EB[0x5];                                       // 0x00EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue3;              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAudioTrackIndex_AudioTrack;            // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectTrack_ReturnValue;                  // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cinematic_C_ExecuteUbergraph_Cinematic) == 0x000008, "Wrong alignment on Cinematic_C_ExecuteUbergraph_Cinematic");
static_assert(sizeof(Cinematic_C_ExecuteUbergraph_Cinematic) == 0x000100, "Wrong size on Cinematic_C_ExecuteUbergraph_Cinematic");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, EntryPoint) == 0x000000, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::EntryPoint' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_EventSource) == 0x000008, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_EventSource' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_EventFocus) == 0x000010, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_EventFocus' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_ClientEvent) == 0x000018, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_ClientEvent' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_EventSource2) == 0x000048, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_EventSource2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_EventFocus2) == 0x000050, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_EventFocus2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_ClientEvent2) == 0x000058, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_ClientEvent2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_DynamicCast_AsFort_Media_Subtitles_Player) == 0x000078, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_DynamicCast_AsFort_Media_Subtitles_Player' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_DynamicCast_AsMedia_Source) == 0x000088, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_DynamicCast_AsMedia_Source' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_DynamicCast_bSuccess2) == 0x000090, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_Event_Widget) == 0x000098, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_Event_State) == 0x0000A0, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_CreateDelegate_OutputDelegate2) == 0x0000A8, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_Event_PreviousUIState) == 0x0000B8, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_Event_PreviousUIState' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_Event_NextUIState) == 0x0000B9, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_Event_NextUIState' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_GetPlayerController_ReturnValue) == 0x0000C0, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_GetPlayerController_ReturnValue2) == 0x0000C8, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_GetPlayerController_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_GetMediaPlayer_ReturnValue) == 0x0000D8, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_GetMediaPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_GetMediaPlayer_ReturnValue2) == 0x0000E0, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_GetMediaPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_IsPreparing_ReturnValue) == 0x0000E8, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_IsPreparing_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_IsPlaying_ReturnValue) == 0x0000E9, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_BooleanOR_ReturnValue) == 0x0000EA, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_GetMediaPlayer_ReturnValue3) == 0x0000F0, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_GetMediaPlayer_ReturnValue3' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_GetAudioTrackIndex_AudioTrack) == 0x0000F8, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_GetAudioTrackIndex_AudioTrack' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_SelectTrack_ReturnValue) == 0x0000FC, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_SelectTrack_ReturnValue' has a wrong offset!");

// Function Cinematic.Cinematic_C.OnExitState
// 0x0001 (0x0001 - 0x0000)
struct Cinematic_C_OnExitState final
{
public:
	EFortUIState                                  NextUIState;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cinematic_C_OnExitState) == 0x000001, "Wrong alignment on Cinematic_C_OnExitState");
static_assert(sizeof(Cinematic_C_OnExitState) == 0x000001, "Wrong size on Cinematic_C_OnExitState");
static_assert(offsetof(Cinematic_C_OnExitState, NextUIState) == 0x000000, "Member 'Cinematic_C_OnExitState::NextUIState' has a wrong offset!");

// Function Cinematic.Cinematic_C.OnEnterState
// 0x0001 (0x0001 - 0x0000)
struct Cinematic_C_OnEnterState final
{
public:
	EFortUIState                                  PreviousUIState;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cinematic_C_OnEnterState) == 0x000001, "Wrong alignment on Cinematic_C_OnEnterState");
static_assert(sizeof(Cinematic_C_OnEnterState) == 0x000001, "Wrong size on Cinematic_C_OnEnterState");
static_assert(offsetof(Cinematic_C_OnEnterState, PreviousUIState) == 0x000000, "Member 'Cinematic_C_OnEnterState::PreviousUIState' has a wrong offset!");

// Function Cinematic.Cinematic_C.PushContentWidgetInternal
// 0x0010 (0x0010 - 0x0000)
struct Cinematic_C_PushContentWidgetInternal final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                      State;                                             // 0x0008(0x0003)(Parm, NoDestructor)
};
static_assert(alignof(Cinematic_C_PushContentWidgetInternal) == 0x000008, "Wrong alignment on Cinematic_C_PushContentWidgetInternal");
static_assert(sizeof(Cinematic_C_PushContentWidgetInternal) == 0x000010, "Wrong size on Cinematic_C_PushContentWidgetInternal");
static_assert(offsetof(Cinematic_C_PushContentWidgetInternal, Widget) == 0x000000, "Member 'Cinematic_C_PushContentWidgetInternal::Widget' has a wrong offset!");
static_assert(offsetof(Cinematic_C_PushContentWidgetInternal, State) == 0x000008, "Member 'Cinematic_C_PushContentWidgetInternal::State' has a wrong offset!");

// Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic
// 0x0030 (0x0030 - 0x0000)
struct Cinematic_C_HandleClientEvent_SkipCinematic final
{
public:
	class UObject*                                EventSource;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                EventFocus;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       ClientEvent;                                       // 0x0010(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(Cinematic_C_HandleClientEvent_SkipCinematic) == 0x000008, "Wrong alignment on Cinematic_C_HandleClientEvent_SkipCinematic");
static_assert(sizeof(Cinematic_C_HandleClientEvent_SkipCinematic) == 0x000030, "Wrong size on Cinematic_C_HandleClientEvent_SkipCinematic");
static_assert(offsetof(Cinematic_C_HandleClientEvent_SkipCinematic, EventSource) == 0x000000, "Member 'Cinematic_C_HandleClientEvent_SkipCinematic::EventSource' has a wrong offset!");
static_assert(offsetof(Cinematic_C_HandleClientEvent_SkipCinematic, EventFocus) == 0x000008, "Member 'Cinematic_C_HandleClientEvent_SkipCinematic::EventFocus' has a wrong offset!");
static_assert(offsetof(Cinematic_C_HandleClientEvent_SkipCinematic, ClientEvent) == 0x000010, "Member 'Cinematic_C_HandleClientEvent_SkipCinematic::ClientEvent' has a wrong offset!");

// Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic
// 0x0030 (0x0030 - 0x0000)
struct Cinematic_C_HandleClientEvent_QueueCinematic final
{
public:
	class UObject*                                EventSource;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                EventFocus;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       ClientEvent;                                       // 0x0010(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(Cinematic_C_HandleClientEvent_QueueCinematic) == 0x000008, "Wrong alignment on Cinematic_C_HandleClientEvent_QueueCinematic");
static_assert(sizeof(Cinematic_C_HandleClientEvent_QueueCinematic) == 0x000030, "Wrong size on Cinematic_C_HandleClientEvent_QueueCinematic");
static_assert(offsetof(Cinematic_C_HandleClientEvent_QueueCinematic, EventSource) == 0x000000, "Member 'Cinematic_C_HandleClientEvent_QueueCinematic::EventSource' has a wrong offset!");
static_assert(offsetof(Cinematic_C_HandleClientEvent_QueueCinematic, EventFocus) == 0x000008, "Member 'Cinematic_C_HandleClientEvent_QueueCinematic::EventFocus' has a wrong offset!");
static_assert(offsetof(Cinematic_C_HandleClientEvent_QueueCinematic, ClientEvent) == 0x000010, "Member 'Cinematic_C_HandleClientEvent_QueueCinematic::ClientEvent' has a wrong offset!");

// Function Cinematic.Cinematic_C.ShowMovie
// 0x0048 (0x0048 - 0x0000)
struct Cinematic_C_ShowMovie final
{
public:
	class UMediaSource*                           MediaSource;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSoundWave*                        MediaSoundWave;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                             MovieSlot_0;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovieWidget_C*                         MovieWidget_0;                                     // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovieWidget_C*                         CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cinematic_C_ShowMovie) == 0x000008, "Wrong alignment on Cinematic_C_ShowMovie");
static_assert(sizeof(Cinematic_C_ShowMovie) == 0x000048, "Wrong size on Cinematic_C_ShowMovie");
static_assert(offsetof(Cinematic_C_ShowMovie, MediaSource) == 0x000000, "Member 'Cinematic_C_ShowMovie::MediaSource' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ShowMovie, MediaSoundWave) == 0x000008, "Member 'Cinematic_C_ShowMovie::MediaSoundWave' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ShowMovie, MovieSlot_0) == 0x000010, "Member 'Cinematic_C_ShowMovie::MovieSlot_0' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ShowMovie, MovieWidget_0) == 0x000018, "Member 'Cinematic_C_ShowMovie::MovieWidget_0' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ShowMovie, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'Cinematic_C_ShowMovie::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ShowMovie, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'Cinematic_C_ShowMovie::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ShowMovie, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'Cinematic_C_ShowMovie::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ShowMovie, CallFunc_Create_ReturnValue) == 0x000040, "Member 'Cinematic_C_ShowMovie::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function Cinematic.Cinematic_C.SkipMovie
// 0x0010 (0x0010 - 0x0000)
struct Cinematic_C_SkipMovie final
{
public:
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Pause_ReturnValue;                        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cinematic_C_SkipMovie) == 0x000008, "Wrong alignment on Cinematic_C_SkipMovie");
static_assert(sizeof(Cinematic_C_SkipMovie) == 0x000010, "Wrong size on Cinematic_C_SkipMovie");
static_assert(offsetof(Cinematic_C_SkipMovie, CallFunc_GetMediaPlayer_ReturnValue) == 0x000000, "Member 'Cinematic_C_SkipMovie::CallFunc_GetMediaPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_SkipMovie, CallFunc_IsPlaying_ReturnValue) == 0x000008, "Member 'Cinematic_C_SkipMovie::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_SkipMovie, CallFunc_Pause_ReturnValue) == 0x000009, "Member 'Cinematic_C_SkipMovie::CallFunc_Pause_ReturnValue' has a wrong offset!");

// Function Cinematic.Cinematic_C.PopContentWidgetInternal
// 0x0018 (0x0018 - 0x0000)
struct Cinematic_C_PopContentWidgetInternal final
{
public:
	struct FContentPushState                      State;                                             // 0x0000(0x0003)(Parm, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_PopWigdet_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cinematic_C_PopContentWidgetInternal) == 0x000008, "Wrong alignment on Cinematic_C_PopContentWidgetInternal");
static_assert(sizeof(Cinematic_C_PopContentWidgetInternal) == 0x000018, "Wrong size on Cinematic_C_PopContentWidgetInternal");
static_assert(offsetof(Cinematic_C_PopContentWidgetInternal, State) == 0x000000, "Member 'Cinematic_C_PopContentWidgetInternal::State' has a wrong offset!");
static_assert(offsetof(Cinematic_C_PopContentWidgetInternal, ReturnValue) == 0x000008, "Member 'Cinematic_C_PopContentWidgetInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_PopContentWidgetInternal, CallFunc_PopWigdet_ReturnValue) == 0x000010, "Member 'Cinematic_C_PopContentWidgetInternal::CallFunc_PopWigdet_ReturnValue' has a wrong offset!");

// Function Cinematic.Cinematic_C.ClearMovieSlot
// 0x0008 (0x0008 - 0x0000)
struct Cinematic_C_ClearMovieSlot final
{
public:
	class UPanelWidget*                           MovieSlotToClear;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cinematic_C_ClearMovieSlot) == 0x000008, "Wrong alignment on Cinematic_C_ClearMovieSlot");
static_assert(sizeof(Cinematic_C_ClearMovieSlot) == 0x000008, "Wrong size on Cinematic_C_ClearMovieSlot");
static_assert(offsetof(Cinematic_C_ClearMovieSlot, MovieSlotToClear) == 0x000000, "Member 'Cinematic_C_ClearMovieSlot::MovieSlotToClear' has a wrong offset!");

// Function Cinematic.Cinematic_C.ClearMovieWidget
// 0x0030 (0x0030 - 0x0000)
struct Cinematic_C_ClearMovieWidget final
{
public:
	class UFortMovieWidget*                       MovieWidgetToClear;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cinematic_C_ClearMovieWidget) == 0x000008, "Wrong alignment on Cinematic_C_ClearMovieWidget");
static_assert(sizeof(Cinematic_C_ClearMovieWidget) == 0x000030, "Wrong size on Cinematic_C_ClearMovieWidget");
static_assert(offsetof(Cinematic_C_ClearMovieWidget, MovieWidgetToClear) == 0x000000, "Member 'Cinematic_C_ClearMovieWidget::MovieWidgetToClear' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearMovieWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Cinematic_C_ClearMovieWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearMovieWidget, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'Cinematic_C_ClearMovieWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearMovieWidget, CallFunc_GetMediaPlayer_ReturnValue) == 0x000020, "Member 'Cinematic_C_ClearMovieWidget::CallFunc_GetMediaPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearMovieWidget, CallFunc_IsValid_ReturnValue2) == 0x000028, "Member 'Cinematic_C_ClearMovieWidget::CallFunc_IsValid_ReturnValue2' has a wrong offset!");

// Function Cinematic.Cinematic_C.SetMoviePlaying
// 0x0001 (0x0001 - 0x0000)
struct Cinematic_C_SetMoviePlaying final
{
public:
	bool                                          MoviePlaying;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cinematic_C_SetMoviePlaying) == 0x000001, "Wrong alignment on Cinematic_C_SetMoviePlaying");
static_assert(sizeof(Cinematic_C_SetMoviePlaying) == 0x000001, "Wrong size on Cinematic_C_SetMoviePlaying");
static_assert(offsetof(Cinematic_C_SetMoviePlaying, MoviePlaying) == 0x000000, "Member 'Cinematic_C_SetMoviePlaying::MoviePlaying' has a wrong offset!");

// Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary
// 0x0050 (0x0050 - 0x0000)
struct Cinematic_C_ClearOldSubtitlesIfNecessary final
{
public:
	bool                                          NewSubtitlesExist;                                 // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMediaSubtitlesPlayer*              NewSubtitles;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable2;                             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cinematic_C_ClearOldSubtitlesIfNecessary) == 0x000008, "Wrong alignment on Cinematic_C_ClearOldSubtitlesIfNecessary");
static_assert(sizeof(Cinematic_C_ClearOldSubtitlesIfNecessary) == 0x000050, "Wrong size on Cinematic_C_ClearOldSubtitlesIfNecessary");
static_assert(offsetof(Cinematic_C_ClearOldSubtitlesIfNecessary, NewSubtitlesExist) == 0x000000, "Member 'Cinematic_C_ClearOldSubtitlesIfNecessary::NewSubtitlesExist' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearOldSubtitlesIfNecessary, NewSubtitles) == 0x000008, "Member 'Cinematic_C_ClearOldSubtitlesIfNecessary::NewSubtitles' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearOldSubtitlesIfNecessary, Temp_string_Variable) == 0x000010, "Member 'Cinematic_C_ClearOldSubtitlesIfNecessary::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearOldSubtitlesIfNecessary, Temp_string_Variable2) == 0x000020, "Member 'Cinematic_C_ClearOldSubtitlesIfNecessary::Temp_string_Variable2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearOldSubtitlesIfNecessary, Temp_bool_Variable) == 0x000030, "Member 'Cinematic_C_ClearOldSubtitlesIfNecessary::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearOldSubtitlesIfNecessary, K2Node_Select_Default) == 0x000038, "Member 'Cinematic_C_ClearOldSubtitlesIfNecessary::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearOldSubtitlesIfNecessary, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'Cinematic_C_ClearOldSubtitlesIfNecessary::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Cinematic.Cinematic_C.StopAndClearSubtitles
// 0x0001 (0x0001 - 0x0000)
struct Cinematic_C_StopAndClearSubtitles final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cinematic_C_StopAndClearSubtitles) == 0x000001, "Wrong alignment on Cinematic_C_StopAndClearSubtitles");
static_assert(sizeof(Cinematic_C_StopAndClearSubtitles) == 0x000001, "Wrong size on Cinematic_C_StopAndClearSubtitles");
static_assert(offsetof(Cinematic_C_StopAndClearSubtitles, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'Cinematic_C_StopAndClearSubtitles::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Cinematic.Cinematic_C.GetAudioTrackIndex
// 0x0088 (0x0088 - 0x0000)
struct Cinematic_C_GetAudioTrackIndex final
{
public:
	int32                                         AudioTrack;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable2;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable2;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetPreferredLanguages_ReturnValue;        // 0x0020(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item2;                          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCinematicLanuageToTrackStruct         CallFunc_GetDataTableRowFromName_OutRow;           // 0x005C(0x0004)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue2;                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Cinematic_C_GetAudioTrackIndex) == 0x000008, "Wrong alignment on Cinematic_C_GetAudioTrackIndex");
static_assert(sizeof(Cinematic_C_GetAudioTrackIndex) == 0x000088, "Wrong size on Cinematic_C_GetAudioTrackIndex");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, AudioTrack) == 0x000000, "Member 'Cinematic_C_GetAudioTrackIndex::AudioTrack' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Cinematic_C_GetAudioTrackIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'Cinematic_C_GetAudioTrackIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, Temp_int_Array_Index_Variable2) == 0x000010, "Member 'Cinematic_C_GetAudioTrackIndex::Temp_int_Array_Index_Variable2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, Temp_int_Loop_Counter_Variable2) == 0x000014, "Member 'Cinematic_C_GetAudioTrackIndex::Temp_int_Loop_Counter_Variable2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Add_IntInt_ReturnValue2) == 0x000018, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_GetPreferredLanguages_ReturnValue) == 0x000020, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_GetPreferredLanguages_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000030, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Array_Get_Item) == 0x000040, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Array_Get_Item2) == 0x000050, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_GetDataTableRowFromName_OutRow) == 0x00005C, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000060, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Conv_NameToString_ReturnValue) == 0x000068, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000078, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Array_Length_ReturnValue2) == 0x00007C, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Less_IntInt_ReturnValue2) == 0x000080, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Less_IntInt_ReturnValue2' has a wrong offset!");

}

