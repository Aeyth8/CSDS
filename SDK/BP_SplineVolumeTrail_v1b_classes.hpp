#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineVolumeTrail_v1b

#include "Basic.hpp"

#include "En_SplineForwardAxes_01_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C
// 0x0230 (0x05B8 - 0x0388)
class ABP_SplineVolumeTrail_v1b_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(Transient, DuplicateTransient)
	class UArrowComponent*                        DebugArrow;                                        // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9; // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DebugRotateTimeline;                               // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Skeletal_Mesh;                                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Socket_Attach_Point;                               // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UStaticMesh*                            SplineMeshTemplate;                                // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInterface*                     SplineMeshMaterialOverride;                        // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystem*                        Particles;                                         // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         LifeTime;                                          // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lifetime_Buffer;                                   // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SplineSystemDuration;                              // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         LifetimeAfterCompletion;                           // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          KeepTickEnabledWhenCompleting;                     // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3F1[0x3];                                      // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfSplineMeshesToUpdate;                      // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Initial_Size;                                      // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USplineMeshComponent*>           SplineMeshes;                                      // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         SplineDistanceThreshold;                           // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SplineDistanceThresholdEmpty;                      // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class USplineMeshComponent*>           SplineMeshesHidden;                                // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                 SplineTimestamps;                                  // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         ArrayIndex;                                        // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineSystemActive;                                // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43D[0x3];                                      // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CompletionTimestamp;                               // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LifetimeAdjusted;                                  // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SizeOverLife;                                      // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       Mids_0;                                            // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveLinearColor*                      ColorAndAlphaOverLife;                             // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticlesComponent;                                // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SplineID;                                          // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474[0x4];                                      // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   Current_Spline_Mesh;                               // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Initial_Rotation__Roll_;                           // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_484[0x4];                                      // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            RotationOverLife;                                  // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DebugMode;                                         // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_491[0x3];                                      // 0x0491(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                DebugPositionOffset;                               // 0x0494(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               DebugRotationRate;                                 // 0x04A0(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         DebugTickDelta;                                    // 0x04AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugPreviousTickTimestamp;                        // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B4[0x4];                                      // 0x04B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Spline_System_Duration_Event_Handle;               // 0x04B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          Use_Tick_Interval_LODs;                            // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4C1[0x7];                                      // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Tick_Interval_Event_Handle;                        // 0x04C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         Tick_Interval_LOD_Check_Rate;                      // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4[0x4];                                      // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Tick_Interval_LOD_Distances;                       // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<float>                                 Tick_Actor_Intervals;                              // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	int32                                         LOD_Array_Index;                                   // 0x04F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Recently_Rendered_LOD;                         // 0x04FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4FD[0x3];                                      // 0x04FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Recently_Rendered_Check_Rate;                      // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_504[0x4];                                      // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Recently_Rendered_Event_Handle;                    // 0x0508(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          RecentlyRendered;                                  // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_511[0x3];                                      // 0x0511(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Recently_Rendered_Tolerance;                       // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                SplineDefaultUpVector;                             // 0x0518(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SplineDefaultUpVectorInWorldSpace;                 // 0x0524(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	En_SplineForwardAxes_01                       SplineMeshForwardAxis;                             // 0x0525(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CeaseAndDetachSplineUponCompletion;                // 0x0526(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          CanNewSplinePointsBeCreated;                       // 0x0527(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LinearColorOverLengthOfSpline;                     // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_529[0x7];                                      // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 IndiciesToDelete;                                  // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          RedistributePointsAlongSplineWhenCreated;          // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_541[0x7];                                      // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CurveBakeMID;                                      // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              RenderTextureResolution;                           // 0x0558(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UCurveLinearColor*>              LinearColorCurvesToBake;                           // 0x0560(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	bool                                          WriteBakedCurveDataToDisk;                         // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_571[0x7];                                      // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 File_Path;                                         // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 File_Name;                                         // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   LinearColorArray;                                  // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          UseCheapSplines;                                   // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5A9[0x7];                                      // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               LinearColorTexture;                                // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int32 EntryPoint);
	void GenerateCurveTextures();
	void ClearRenderTarget();
	void Recently_Rendered_Check();
	void Tick_Interval_LOD_Check();
	void ManuallyStopSplineSystem();
	void DebugMode_Rotate();
	void SplineSystemDurationReached();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DebugRotateTimeline__UpdateFunc();
	void DebugRotateTimeline__FinishedFunc();
	void UserConstructionScript();
	void AddSplineMesh();
	void SetStartAndEndSplineMesh(bool Update_Spline_Mesh);
	void AddSplinePoint();
	void UpdateSplinePointPosition();
	void SplineTimestampManagement();
	void ScaleSplineMesh();
	void UpdateMID();
	void UpdateParticleSystemPosition();
	void RollSplineMesh();
	void SetForwardAxisOnSplineMesh(class USplineMeshComponent* SplineMesh);
	void SetNewSplinePointsBool();
	bool AddSplineDistanceCheck();
	void SetWasRecentlyRendered();
	void TickIntervalLODCheck();
	void GetLinearColorFromCurveAtTime(class UCurveLinearColor* Curve_Linear_Color, int32 Index_0, struct FLinearColor* LinearColorOut);
	void RedistributePointsAlongSpline();
	void SplineUpdateOnTick();
	void ReturnSplineMeshToPool(class USplineMeshComponent* SplineMesh, int32 IndexToRemove);
	void BakeLinearColor(class UCurveLinearColor* Curve_Linear_Color, int32 Pixel__X_, struct FLinearColor* LinearColorOut);
	void DestroyAllSplineMeshes();
	void SetStartAndEndAllSplineMeshes(bool Update_All_Spline_Meshes);
	void GetSocketLocationWS(class FName Socket_Name, struct FVector* LocationWS);
	void UpdateCheapSplinesWPOVectors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineVolumeTrail_v1b_C">();
	}
	static class ABP_SplineVolumeTrail_v1b_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineVolumeTrail_v1b_C>();
	}
};
static_assert(alignof(ABP_SplineVolumeTrail_v1b_C) == 0x000008, "Wrong alignment on ABP_SplineVolumeTrail_v1b_C");
static_assert(sizeof(ABP_SplineVolumeTrail_v1b_C) == 0x0005B8, "Wrong size on ABP_SplineVolumeTrail_v1b_C");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, UberGraphFrame) == 0x000388, "Member 'ABP_SplineVolumeTrail_v1b_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugArrow) == 0x000390, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugArrow' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DefaultSceneRoot) == 0x000398, "Member 'ABP_SplineVolumeTrail_v1b_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9) == 0x0003A0, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugRotateTimeline) == 0x0003A8, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugRotateTimeline' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Spline) == 0x0003B0, "Member 'ABP_SplineVolumeTrail_v1b_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Skeletal_Mesh) == 0x0003B8, "Member 'ABP_SplineVolumeTrail_v1b_C::Skeletal_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Socket_Attach_Point) == 0x0003C0, "Member 'ABP_SplineVolumeTrail_v1b_C::Socket_Attach_Point' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineMeshTemplate) == 0x0003C8, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineMeshTemplate' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineMeshMaterialOverride) == 0x0003D0, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineMeshMaterialOverride' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Particles) == 0x0003D8, "Member 'ABP_SplineVolumeTrail_v1b_C::Particles' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LifeTime) == 0x0003E0, "Member 'ABP_SplineVolumeTrail_v1b_C::LifeTime' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Lifetime_Buffer) == 0x0003E4, "Member 'ABP_SplineVolumeTrail_v1b_C::Lifetime_Buffer' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineSystemDuration) == 0x0003E8, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineSystemDuration' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LifetimeAfterCompletion) == 0x0003EC, "Member 'ABP_SplineVolumeTrail_v1b_C::LifetimeAfterCompletion' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, KeepTickEnabledWhenCompleting) == 0x0003F0, "Member 'ABP_SplineVolumeTrail_v1b_C::KeepTickEnabledWhenCompleting' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, NumberOfSplineMeshesToUpdate) == 0x0003F4, "Member 'ABP_SplineVolumeTrail_v1b_C::NumberOfSplineMeshesToUpdate' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Initial_Size) == 0x0003F8, "Member 'ABP_SplineVolumeTrail_v1b_C::Initial_Size' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineMeshes) == 0x000400, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineMeshes' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineDistanceThreshold) == 0x000410, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineDistanceThreshold' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineDistanceThresholdEmpty) == 0x000414, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineDistanceThresholdEmpty' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineMeshesHidden) == 0x000418, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineMeshesHidden' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineTimestamps) == 0x000428, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineTimestamps' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, ArrayIndex) == 0x000438, "Member 'ABP_SplineVolumeTrail_v1b_C::ArrayIndex' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineSystemActive) == 0x00043C, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineSystemActive' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, CompletionTimestamp) == 0x000440, "Member 'ABP_SplineVolumeTrail_v1b_C::CompletionTimestamp' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LifetimeAdjusted) == 0x000444, "Member 'ABP_SplineVolumeTrail_v1b_C::LifetimeAdjusted' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SizeOverLife) == 0x000448, "Member 'ABP_SplineVolumeTrail_v1b_C::SizeOverLife' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Mids_0) == 0x000450, "Member 'ABP_SplineVolumeTrail_v1b_C::Mids_0' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, ColorAndAlphaOverLife) == 0x000460, "Member 'ABP_SplineVolumeTrail_v1b_C::ColorAndAlphaOverLife' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, ParticlesComponent) == 0x000468, "Member 'ABP_SplineVolumeTrail_v1b_C::ParticlesComponent' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineID) == 0x000470, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineID' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Current_Spline_Mesh) == 0x000478, "Member 'ABP_SplineVolumeTrail_v1b_C::Current_Spline_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Initial_Rotation__Roll_) == 0x000480, "Member 'ABP_SplineVolumeTrail_v1b_C::Initial_Rotation__Roll_' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, RotationOverLife) == 0x000488, "Member 'ABP_SplineVolumeTrail_v1b_C::RotationOverLife' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugMode) == 0x000490, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugMode' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugPositionOffset) == 0x000494, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugPositionOffset' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugRotationRate) == 0x0004A0, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugRotationRate' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugTickDelta) == 0x0004AC, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugTickDelta' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugPreviousTickTimestamp) == 0x0004B0, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugPreviousTickTimestamp' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Spline_System_Duration_Event_Handle) == 0x0004B8, "Member 'ABP_SplineVolumeTrail_v1b_C::Spline_System_Duration_Event_Handle' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Use_Tick_Interval_LODs) == 0x0004C0, "Member 'ABP_SplineVolumeTrail_v1b_C::Use_Tick_Interval_LODs' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Tick_Interval_Event_Handle) == 0x0004C8, "Member 'ABP_SplineVolumeTrail_v1b_C::Tick_Interval_Event_Handle' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Tick_Interval_LOD_Check_Rate) == 0x0004D0, "Member 'ABP_SplineVolumeTrail_v1b_C::Tick_Interval_LOD_Check_Rate' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Tick_Interval_LOD_Distances) == 0x0004D8, "Member 'ABP_SplineVolumeTrail_v1b_C::Tick_Interval_LOD_Distances' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Tick_Actor_Intervals) == 0x0004E8, "Member 'ABP_SplineVolumeTrail_v1b_C::Tick_Actor_Intervals' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LOD_Array_Index) == 0x0004F8, "Member 'ABP_SplineVolumeTrail_v1b_C::LOD_Array_Index' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Use_Recently_Rendered_LOD) == 0x0004FC, "Member 'ABP_SplineVolumeTrail_v1b_C::Use_Recently_Rendered_LOD' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Recently_Rendered_Check_Rate) == 0x000500, "Member 'ABP_SplineVolumeTrail_v1b_C::Recently_Rendered_Check_Rate' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Recently_Rendered_Event_Handle) == 0x000508, "Member 'ABP_SplineVolumeTrail_v1b_C::Recently_Rendered_Event_Handle' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, RecentlyRendered) == 0x000510, "Member 'ABP_SplineVolumeTrail_v1b_C::RecentlyRendered' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Recently_Rendered_Tolerance) == 0x000514, "Member 'ABP_SplineVolumeTrail_v1b_C::Recently_Rendered_Tolerance' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineDefaultUpVector) == 0x000518, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineDefaultUpVector' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineDefaultUpVectorInWorldSpace) == 0x000524, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineDefaultUpVectorInWorldSpace' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineMeshForwardAxis) == 0x000525, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineMeshForwardAxis' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, CeaseAndDetachSplineUponCompletion) == 0x000526, "Member 'ABP_SplineVolumeTrail_v1b_C::CeaseAndDetachSplineUponCompletion' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, CanNewSplinePointsBeCreated) == 0x000527, "Member 'ABP_SplineVolumeTrail_v1b_C::CanNewSplinePointsBeCreated' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LinearColorOverLengthOfSpline) == 0x000528, "Member 'ABP_SplineVolumeTrail_v1b_C::LinearColorOverLengthOfSpline' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, IndiciesToDelete) == 0x000530, "Member 'ABP_SplineVolumeTrail_v1b_C::IndiciesToDelete' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, RedistributePointsAlongSplineWhenCreated) == 0x000540, "Member 'ABP_SplineVolumeTrail_v1b_C::RedistributePointsAlongSplineWhenCreated' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, CurveBakeMID) == 0x000548, "Member 'ABP_SplineVolumeTrail_v1b_C::CurveBakeMID' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, RenderTarget) == 0x000550, "Member 'ABP_SplineVolumeTrail_v1b_C::RenderTarget' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, RenderTextureResolution) == 0x000558, "Member 'ABP_SplineVolumeTrail_v1b_C::RenderTextureResolution' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LinearColorCurvesToBake) == 0x000560, "Member 'ABP_SplineVolumeTrail_v1b_C::LinearColorCurvesToBake' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, WriteBakedCurveDataToDisk) == 0x000570, "Member 'ABP_SplineVolumeTrail_v1b_C::WriteBakedCurveDataToDisk' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, File_Path) == 0x000578, "Member 'ABP_SplineVolumeTrail_v1b_C::File_Path' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, File_Name) == 0x000588, "Member 'ABP_SplineVolumeTrail_v1b_C::File_Name' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LinearColorArray) == 0x000598, "Member 'ABP_SplineVolumeTrail_v1b_C::LinearColorArray' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, UseCheapSplines) == 0x0005A8, "Member 'ABP_SplineVolumeTrail_v1b_C::UseCheapSplines' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LinearColorTexture) == 0x0005B0, "Member 'ABP_SplineVolumeTrail_v1b_C::LinearColorTexture' has a wrong offset!");

}

