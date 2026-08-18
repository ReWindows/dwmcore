#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 117 member(s).
class CChannel {
public:
    class CChannelLock;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CChannel@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRefResource@CChannel@@UEAAJI@Z
    virtual long AddRefResource(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationSetTrigger@CChannel@@UEAAJII@Z
    virtual long AnimationSetTrigger(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationTriggerTrigger@CChannel@@UEAAJI_K@Z
    virtual long AnimationTriggerTrigger(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationUpdateBeginTime@CChannel@@UEAAJI_K0@Z
    virtual long AnimationUpdateBeginTime(unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z
    virtual long AnimationUpdatePrimitives(unsigned int, DwmAnimationPrimitive const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncFlush@CChannel@@UEAAJII@Z
    virtual long AsyncFlush(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z
    virtual long AtlasedRectsGroupUpdate(unsigned int, unsigned int, unsigned int const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlasedRectsMeshSetOpacity@CChannel@@UEAAJIH@Z
    virtual long AtlasedRectsMeshSetOpacity(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NHPEBUD2D_RECT_F@@1I@Z
    virtual long AtlasedRectsMeshUpdate(unsigned int, bool, int, D2D_RECT_F const *, D2D_RECT_F const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z
    virtual long BaseAnimationAddBinding(unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z
    virtual long BaseAnimationRemoveBinding(unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BitmapSource@CChannel@@UEAAJIPEAUIWICBitmap@@@Z
    virtual long BitmapSource(unsigned int, IWICBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CachedVisualImageFreeze@CChannel@@UEAAJI@Z
    virtual long CachedVisualImageFreeze(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CachedVisualImageSnapshot@CChannel@@UEAAJIAEBUtagRECT@@@Z
    virtual long CachedVisualImageSnapshot(unsigned int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@IIIW4Enum@MilBrushMappingMode@@W44MilStretch@@@Z
    virtual long CachedVisualImageUpdate(unsigned int, D2D_RECT_F const &, D2D_SIZE_F const &, unsigned int, unsigned int, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureControllerSetCaptureState@CChannel@@UEAAJI_N@Z
    virtual long CaptureControllerSetCaptureState(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureControllerSetContentOffset@CChannel@@UEAAJIHH@Z
    virtual long CaptureControllerSetContentOffset(unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureControllerSetContentSize@CChannel@@UEAAJINN@Z
    virtual long CaptureControllerSetContentSize(unsigned int, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureControllerSetDefaultSDRBoost@CChannel@@UEAAJIM@Z
    virtual long CaptureControllerSetDefaultSDRBoost(unsigned int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureControllerSetReferenceVisual@CChannel@@UEAAJII@Z
    virtual long CaptureControllerSetReferenceVisual(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z
    virtual long CaptureControllerSetRootVisual(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureControllerSetSuspendOnScreenOff@CChannel@@UEAAJI_N@Z
    virtual long CaptureControllerSetSuspendOnScreenOff(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureControllerSetTransform@CChannel@@UEAAJII@Z
    virtual long CaptureControllerSetTransform(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z
    virtual long CaptureControllerSetWindowInfos(unsigned int, _DWMCaptureWindowInformation const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorTransformResourceUpdate@CChannel@@UEAAJIAEBUMilColorTransform@@@Z
    virtual long ColorTransformResourceUpdate(unsigned int, MilColorTransform const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z
    virtual long CombinedGeometryUpdate(unsigned int, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CChannel@@UEAAJXZ
    virtual long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z
    static long Create(CInternalMilCmdConnection *, IDwmChannelProvider *, CChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderDataBuilder@CChannel@@UEAAJPEAPEAUIRenderDataBuilder@@@Z
    virtual long CreateRenderDataBuilder(IRenderDataBuilder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z
    virtual long CreateResource(int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z
    virtual long CreateSharedResource(int, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorVisualSetCursorId@CChannel@@UEAAJI_K@Z
    virtual long CursorVisualSetCursorId(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorVisualSetIsHardwareCursorEnabled@CChannel@@UEAAJI_N@Z
    virtual long CursorVisualSetIsHardwareCursorEnabled(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorVisualSetIsSynchronized@CChannel@@UEAAJI_N@Z
    virtual long CursorVisualSetIsSynchronized(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorVisualSetPosition@CChannel@@UEAAJIHH@Z
    virtual long CursorVisualSetPosition(unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorVisualSetUpdateEvent@CChannel@@UEAAJIPEAX@Z
    virtual long CursorVisualSetUpdateEvent(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoubleResourceUpdate@CChannel@@UEAAJIN@Z
    virtual long DoubleResourceUpdate(unsigned int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@_NPEAI@Z
    virtual long DuplicateSharedResource(void *, int, bool, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EffectGroupUpdate@CChannel@@UEAAJINII@Z
    virtual long EffectGroupUpdate(unsigned int, double, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GaussianBlurEffectUpdate@CChannel@@UEAAJIMII@Z
    virtual long GaussianBlurEffectUpdate(unsigned int, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z
    virtual long Geometry2DGroupUpdate(unsigned int, unsigned int const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandBatch@CChannel@@UEAAXPEAPEAXPEA_N@Z
    virtual void GetCommandBatch(void * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z
    virtual long HolographicInteropTextureSetRoot(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUD2D_RECT_F@@0IIIW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@I@Z
    virtual long ImageLegacyMilBrushUpdate(unsigned int, double, D2D_RECT_F const &, D2D_RECT_F const &, unsigned int, unsigned int, unsigned int, int, int, unsigned int, unsigned int, int, int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndirectSwapchainRenderTargetUnregister@CChannel@@UEAAJI@Z
    virtual long IndirectSwapchainRenderTargetUnregister(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndirectSwapchainRenderTargetUpdateTargetBounds@CChannel@@UEAAJIIIII@Z
    virtual long IndirectSwapchainRenderTargetUpdateTargetBounds(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteTreeEnabled@CChannel@@UEAA_NXZ
    virtual bool IsRemoteTreeEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUD2D_POINT_2F@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z
    virtual long LinearGradientLegacyMilBrushUpdate(unsigned int, double, D2D_POINT_2F const &, D2D_POINT_2F const &, int, int, int, MilGradientStop const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MagnifierRenderTargetCreate@CChannel@@UEAAJI_KAEBUMAGN_ADAPTERTEXTURES@@@Z
    virtual long MagnifierRenderTargetCreate(unsigned int, uint64_t, MAGN_ADAPTERTEXTURES const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z
    virtual long MagnifierRenderTargetSetColorTransform(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z
    virtual long MagnifierRenderTargetSetFilterList(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MagnifierRenderTargetSetResampleMode@CChannel@@UEAAJIW4Enum@CompositionResampleMode@@@Z
    virtual long MagnifierRenderTargetSetResampleMode(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z
    virtual long MagnifierRenderTargetSetTransform(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MagnifierRenderTargetUpdate@CChannel@@UEAAJIAEBUMAGN_ADAPTERTEXTURES@@@Z
    virtual long MagnifierRenderTargetUpdate(unsigned int, MAGN_ADAPTERTEXTURES const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatrixTransform3DUpdate@CChannel@@UEAAJIAEBU_D3DMATRIX@@@Z
    virtual long MatrixTransform3DUpdate(unsigned int, _D3DMATRIX const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatrixTransformUpdate@CChannel@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z
    virtual long MatrixTransformUpdate(unsigned int, D2D_MATRIX_3X2_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeshGeometry2DUpdate@CChannel@@UEAAJIHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z
    virtual long MeshGeometry2DUpdate(unsigned int, int, D2D_POINT_3F const *, D2D_POINT_2F const *, unsigned int, unsigned int const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionRegisterForNotifications@CChannel@@UEAAJ_N@Z
    virtual long PartitionRegisterForNotifications(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionSetCurrentMmTask@CChannel@@UEAAJAEBUDWM_MMTASK@@@Z
    virtual long PartitionSetCurrentMmTask(DWM_MMTASK const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionSetCursor@CChannel@@UEAAJI_N0HH@Z
    virtual long PartitionSetCursor(unsigned int, bool, bool, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionSetExcludeFromDDA@CChannel@@UEAAJI_N@Z
    virtual long PartitionSetExcludeFromDDA(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionSetMagnifier@CChannel@@UEAAJI_N@Z
    virtual long PartitionSetMagnifier(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionSwitchRemotingMode@CChannel@@UEAAJW4Enum@DwmRemotingMode@@I@Z
    virtual long PartitionSwitchRemotingMode(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionToggleHolographicSuspension@CChannel@@UEAAJ_N@Z
    virtual long PartitionToggleHolographicSuspension(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekNextMessage@CChannel@@UEAA_NPEAUMIL_MESSAGE@@@Z
    virtual bool PeekNextMessage(MIL_MESSAGE *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CChannel@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long QueryResourceInterface(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RectResourceUpdate@CChannel@@UEAAJIAEBUD2D_RECT_F@@@Z
    virtual long RectResourceUpdate(unsigned int, D2D_RECT_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RectangleGeometrySetRectangle@CChannel@@UEAAJIMMMMMMMMMMMM_N@Z
    virtual long RectangleGeometrySetRectangle(unsigned int, float, float, float, float, float, float, float, float, float, float, float, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z
    virtual long RedirectVisualSetRedirectedVisual(unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CChannel@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCommandBatch@CChannel@@UEAAXXZ
    virtual void ReleaseCommandBatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResource@CChannel@@UEAAJI@Z
    virtual long ReleaseResource(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z
    virtual long RenderDataUpdate(unsigned int, IRenderDataBuilder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTargetSetRoot@CChannel@@UEAAJII@Z
    virtual long RenderTargetSetRoot(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z
    virtual long RgnGeometryUpdate(unsigned int, tagRECT const *, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RotateTransformUpdate@CChannel@@UEAAJINNN@Z
    virtual long RotateTransformUpdate(unsigned int, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundTripRequest@CChannel@@UEAAJI@Z
    virtual long RoundTripRequest(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleTransformUpdate@CChannel@@UEAAJINNNN@Z
    virtual long ScaleTransformUpdate(unsigned int, double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCommand@CChannel@@QEAAJPEAXI@Z
    long SendCommand(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeResourceUpdate@CChannel@@UEAAJIAEBUD2D_SIZE_F@@@Z
    virtual long SizeResourceUpdate(unsigned int, D2D_SIZE_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@@Z
    virtual long SolidColorLegacyMilBrushUpdate(unsigned int, double, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z
    virtual long SyncDesktopCaptureBits(_LUID, int, int, unsigned int, unsigned int, int, uint64_t, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncFlush@CChannel@@UEAAJXZ
    virtual long SyncFlush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z
    virtual long SyncIndirectSwapchainRenderTargetCreate(unsigned int, void *, _LUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncLegacyVisualCaptureRenderTargetCaptureBits@CChannel@@UEAAJIIMHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z
    virtual long SyncLegacyVisualCaptureRenderTargetCaptureBits(unsigned int, unsigned int, float, int, int, int, int, uint64_t, int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@AEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z
    virtual long SyncMagnifierRenderTargetCaptureBits(unsigned int, unsigned int, unsigned int, uint64_t, WindissectOpaque, MAGN_UPDATE_TEXTURES_PARAM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z
    virtual long SynchronizedCommit(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z
    virtual long Transform3DGroupUpdate(unsigned int, unsigned int const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z
    virtual long TransformGroupUpdate(unsigned int, unsigned int const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateTransformUpdate@CChannel@@UEAAJINN@Z
    virtual long TranslateTransformUpdate(unsigned int, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z
    virtual long VisualGroupUpdate(unsigned int, unsigned int const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualSetBlurredWallpaperSurface@CChannel@@UEAAJIIPEBUtagRECT@@@Z
    virtual long VisualSetBlurredWallpaperSurface(unsigned int, unsigned int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualSetColorTransform@CChannel@@UEAAJII@Z
    virtual long VisualSetColorTransform(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualSetContent@CChannel@@UEAAJII@Z
    virtual long VisualSetContent(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualSetExcludeSubtree@CChannel@@UEAAJI_N@Z
    virtual long VisualSetExcludeSubtree(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualSetOptions@CChannel@@UEAAJI_N00@Z
    virtual long VisualSetOptions(unsigned int, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualSetPassiveUpdateMode@CChannel@@UEAAJI_N@Z
    virtual long VisualSetPassiveUpdateMode(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualSetResampleMode@CChannel@@UEAAJIW4Enum@CompositionResampleMode@@@Z
    virtual long VisualSetResampleMode(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualSetTouchTargetRect@CChannel@@UEAAJIAEBUtagRECT@@@Z
    virtual long VisualSetTouchTargetRect(unsigned int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualTargetSetRoot@CChannel@@UEAAJII@Z
    virtual long VisualTargetSetRoot(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualTopLevelNode@CChannel@@UEAAJIPEAUHWND__@@_N@Z
    virtual long VisualTopLevelNode(unsigned int, HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForNextMessage@CChannel@@UEAAJPEAUIMessageLoopExtensions@@KPEBQEAXKPEAK@Z
    virtual long WaitForNextMessage(IMessageLoopExtensions *, unsigned long, void * const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowNodeInitialize@CChannel@@UEAAJIPEAUHWND__@@PEAUHSPRITE__@@K_K@Z
    virtual long WindowNodeInitialize(unsigned int, HWND__*, HSPRITE__*, unsigned long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowNodeSetIsComposeOnce@CChannel@@UEAAJI_N@Z
    virtual long WindowNodeSetIsComposeOnce(unsigned int, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCommand@CChannel@@AEAAJPEAXII@Z
    long BeginCommand(void *, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@@Z
    CChannel(CInternalMilCmdConnection *, IDwmChannelProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z
    void CheckHandle(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z
    void CheckOptionalHandle(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z
    void CreateNewHandleTableEntry(unsigned int, int, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidHandle@CChannel@@AEAA_NI@Z
    bool IsValidHandle(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z
    static long MilResourcePropertyFromDwmResourceProperty(int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z
    static long MilTypeFromDwmType(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z
    long SendSyncCommand(void const *, unsigned int, MIL_MESSAGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncFlushInternal@CChannel@@AEAAJXZ
    long SyncFlushInternal();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CChannel@@AEAA@XZ
    ~CChannel();
};
