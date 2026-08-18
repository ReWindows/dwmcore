# `global` :: `CDrawingContext`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `dwmcore.dll`. Total members: **131**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class ATL; 
class BamoImpl; 
class CBlurredBackdropCache; 
class CCachedImageProducer; 
class CCachedVisualImage; 
class CCaptureRenderTarget; 
class CChainingHelper; 
class CChannel; 
class CCheckMPOCache; 
class CComputeScribbleScheduler; 
class CConditionalExpression; 
class CCpuClipAntialiasSinkContext; 
class CCpuClippingData; 
class CCursorState; 
class CD2DBitmapCache; 
class CD3DDevice; 
class CDDisplayCachedScanout; 
class CDrawListEntryBatch; 
class CDrawingContext; 
class CDropShadow; 
class CDummyRemotingSwapChain; 
class CEdgeFlagsMap; 
class CExternalEffectGraph; 
class CGlobalCompositionSurfaceInfo; 
class CHolographicInteropTexture; 
class CInputSinkStruct; 
class CLegacySwapChain; 
class CManipulation; 
class CManipulationManager; 
class COverlayContext; 
class CPolygonShape; 
class CPreComputeContext; 
class CPrimitiveBuffer; 
class CProcessAttributionManager; 
class CProcessResourceAttributionReporter; 
class CProjectedShadowScene; 
class CRoundedRectangleShape; 
class CScopedClipStack; 
class CSparseStorage; 
class CSuperWetInkManager; 
class CSurfaceBrush; 
class CSurfaceShaderComposer; 
class DwmDbg; 
class InputTraceLogging; 
class KeyframeSequence; 
class Mesh; 
namespace Microsoft { namespace Bamo { namespace Lib { namespace BamoImpl { class dataprovider_AutoBamos; } } } } 
namespace Microsoft { namespace WRL { class Details; } } 
class Path; 
class detail; 
class ATL; class AllocatedStorage; class AnimationHelper; class AxisWithType; class BamoDataProviderProxy; class BamoDataProviderRegistrarPrincipal; class BamoDataProviderRegistrarStub; class BamoDataSourceProxy; class BamoImpl; class CAffineTransform2DEffect; class CAnimation; class CAnimationController; class CAnimationGlobalConfiguration; class CAnimationInterpolator; class CAnimationPrimitiveBuffer; class CAnimationTrigger; class CArithmeticCompositeEffect; class CArrayBasedCoverageSet; class CAsyncFlushResponse; class CAsyncTask; class CAtlasBitmapResource; class CAtlasEntry; class CAtlasManager; class CAtlasTexture; class CAtlasedRectsGroup; class CAtlasedRectsMesh; class CBackdropBrush; class CBackdropVisualImage; class CBaseAnimation; class CBaseClipStack; class CBaseExpression; class CBatchCommand; class CBatchDeferral; class CBatchOptimizer; class CBitmap; class CBitmapLock; class CBitmapLockState; class CBitmapLockUnaligned; class CBitmapRealization; class CBitmapRenderStrategy; class CBitmapResource; class CBitmapResourceRenderStrategy; class CBlendEffect; class CBlurRenderingGraph; class CBlurRenderingGraphBuilder; class CBlurredBackdropCache; class CBlurredWallpaperBackdropBrush; class CBrightnessEffect; class CBrush; class CBrushDrawListGenerator; class CBrushRenderingEffect; class CBrushRenderingEffectFactory; class CBrushRenderingGraph; class CBrushRenderingGraphBuilder; class CBspNode; class CBspPolygonListBuilder; class CBspPreComputeHelper; class CBspTreeIterator; class CBufferedInteractionOutput; class CBufferedOutputPointer; class CCachedImageProducer; class CCachedVisualImage; class CCachedWindowBackgroundTreatment; class CCaptureController; class CCaptureRenderTarget; class CChainingHelper; class CChannel; class CChannelContext; class CChannelTable; class CCheckMPOCache; class CClientMemoryBitmap; class CClipBrush; class CClipStack; class CClockBase; class CColorBrush; class CColorDrawListBrush; class CColorGradientStop; class CColorKey; class CColorKeyBitmap; class CColorKeyBitmapRealization; class CColorMatrixEffect; class CColorResource; class CColorSpaceLayer; class CColorTransformLayer; class CColorTransformResource; class CCombinedGeometry; class CCommandBatch; class CCommandBuffer; class CCommonRegistryData; class CCommonRenderingEffect; class CCommonRenderingEffectFactory; class CCommonRenderingShaderCache; class CCommonTransferParameters; class CCompSwapChain; class CCompiledEffectCache; class CCompiledEffectTemplate; class CComplexShape; class CComponentTransform2D; class CComponentTransform3D; class CComposeTop; class CCompositeEffect; class CCompositingShaderCache; class CComposition; class CCompositionAmbientLight; class CCompositionDistantLight; class CCompositionDynamicTexture; class CCompositionEnvironmentLight; class CCompositionLight; class CCompositionMagnifierBrush; class CCompositionMipmapSurface; class CCompositionPointLight; class CCompositionSpotLight; class CCompositionSurfaceBitmap; class CCompositionSurfaceInfo; class CCompositionSurfaceManager; class CCompositionSwapchainStatistics; class CCompositionTransform; class CCompressedSourceBitmap; class CComputeScribble; class CComputeScribbleFramebuffer; class CComputeScribbleRenderer; class CComputeScribbleScheduler; class CComputeScribbleStopwatch; class CConditionalExpression; class CConnection; class CContainerVectorShape; class CContent; class CConversionSwapChain; class CConvexPolygonEdgeMap; class CCornerRects; class CCpuClip; class CCpuClipAntialiasBatchCommand; class CCpuClipAntialiasDrawListEntry; class CCpuClipAntialiasSink; class CCpuClipAntialiasSinkContext; class CCpuClippingData; class CCrossContainerGuestReadWriteSharedSection; class CCursorManager; class CCursorState; class CCursorVisual; class CCustomKernelEffect; class CCyclicResourceListEntry; class CD2DBitmap; class CD2DBitmapCache; class CD2DBrush; class CD2DClipStack; class CD2DContext; class CD2DEffect; class CD2DFactory; class CD2DGenericInk; class CD2DInk; class CD2DLayer; class CD2DResource; class CD2DResourceManager; class CD2DSharedBuffer; class CD2DTarget; class CD2DTargetStack; class CD3DBatchExecutionContext; class CD3DConstantBuffer; class CD3DDevice; class CD3DDynamicAppendBuffer; class CD3DPixelShader; class CD3DResource; class CD3DResourceLeakChecker; class CD3DResourceManager; class CD3DSurface; class CD3DTexture; class CD3DVidMemOnlyTexture; class CDDARenderTarget; class CDDASwapChain; class CDDisplayAgedCachedScanout; class CDDisplayCachedScanout; class CDDisplayFlipAwayFence; class CDDisplayManager; class CDDisplayRenderTarget; class CDDisplaySwapChain; class CDDisplaySwapChainBuffer; class CDataBlockReader; class CDataSourceReader; class CDataStreamReader; class CDataStreamWriter; class CDebugFrameCounter; class CDebugVisualImage; class CDecodeBitmap; class CDefaultClock; class CDeferredDestroys; class CDelegatedInkCanvas; class CDesktopTree; class CDesktopTreeData; class CDeviceManager; class CDeviceTextureTarget; class CDirectFlipInfo; class CDirtyRegionAnnotation; class CDirtyRegionAnnotationAllocationSet; class CDisplayDebugFrameCounter; class CDisplayManager; class CDrawListBatchManager; class CDrawListBitmap; class CDrawListBrush; class CDrawListCache; class CDrawListEntry; class CDrawListEntryBatch; class CDrawListEntryBuilder; class CDrawListPrimitive; class CDrawListPrimitive0; class CDrawListPrimitive8; class CDrawingContext; class CDropShadow; class CDummyRemotingSwapChain; class CDxHandleAdvancedDirectFlipBitmapRealization; class CDxHandleBitmapRealization; class CDxHandleStereoBitmapRealization; class CDxHandleYUVBitmapRealization; class CEdgeFlagsMap; class CEffect; class CEffectBrush; class CEffectCompilationService; class CEffectCompilationTask; class CEffectGroup; class CEffectIntermediateProducer; class CEffectPropertyChangeNotification; class CEllipseGeometry; class CEmptyRegionDrawListBrush; class CEnergyReporter; class CEventResponse; class CExcludeVisualReference; class CExpression; class CExpressionForce; class CExpressionManager; class CExpressionPerformanceCounter; class CExpressionValue; class CExpressionValueStack; class CExternalD3DRenderer; class CExternalEffectGraph; class CExternalLayer; class CFSVPProvider; class CFailFastError; class CFailFastInScope; class CFilterEffect; class CFilterEffectLayer; class CFlipAwayFence; class CFlipExSwapchainStatistics; class CFloat16; class CFloatFPU; class CFloatResource; class CFloodEffect; class CFormatConverter; class CFragmentIterator; class CFrame; class CFrictionAccelerator; class CGDIBitmapRealization; class CGDISectionBitmapRealization; class CGDISubSectionBitmapRealization; class CGammaBlendLayer; class CGaussianBlurEffect; class CGdiSpriteBitmap; class CGenericInk; class CGenericInkTipPointSource; class CGeometry; class CGeometry2D; class CGeometry2DGroup; class CGeometryGroup; class CGeometryOnlyDrawListBrush; class CGestureTargetingManager; class CGlobalComposition; class CGlobalCompositionSurfaceInfo; class CGlobalDrawingContext; class CGlobalInputManager; class CGlobalManipulationManager; class CGlobalMit; class CGlobalSurfaceManager; class CGradientBrush; class CGradientColorData; class CGradientLegacyMilBrush; class CGradientSource; class CGraphWalker; class CGravityBounceAccelerator; class CGroupBatchCommand; class CHitTestContext; class CHolographicClient; class CHolographicComposition; class CHolographicDisplay; class CHolographicExclusiveMode; class CHolographicExclusivePresentData; class CHolographicExclusiveView; class CHolographicFrameProcessor; class CHolographicInteropTarget; class CHolographicInteropTaskQueue; class CHolographicInteropTexture; class CHolographicManager; class CHolographicViewer; class CHoverPointerSource; class CHueRotationEffect; class CHwLightCollectionBuffer; class CImageLegacyMilBrush; class CImageSource; class CIndirectSwapchainRenderTarget; class CInjectionAnimation; class CInk; class CInkCanvasScribble; class CInputManager; class CInputProxy; class CInputSinkContext; class CInputSinkStruct; class CInteraction; class CInteractionChain; class CInteractionContextTransformHelper; class CInteractionContextWrapper; class CInteractionProcessor; class CInteractionRoot; class CInteractionTracker; class CInteractionTrackerBindingManager; class CInteractionTrackerPositionAnimation; class CInteractionTrackerScaleAnimation; class CInternalMilCmdConnection; class CInterpolatePathsOperation; class CKMAdapterHandle; class CKernelTransport; class CKeyframeAnimation; class CKst; class CKstBase; class CLIENT_CHANNEL_HANDLE_ENTRY; class CLayer; class CLayerStack; class CLayerVisual; class CLegacyAnimationTrigger; class CLegacyMilBrush; class CLegacyRemotingSwapChain; class CLegacyRenderTarget; class CLegacyStereoRenderTarget; class CLegacyStereoSwapChain; class CLegacySurfaceManager; class CLegacySwapChain; class CLegacySwapChainBuffer; class CLegacyVisualCaptureRenderTarget; class CLightStack; class CLightsMask; class CLineGeometry; class CLineSegment; class CLinearGradientBrush; class CLinearGradientLegacyMilBrush; class CLinearInterpolationLayer; class CLinearTransferEffect; class CLinkedShader; class CLogicalSurfaceHandleMap; class CLuid; class CMILCOMWeakRef; class CMILMatrix; class CMILPoolResource; class CMILRefCountBaseT; class CMILRefCountImpl; class CMagnifierRenderTarget; class CManipulation; class CManipulationContext; class CManipulationFrame; class CManipulationManager; class CManipulationTransform; class CMaskBrush; class CMatrixResource; class CMatrixStack; class CMatrixStack2D; class CMatrixTransform; class CMatrixTransform3D; class CMegaRectBatchCommand; class CMegaRectCollection; class CMergedDirtyRect; class CMergedRect; class CMeshCacheManager; class CMeshGeometry2D; class CMessageConversationHost; class CMilObjectDeleter; class CMilPoint2F; class CMit; class CMmcssTask; class CMonitorClock; class CMonitorDirty; class CMonitorTransform; class CMotion; class CMultiPrimitiveDrawListBrush; class CNaturalAnimation; class CNaturalAnimationScalarForceAdapater; class CNineGridBrush; class CNineGridDrawListBrush; class CNode; class CNotificationResource; class CNullRenderStrategy; class COMPOSITION_CAPABILITY_INFO; class COMPOSITION_CLOCK; class COMPOSITION_FRAME_INFO; class CObjectCache; class COccluderClipStack; class COcclusionContext; class COcclusionInfo; class COffScreenRenderTarget; class COffScreenRenderingLayer; class COverlayContext; class COverlaySwapChain; class CPair; class CParallelModeGroup; class CPassthroughEffect; class CPathData; class CPathGeometry; class CPathLengthOperation; class CPathSegmentsShape; class CPayloadedAnimationPrimitiveBuffer; class CPointResource; class CPointerDeviceCache; class CPolygon; class CPolygonBuilder; class CPolygonShape; class CPositionMotion; class CPreComputeContext; class CPreWalkVisual; class CPrimitiveBuffer; class CPrimitiveColor; class CPrimitiveGroup; class CPrimitiveGroupDrawListBrush; class CPrimitiveGroupDrawListGenerator; class CPrimitiveGroupRenderStrategy; class CProcessAttribution; class CProcessAttributionManager; class CProcessAttributionObserver; class CProcessAttributionReporter; class CProcessResourceAttributionReporter; class CProjectedShadow; class CProjectedShadowApproxBlurEffect; class CProjectedShadowApproxBlurGraphBuilder; class CProjectedShadowCaster; class CProjectedShadowReceiver; class CProjectedShadowRenderingEffect; class CProjectedShadowRenderingEffectFactory; class CProjectedShadowScene; class CPropertyChangeResource; class CPropertySet; class CProxyGeometry; class CPtrArrayBase; class CQueue; class CRadialGradientBrush; class CRadialGradientEffect; class CReadWriteLock; class CReconstructableDrawListEntry; class CReconstructableDrawListEntry_UVx0; class CReconstructableDrawListEntry_UVx2; class CReconstructableDrawListEntry_UVxN; class CRectF; class CRectResource; class CRectangleGeometry; class CRectanglesShape; class CRedirectVisual; class CRedirectedGDISurface; class CRedirectedVisualContent; class CRegion; class CRegionGeometry; class CRegionShape; class CRemoteAppRenderTarget; class CRemoteRenderTarget; class CRenderData; class CRenderDataBounds; class CRenderDataBuilder; class CRenderPerf; class CRenderTarget; class CRenderTargetBitmap; class CRenderTargetBitmapCache; class CRenderTargetManager; class CRenderThreadWaitTick; class CRenderingBatchCommand; class CRenderingEffect; class CRenderingTechnique; class CRenderingTechniqueFragment; class CResampleLayer; class CResource; class CResourceFactory; class CResourceTable; class CResourceTag; class CResourceWeakRef; class CResponseItem; class CResponseItemBase; class CRotateTransform; class CRotateTransform3D; class CRoundedRectangleGeometryData; class CRoundedRectangleShape; class CSM_BUFFER_ATTRIBUTES; class CSM_REALIZATION_INFO; class CSM_RGNDATA_const; class CSM_SINGLE_BUFFER_INFO; class CSM_SURFACE_UPDATE_const; class CSM_SYSMEM_SECTION_INFO; class CSaturationEffect; class CScalar; class CScalarForce; class CScalarForceEvaluator; class CScaleMotion; class CScaleTransform; class CScaleTransform3D; class CScanPipeline; class CSceneComponent; class CSceneMaterial; class CSceneMaterialInput; class CSceneMesh; class CSceneMeshRendererComponent; class CSceneMetallicRoughnessMaterial; class CSceneModelTransform; class CSceneNode; class CSceneObject; class CScenePbrMaterial; class CSceneResourceManager; class CSceneSurfaceMaterialInput; class CSceneVisual; class CSceneWorld; class CScheduler; class CScopedClipStack; class CScratchRenderTargetBitmap; class CScribbleSwapChain; class CScrollAnimation; class CScrollKeyframeAnimation; class CScrollPositionKeyframeAnimation; class CScrollScaleKeyframeAnimation; class CSecondaryBitmap; class CSecondaryCrossAdapterDirectBitmap; class CSecondaryCrossAdapterIndirectBitmap; class CSecondaryD2DBitmap; class CSecondarySysmemBitmap; class CSectionBitmapRealization; class CShaderCache; class CShaderLinkingGraphBuilder; class CShadowBlurProducer; class CShadowEffect; class CShadowMaskCachingBlurProducer; class CShadowMaskProducer; class CShape; class CShapeBitmapProducer; class CShapeBoundingContext; class CShapeDrawingContext; class CShapePtr; class CShapeRenderTask; class CShapeTree; class CShapeTreeIterator; class CShapeVisual; class CSharedCircularQueue; class CSharedCircularQueueProducer; class CSharedSection; class CSharedSectionAnimationPrimitiveBuffer; class CSharedSectionBase; class CSharedSectionWrapper; class CSizeResource; class CSkewTransform; class CSnapshot; class CSoftwareCursorScope; class CSolidColorLegacyMilBrush; class CSparseAlignedStorage; class CSparseStorage; class CSpectreCallbackRenderer; class CSpringAccelerator; class CSpriteVectorShape; class CSpriteVisual; class CStereoRenderTargetBitmap; class CStockBitmapProducer; class CSubDrawingContext; class CSubVisualTree; class CSuperWetInkManager; class CSuperWetInkScribble; class CSuperWetInkScribbleBase; class CSuperWetInkVisual; class CSuperWetSource; class CSurfaceBrush; class CSurfaceDrawListBrush; class CSurfaceManager; class CSurfaceShaderComposer; class CSwapChainBuffer; class CSwapchainRenderStrategy; class CSyncLockGroup; class CSynchronousSuperWetInk; class CSystemMemoryBitmap; class CTableTransferEffect; class CTargetMapEntry; class CTargetStats; class CTelemetryFrames; class CThreadContext; class CThreadWaitTick; class CTransform; class CTransform3D; class CTransform3DGroup; class CTransformGroup; class CTransformedGeometryHelper; class CTranslateTransform; class CTranslateTransform3D; class CTransport; class CTreeData; class CTreeDirty; class CTreeEffect; class CTreeEffectLayer; class CTreeLock; class CTrimPathOperation; class CTurbulenceEffect; class CTypedConstantBufferBase; class CVIRenderList; class CValueColorTransformLayer; class CVector3Force; class CVector3ForceEvaluator; class CVectorShape; class CViewBox; class CVirtualMonitorCaptureRenderTarget; class CVirtualSurfaceDrawListBrush; class CVisual; class CVisualBitmap; class CVisualCapture; class CVisualDepthGeometry; class CVisualGroup; class CVisualOcclusionInfo; class CVisualReference; class CVisualReferenceController; class CVisualSurface; class CVisualSurfaceRenderStrategy; class CVisualTree; class CVisualTreeData; class CVisualTreeIterator; class CVisualTreePath; class CWICBitmapRealization; class CWICBitmapWrapper; class CWarpLockSubresource; class CWarpRenderingEffect; class CWeakReference; class CWindowBackdropBrush; class CWindowBackgroundBitmapProducer; class CWindowBackgroundTreatment; class CWindowNode; class CWindowOcclusionInfo; class CYCbCrSurface; class CZOrderedRect; class CaptureBitsResponse; class Chunk; class ChunkElementIterator; class ChunkView; class ClipPlaneInfoRef; class ClipPlaneIterator; class CloseHandle; class ColorConversion; class ColorSpaceHelpers; class CommonRenderingShaderBody; class CommonRenderingShaderDesc; class CompareEdgeDirection; class CompositorTracing; class ComputeScribbleLatencyData; class ContextTable; class CoordMap; class CpuClipAntialiasEntryParams; class CubicBezierInterpolation; class CursorVisualData; class D2D1_ARC_SEGMENT; class D2D1_BEZIER_SEGMENT; class D2D1_BITMAP_PROPERTIES1; class D2D1_BITMAP_PROPERTIES1const; class D2D1_COMPOSITOR_DRAWING_STATE; class D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE; class D2D1_GRADIENT_STOP; class D2D1_INK_POINT; class D2D1_INK_STYLE_PROPERTIES; class D2D1_QUADRATIC_BEZIER_SEGMENT; class D2DMatrix; class D2DMatrixHelper; class D2DQuaternion; class D2DVector2; class D2DVector2const; class D2DVector3; class D2DVector3const; class D2DVector4; class D2DVector4const; class D2DVectorHelper; class D2D_MATRIX_3X2_F; class D2D_MATRIX_4X4_F; class D2D_POINTANDSIZE_F; class D2D_POINTANDSIZE_L; class D2D_POINT_2F; class D2D_POINT_2U; class D2D_POINT_3F; class D2D_POINT_4F; class D2D_RECT_F; class D2D_RECT_U; class D2D_SIZE_F; class D2D_SIZE_U; class D2D_VECTOR_2F; class D2D_VECTOR_3F; class D2D_VECTOR_4F; class D3D11_BUFFER_DESC; class D3D11_MAPPED_SUBRESOURCE; class D3D11_RENDER_TARGET_VIEW_DESC; class D3D11_SHADER_RESOURCE_VIEW_DESC; class D3D11_SUBRESOURCE_DATA; class D3D11_TEXTURE2D_DESC; class D3D11_VIEWPORT; class D3D_RECT_F; class DCOMPOSITION_PROCESS_ATTRIBUTION; class DCOMPOSITION_WINDOWNODE_SOURCEMODIFICATIONS; class DCompWetInkStrokeRenderState; class DDisplayTargetResources; class DDisplayTaskPoolResources; class DEVICE_INFO; class DISPLAYCONFIG_MODE_INFO; class DISPLAYCONFIG_PATH_INFO; class DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO; class DWM_MMTASK; class DWM_PLANE_RESOURCE_DESC; class DWM_PRESENT_MULTIPLANE_OVERLAY; class DWM_TEXTURE2D_DESC; class DXGI_ADAPTER_DESC; class DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO; class DXGI_FRAME_STATISTICS; class DXGI_FRAME_STATISTICS_DWM; class DXGI_HDR_METADATA_HDR10; class DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES; class DXGI_MULTIPLANE_OVERLAY_CAPS; class DXGI_MULTIPLANE_OVERLAY_GROUP_CAPS; class DXGI_OUTPUT_DWM_DESC; class DXGI_PRESENT_PARAMETERS; class DXGI_RATIONAL; class DataProviderHelper; class DataProviderManager; class DataProviderProxy; class DataProviderRegistrarConnection; class DataProviderRegistrarPrincipal; class DataSourcePropertySet; class DataSourceProxy; class DefaultHeap; class Derivative; class Destroy; class DisplayId; class DrawListEntryBuilderSetupParams; class DrawingContextFlags; class DwmAnimationPrimitive; class DwmAnimationTimeEventData; class DwmDbg; class DwmMousewheelInteractionConfigurationPrimitive; class DwmPenInteractionConfigurationPrimitive; class DwmTouchInteractionConfigurationPrimitive; class DwmTouchpadInteractionConfigurationPrimitive; class DynArray; class DynArrayIA; class DynArrayIANoCtor; class DynArrayNoZero; class EXCLUSIVE_SURFACE_UPDATE; class EdgeData; class EdgyCompositionConfigurationUpdateEx; class EdgyDetectedParams; class EffectDescriptionKey; class EffectInput; class EffectStage; class ExpressionListEntry; class ExpressionNode; class ExpressionReferenceInfo; class ExpressionReferenceInfoWithCache; class ExpressionReferenceNode; class ExpressionWalkContext; class ExtendMode; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class FlipPropertyItem; class ForceThreshold; class FreeLibrary; class GpCC; class GpCCR; class GpCCRf16; class GpCCRf16const; class HANDLE_TABLE; class HINSTANCE__; class HINTERACTIONCONTEXT__; class HKEY__; class HLSURF__; class HMIL_CONNECTION__; class HMONITOR__; class HOLOGRAPHIC_COMPOSITION_DESC; class HOLOGRAPHIC_DISPLAY_DESC; class HOLOGRAPHIC_VIEWER_DESC; class HRGN__; class HSPRITE__; class HSTRING__; class HWND__; class HomogeneousPoint2D; class IAccelerator; class IAdvancedDirectFlipBitmapRealization; class IAnimationResource; class IAtlasEntryOwner; class IBatchProcessingCompleteListener; class IBitmapDest; class IBitmapLock; class IBitmapRealization; class IBitmapResource; class IBitmapSource; class IBitmapUnlock; class ICapabilitiesContributorTarget; class ICompositionSurfaceInfoListener; class ICompositionSurfaceStatistics; class ICompositorClock; class ID2D1Bitmap; class ID2D1Bitmap1; class ID2D1Brush; class ID2D1Device; class ID2D1DeviceContext; class ID2D1Effect; class ID2D1Factory; class ID2D1Geometry; class ID2D1GeometrySink; class ID2D1GradientStopCollection; class ID2D1Ink; class ID2D1InkStyle; class ID2D1PathGeometry; class ID2D1PrivateCompositorBuffer; class ID2D1PrivateCompositorRenderer; class ID2D1PrivateDepthBuffer; class ID2D1RadialGradientBrush; class ID2D1RectangleGeometry; class ID2D1SimplifiedGeometrySink; class ID2D1StrokeStyle1; class ID2DBitmap; class ID2DBitmapCacheSource; class ID2DContextOwner; class ID3D10Blob; class ID3D11Buffer; class ID3D11ClassLinkage; class ID3D11Device1; class ID3D11Fence; class ID3D11InputLayout; class ID3D11LinkingNode; class ID3D11Module; class ID3D11ModuleInstance; class ID3D11PixelShader; class ID3D11RenderTargetView; class ID3D11Resource; class ID3D11SamplerState; class ID3D11ShaderResourceView; class ID3D11Texture2D; class ID3D11VertexShader; class ID3D11View; class ID3D12CommandQueue; class ID3D12Device; class ID3D12Fence; class ID3D12GraphicsCommandList; class ID3D12Resource; class ID3DDeviceContextState; class IDCompositionDirectInkFactoryPartner; class IDCompositionDirectInkSuperWetRenderer; class IDCompositionDirectInkSuperWetStrokePartner; class IDCompositionDirectInkWetStrokePartner; class IDCompositionInteractionStats; class IDDisplayEventListener; class IDWriteTextFormat; class IDXGIAdapter; class IDXGIAdapter1; class IDXGIDevice; class IDXGIDevice3; class IDXGIFactory5; class IDXGIFactory7; class IDXGIIndirectSwapChain; class IDXGIOutput; class IDXGIOutputDWM; class IDXGIResource; class IDXGIResource1; class IDXGISurface; class IDXGISwapChain1; class IDXGISwapChainDWM1; class IDeviceResource; class IDeviceResourceNotify; class IDeviceTarget; class IDeviceTexture; class IDeviceTextureTarget; class IDirtyRectSource; class IDisplayDeviceInterop; class IDrawListStateSink; class IDrawingContext; class IDwmChannelPrivate; class IDwmChannelProvider; class IDwmCursorController; class IDwmMessageConversationHost; class IFlipContentCallback; class IFlipProducer; class IFlipPropertySet; class IGDIBitmapRealization; class IHolographicDisplayInfo; class IHolographicExclusiveModeManagerProxy; class IHolographicExclusivePresentData; class IHolographicInteropTexture; class IHolographicManager; class IHolographicViewer; class IHolographicWin32kInteropTexture; class IHolographicWin32kInteropTextureCallback; class IInkCanvasInputHost; class IInspectable; class IInteractionContextWrapper; class IInteractionResource; class ILegacyRemotingSwapChain; class ILiftedOverlayHost; class IMILPoolManager; class IManipulationContext; class IManipulationResource; class IMessageCallReceiveHost; class IMessageCallSendHost; class IMessageConversation; class IMessageLoopExtensions; class IMessagePort; class IMessageSession; class IMonitorTarget; class INTERACTION_CHANGESET; class INTERACTION_CONTEXT_OUTPUT; class INTERACTION_UPDATE; class INTERACTION_VELOCITY; class IOverlayMonitorTarget; class IOverlayPlaneResource; class IOverlaySwapChain; class IRenderDataBuilder; class IRenderTarget; class IRenderTargetBitmap; class IScalarForce; class ISceneNotificationListener; class IScribbleSwapChain; class ISpectreLightNode; class ISpectreMaterial; class ISpectreMeshComponent; class ISpectreRenderer; class ISpectreTexture; class ISpectreWorld; class IStereoRenderTargetBitmap; class IStream; class ISwapChain; class ISwapChainBuffer; class ISwapChainRealization; class IUnknown; class IUnknownWeakRef; class IVailRenderTarget; class IVisualTreeClient; class IVisualTreeTarget; class IVtrSurfaceManager; class IWICBitmap; class IWICBitmapLock; class IWICBitmapSource; class IWICDecoderBitmapSource; class IWICImagingFactory; class IWICPalette; class IWarpPalLockSubresourceExtension; class IWeakReference; class IYUVSwapChainRealization; class InertiaCallbackValues; class InjectManipulationArgs; class InputBoundsPair; class InputSinks; class InputTraceLogging; class Insets; class IntegrationState; class InteractionAxis; class InteractionAxisGroup; class InteractionConfigurationGroup; class InteractionMotion; class InteractionOutput; class InteractionSourceManager; class InteractionStateInfo; class InternalFilterInput; class InterpolationMode; class Iterator; class KernelTap; class KeyTraits; class KeyframeData; class KeyframeInterpolation; class KeyframeSequence; class KeyframeValue; class KnownNotNull; class Lanczos; class LightInfo; class Line3D; class LinearInterpolation; class MAGN_ADAPTERTEXTURES; class MAGN_UPDATE_TEXTURES_PARAM; class MANIPULATION_TRANSFORM; class MCCollections; class MILMatrix3x2; class MILMatrix3x2const; class MIL_MESSAGE; class MagnifierCaptureBitsResponse; class ManipulationData; class ManipulationThreadTelemetryData; class MarshaledManipulationInfo; class Matrix3x3; class Matrix3x3const; class MatrixSubchannelMaskInfo; class Mesh; class Mil3DRectL; class Mil3DRectU; class MilColorTransform; class MilGradientStop; class MilPointAndSizeF; class MilRectU; class MilRenderOptions; class MilVertexXYZDUV2; class MilVertexXYZDUV2const; class MonitorTime; class MsgCallState; class MsgCallTypeDefinition; class MsgScopeID; class MsgString; class OSInfo; class OpSpecificData; class Path; class PipelineItem; class PipelineParams; class PixelFormatInfo; class PresentationOutputID; class PrimitiveGeometryDesc; class PrimitiveUVDesc; class PrimitiveVertexAttributesDesc; class ProjectedShadowRenderingShaderBody; class PropertyInfo; class PropertySetStorage; class PropertySetUserModeAllocator; class QpcStopwatch; class QpcTimeConverter; class REMOTE_COMPSURFACE_ATTRIBUTES; class ReconstructableDrawListEntryParams; class RefreshRateInfo; class ReleaseSRWLockExclusive; class RenderTargetInfo; class SamplerMode; class SamplerPresenceEntry; class ScanOpParams; class ScanPipelineBuilder; class SceneMeshMaterialAttributeData; class ScrollOptimization; class SetupInfo; class ShaderLinkingBody; class ShaderLinkingConfig; class ShaderLinkingSamplerDesc; class ShadowHelpers; class SharedStateLayer; class SplitIterator; class StepInterpolation; class StretchAlign; class StridedSpan; class SubchannelMaskInfo; class TMil3DRect; class TMilRect; class TMilRect_; class TargetingInfo; class TemporaryConfiguration; class Time; class TimeDelta; class TimeSpan; class TransformParentData; class UCE_RDP_HEADER; class UpdateOnManipulationThreadArgs; class UpdateOnManipulationThreadWithoutDeltaArgs; class VectorSubchannelMaskInfo; class VertexAAFixup_UVxN; class VertexShaderDesc; class VertexXYW_ColorDW; class VertexXYW_ColorDW_UV2_AAFixup; class VertexXYW_ColorDW_WorldXYZ_Tangent; class Vertex_UVxN; class View; class VisualCaptureBitsResponse; class WICRect; class XamlBackInterpolation; class XamlBounceInterpolation; class XamlCircleInterpolation; class XamlElasticInterpolation; class XamlExponentialInterpolation; class XamlInterpolation; class XamlPowerInterpolation; class XamlSineInterpolation; class _CIT_SI_COMPOSITOR_PROCESS_INFO; class _CONTEXT; class _D3D11_PARAMETER_DESC; class _D3DCOLORVALUE; class _D3DKMT_PRESENTHISTORYTOKEN; class _D3DMATRIX; class _DWMCaptureWindowInformation; class _DWMIndirectMetaData; class _DXGI_PRESENT_MULTIPLANE_OVERLAY; class _DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL; class _EVENT_FILTER_DESCRIPTOR; class _EXCEPTION_RECORD; class _GUID; class _HOVER_INPUT_INFO; class _InputHitTestRequest; class _InputHitTestResult; class _LARGE_INTEGER; class _LIST_ENTRY; class _LUID; class _MARGINS; class _MIT_INPUT_INTEROP_MESSAGE; class _RTL_GENERIC_TABLE; class _RTL_SRWLOCK; class _SEB_RPC_PUBLISH_DATA; class _SLIST_ENTRY; class _SLIST_HEADER; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WORK; class _UNSIGNED_RATIO; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class _WNF_USER_SUBSCRIPTION; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class __m128const; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByRef; class _tlgWrapperByVal; class detail; class handler; class lambda_05cef1f6fdf474c9f3ed207deba0f73b; class lambda_65e615be2a453ca0576c979606f46740; class lambda_c06bd913fe980784c932ce8bf93bd220; class lambda_d28283a6c310c846aef711a97467b492; class permission; class tagCOMPOSITION_CONFIRM_FRAME_INFO; class tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE; class tagCOMPOSITION_TARGET_ID; class tagCOMPOSITION_TARGET_ID_AND_STATS; class tagCOMPOSITION_TARGET_STATS_2; class tagDITCALLBACKSTRUCT; class tagMANIPULATION_INPUT_INFO; class tagMILCMD_AFFINETRANSFORM2DEFFECT; class tagMILCMD_ANIMATION_ADDTIMEEVENTS; class tagMILCMD_ANIMATION_APPEND; class tagMILCMD_ANIMATION_CLEARTIMEEVENTS; class tagMILCMD_ANIMATION_SETCALLBACKID; class tagMILCMD_ANIMATION_SETHANDOFF; class tagMILCMD_ANIMATION_SETINSTANCE; class tagMILCMD_ANIMATION_SETLEGACYTRIGGER; class tagMILCMD_ANIMATION_SETPAUSED; class tagMILCMD_ANIMATION_SETPRIMITIVES; class tagMILCMD_ANIMATION_SETSEEK; class tagMILCMD_ANIMATION_UPDATEBEGINTIME; class tagMILCMD_ARITHMETICCOMPOSITEEFFECT; class tagMILCMD_BASEANIMATION_ADDBINDING; class tagMILCMD_BASEANIMATION_REMOVEBINDING; class tagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS; class tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN; class tagMILCMD_BASEEXPRESSION_SETHASOWNINGTRIGGER; class tagMILCMD_BASEEXPRESSION_SETTARGET; class tagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE; class tagMILCMD_BITMAPRESOURCE_SOURCE; class tagMILCMD_BLENDEFFECT; class tagMILCMD_BRIGHTNESSEFFECT; class tagMILCMD_CACHEDVISUALIMAGE; class tagMILCMD_CACHEDVISUALIMAGE_FREEZE; class tagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT; class tagMILCMD_CAPTURERENDERTARGET_REQUESTFRAME; class tagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID; class tagMILCMD_CAPTURERENDERTARGET_SETBUFFERS; class tagMILCMD_CAPTURERENDERTARGET_SETCONTROLLER; class tagMILCMD_CAPTURERENDERTARGET_SETDIRTYREGIONMODE; class tagMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER; class tagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED; class tagMILCMD_CAPTURERENDERTARGET_SETMINUPDATEINTERVAL; class tagMILCMD_CAPTURERENDERTARGET_SETPREFERREFERENCEVISUAL; class tagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST; class tagMILCMD_CAPTURERENDERTARGET_SETUPDATEID; class tagMILCMD_CAPTURERENDERTARGET_SETVISUALSTOEXCLUDE; class tagMILCMD_CHANNEL_ADDTOPROTOCOL; class tagMILCMD_CHANNEL_ASYNCFLUSH; class tagMILCMD_CHANNEL_BEGINDUPLICATERESOURCE; class tagMILCMD_CHANNEL_COMPLETEDUPLICATERESOURCE; class tagMILCMD_CHANNEL_CREATERESOURCE; class tagMILCMD_CHANNEL_RELEASERESOURCE; class tagMILCMD_CHANNEL_ROUNDTRIPREQUEST; class tagMILCMD_CHANNEL_SETAPPLICATIONID; class tagMILCMD_CHANNEL_SETCONNECTIONID; class tagMILCMD_CHANNEL_SETDESCRIPTION; class tagMILCMD_CHANNEL_SIGNALONALLEFFECTCOMPILATIONSDONE; class tagMILCMD_CHANNEL_SYNCFLUSH; class tagMILCMD_CHANNEL_VISUALCAPTUREBITS; class tagMILCMD_COLORBRUSH_SETALPHA; class tagMILCMD_COLORBRUSH_SETBLUE; class tagMILCMD_COLORBRUSH_SETCOLOR; class tagMILCMD_COLORBRUSH_SETGREEN; class tagMILCMD_COLORBRUSH_SETRED; class tagMILCMD_COLORGRADIENTSTOP_SETCOLOR; class tagMILCMD_COLORGRADIENTSTOP_SETOFFSET; class tagMILCMD_COLORMATRIXEFFECT; class tagMILCMD_COLORRESOURCE; class tagMILCMD_COLORTRANSFORMRESOURCE; class tagMILCMD_COMBINEDGEOMETRY; class tagMILCMD_COMPILEDEFFECTTEMPLATE; class tagMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT; class tagMILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT; class tagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET; class tagMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE; class tagMILCMD_COMPONENTTRANSFORM2D_SETSCALE; class tagMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX; class tagMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT; class tagMILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT; class tagMILCMD_COMPONENTTRANSFORM3D_SETOFFSET; class tagMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION; class tagMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE; class tagMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS; class tagMILCMD_COMPONENTTRANSFORM3D_SETSCALE; class tagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX; class tagMILCMD_COMPOSITEEFFECT; class tagMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR; class tagMILCMD_COMPOSITIONAMBIENTLIGHT_SETINTENSITY; class tagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR; class tagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE; class tagMILCMD_COMPOSITIONDISTANTLIGHT_SETDIRECTION; class tagMILCMD_COMPOSITIONDISTANTLIGHT_SETINTENSITY; class tagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS; class tagMILCMD_COMPOSITIONLIGHT_ADDTARGETS; class tagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS; class tagMILCMD_COMPOSITIONLIGHT_CLEARTARGETS; class tagMILCMD_COMPOSITIONLIGHT_SETENABLED; class tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_CLEARFOCUSPOINT; class tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETCOLORTRANSFORM; class tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETFOCUSPOINT; class tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETMAGNIFICATION; class tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETSHOWCURSOR; class tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETTRACKCURSOR; class tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETUSESMOOTHING; class tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS; class tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES; class tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0const; class tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1const; class tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION2const; class tagMILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR; class tagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE; class tagMILCMD_COMPOSITIONPOINTLIGHT_SETINTENSITY; class tagMILCMD_COMPOSITIONPOINTLIGHT_SETMAXATTENUATIONCUTOFF; class tagMILCMD_COMPOSITIONPOINTLIGHT_SETMINATTENUATIONCUTOFF; class tagMILCMD_COMPOSITIONPOINTLIGHT_SETOFFSET; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0const; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1const; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2const; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTION; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEINTENSITY; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETMAXATTENUATIONCUTOFF; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETMINATTENUATIONCUTOFF; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR; class tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEINTENSITY; class tagMILCMD_COMPOSITIONSURFACEBITMAP; class tagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES; class tagMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION; class tagMILCMD_CONDITIONALEXPRESSION_SETSELECTION; class tagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES; class tagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION; class tagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION_SETSHAREDSECTIONID; class tagMILCMD_DATASOURCEREADER_SETLOOKUPID; class tagMILCMD_DDISPLAYRENDERTARGET_CREATE; class tagMILCMD_DDISPLAYRENDERTARGET_SETDESKTOPTREE; class tagMILCMD_DDISPLAYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER; class tagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM; class tagMILCMD_DROPSHADOW_SETBLURRADIUS; class tagMILCMD_DROPSHADOW_SETCOLOR; class tagMILCMD_DROPSHADOW_SETMASK; class tagMILCMD_DROPSHADOW_SETOFFSET; class tagMILCMD_DROPSHADOW_SETOPACITY; class tagMILCMD_DROPSHADOW_SETSOURCEPOLICY; class tagMILCMD_EFFECTBRUSH_SETINPUT; class tagMILCMD_EFFECTBRUSH_SETPROPERTYSET; class tagMILCMD_EFFECTBRUSH_SETTEMPLATE; class tagMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT; class tagMILCMD_ELLIPSEGEOMETRY_SETRADIUS; class tagMILCMD_EXPRESSION_SETNODESINFO; class tagMILCMD_EXPRESSION_SETPERSISTENTCACHE; class tagMILCMD_EXPRESSION_SETREFERENCEINFO; class tagMILCMD_EXPRESSION_SETSOURCES; class tagMILCMD_FILTEREFFECT_UPDATEINPUTS; class tagMILCMD_FLOATRESOURCE; class tagMILCMD_FLOODEFFECT; class tagMILCMD_GAUSSIANBLUREFFECT; class tagMILCMD_GENERICINK_PROPERTIESUPDATE; class tagMILCMD_GENERICINK_ROUTINGINFO; class tagMILCMD_GENERICINK_SEGMENTUPDATE; class tagMILCMD_GENERICINK_TIPPOINTBUFFER; class tagMILCMD_GENERICINK_VAILPERFRAMEDATABUFFER; class tagMILCMD_GEOMETRYGROUP; class tagMILCMD_GEOMETRY_SETTRANSFORM; class tagMILCMD_GEOMETRY_SETTRIMEND; class tagMILCMD_GEOMETRY_SETTRIMOFFSET; class tagMILCMD_GEOMETRY_SETTRIMSTART; class tagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS; class tagMILCMD_GRADIENTBRUSH_SETEXTENDMODE; class tagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE; class tagMILCMD_GRADIENTBRUSH_SETMAPPINGMODE; class tagMILCMD_GRADIENTBRUSH_SETTRANSFORM; class tagMILCMD_HOLOGRAPHICCOMPOSITION_CREATE; class tagMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL; class tagMILCMD_HOLOGRAPHICDISPLAY_CREATE; class tagMILCMD_HOLOGRAPHICDISPLAY_SETDEBUGOVERLAYFLAGS; class tagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS; class tagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW; class tagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETEXCLUSIVEOPACITY; class tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE; class tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN; class tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA; class tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE; class tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETFLAGS; class tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION; class tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT; class tagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE; class tagMILCMD_HOLOGRAPHICVIEWER_SETFLAGS; class tagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE; class tagMILCMD_HUEROTATIONEFFECT; class tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE; class tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER; class tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS; class tagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA; class tagMILCMD_INK_BASICSTATEUPDATE; class tagMILCMD_INK_SEGMENTCOUNTUPDATE; class tagMILCMD_INK_SEGMENTUPDATE; class tagMILCMD_INK_STARTPOINTUPDATE; class tagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE; class tagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE; class tagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT; class tagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE; class tagMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED; class tagMILCMD_INTERACTIONTRACKER_DWMSTARTED; class tagMILCMD_INTERACTIONTRACKER_SETCALLBACKPROPERTYIDSET; class tagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX; class tagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY; class tagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES; class tagMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS; class tagMILCMD_INTERACTIONTRACKER_SETINTERNALPROPERTIES; class tagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS; class tagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION; class tagMILCMD_INTERACTIONTRACKER_SETMAXSCALE; class tagMILCMD_INTERACTIONTRACKER_SETMINPOSITION; class tagMILCMD_INTERACTIONTRACKER_SETMINSCALE; class tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION; class tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION; class tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION; class tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE; class tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION; class tagMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR; class tagMILCMD_INTERACTION_CAPTUREPOINTER; class tagMILCMD_INTERACTION_DISABLEOUTPUTPREDICTION; class tagMILCMD_INTERACTION_SETHOVERSOURCE; class tagMILCMD_INTERACTION_SETINPUTSINK; class tagMILCMD_INTERACTION_SETMANIPULATION; class tagMILCMD_INTERACTION_SETPROCESSID; class tagMILCMD_INTERACTION_UPDATECONFIGURATION; class tagMILCMD_INTERACTION_UPDATEFLAGS; class tagMILCMD_INTERACTION_UPDATERAILS; class tagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES; class tagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA; class tagMILCMD_KEYFRAMEANIMATION_SETPATHDATA; class tagMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE; class tagMILCMD_KEYFRAMEANIMATION_SETPROGRESS; class tagMILCMD_KEYFRAMEANIMATION_SETPROGRESSBEHAVIOR; class tagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE; class tagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE; class tagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION; class tagMILCMD_LAYERVISUAL_SETEFFECT; class tagMILCMD_LAYERVISUAL_SETFLATTENINGTOLOCALSPACE; class tagMILCMD_LAYERVISUAL_SETSHADOW; class tagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER; class tagMILCMD_LEGACYRENDERTARGET_CREATE; class tagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE; class tagMILCMD_LEGACYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER; class tagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM; class tagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS; class tagMILCMD_LINEARGRADIENTBRUSH_SETENDPOINT; class tagMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT; class tagMILCMD_LINEARTRANSFEREFFECT; class tagMILCMD_LINEGEOMETRY_SETENDPOINT; class tagMILCMD_LINEGEOMETRY_SETSTARTPOINT; class tagMILCMD_MAGNIFIERRENDERTARGET; class tagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS; class tagMILCMD_MAGNIFIERRENDERTARGET_CREATE; class tagMILCMD_MAGNIFIERRENDERTARGET_SETCOLORTRANSFORM; class tagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST; class tagMILCMD_MAGNIFIERRENDERTARGET_SETRESAMPLEMODE; class tagMILCMD_MAGNIFIERRENDERTARGET_SETTRANSFORM; class tagMILCMD_MANIPULATIONTRANSFORM; class tagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS; class tagMILCMD_MANIPULATIONTRANSFORM_SETTRACINGCOOKIE; class tagMILCMD_MANIPULATION_INJECTMANIPULATION; class tagMILCMD_MANIPULATION_SETSOURCEMODIFIERS; class tagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE; class tagMILCMD_MANIPULATION_UPDATESETTINGS; class tagMILCMD_MASKBRUSH_SETMASK; class tagMILCMD_MASKBRUSH_SETSOURCE; class tagMILCMD_MATRIXRESOURCE; class tagMILCMD_MATRIXTRANSFORM; class tagMILCMD_MATRIXTRANSFORM3D; class tagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS; class tagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS; class tagMILCMD_NATURALANIMATION_SETFINALVALUE; class tagMILCMD_NATURALANIMATION_SETINITIALVALUE; class tagMILCMD_NATURALANIMATION_SETINITIALVELOCITY; class tagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS; class tagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY; class tagMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW; class tagMILCMD_NINEGRIDBRUSH_SETSOURCE; class tagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID; class tagMILCMD_PARTITION_BATCHFENCE; class tagMILCMD_PARTITION_BOOSTCOMPOSITORCLOCK; class tagMILCMD_PARTITION_DESKTOPCAPTUREBITS; class tagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS; class tagMILCMD_PARTITION_SETBATCHFENCEDEFEROPTIONS; class tagMILCMD_PARTITION_SETCURRENTMMTASK; class tagMILCMD_PARTITION_SETCURSOR; class tagMILCMD_PARTITION_SETEXCLUDEFROMDDA; class tagMILCMD_PARTITION_SETMAGNIFIER; class tagMILCMD_PARTITION_SWITCHREMOTINGMODE; class tagMILCMD_PARTITION_SYNCHRONIZE; class tagMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION; class tagMILCMD_PATHGEOMETRY_SETPATH; class tagMILCMD_POINTRESOURCE; class tagMILCMD_PRIMITIVECOLOR_SETVALUE; class tagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES; class tagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES; class tagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES; class tagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES; class tagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES; class tagMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT; class tagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT; class tagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL; class tagMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH; class tagMILCMD_PROJECTEDSHADOWCASTER_SETCASTINGVISUAL; class tagMILCMD_PROJECTEDSHADOWCASTER_SETMASK; class tagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER; class tagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK; class tagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL; class tagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS; class tagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS; class tagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS; class tagMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS; class tagMILCMD_PROJECTEDSHADOWSCENE_SETBLURRADIUSMULTIPLIER; class tagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE; class tagMILCMD_PROJECTEDSHADOWSCENE_SETMAXBLURRADIUS; class tagMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY; class tagMILCMD_PROJECTEDSHADOWSCENE_SETMINBLURRADIUS; class tagMILCMD_PROJECTEDSHADOWSCENE_SETMINOPACITY; class tagMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF; class tagMILCMD_PROPERTYCHANGERESOURCE_SETPROPERTYIDSET; class tagMILCMD_PROPERTYSET_SETPROPERTYVALUE; class tagMILCMD_PROPERTYSET_SETTRACINGCOOKIE; class tagMILCMD_PROXYGEOMETRY_SETGEOMETRY; class tagMILCMD_PROXYGEOMETRY_SETVIEWBOX; class tagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSECENTER; class tagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSERADIUS; class tagMILCMD_RADIALGRADIENTBRUSH_SETORIGINOFFSET; class tagMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET; class tagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET; class tagMILCMD_RECTANGLEGEOMETRY_SETOFFSET; class tagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE; class tagMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET; class tagMILCMD_RECTANGLEGEOMETRY_SETSIZE; class tagMILCMD_RECTANGLEGEOMETRY_SETTOPINSET; class tagMILCMD_RECTRESOURCE; class tagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL; class tagMILCMD_REMOTEAPPRENDERTARGET_CREATE; class tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW; class tagMILCMD_REMOTEAPPRENDERTARGET_SETALPHAMODE; class tagMILCMD_REMOTEAPPRENDERTARGET_SETCLEARCOLOR; class tagMILCMD_REMOTEAPPRENDERTARGET_SETCONTENTOFFSET; class tagMILCMD_REMOTEAPPRENDERTARGET_SETSIZE; class tagMILCMD_REMOTEAPPRENDERTARGET_SETVAILDPI; class tagMILCMD_REMOTERENDERTARGET_CREATE; class tagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE; class tagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM; class tagMILCMD_RENDERDATA; class tagMILCMD_RENDERTARGET_SETROOT; class tagMILCMD_RENDERTARGET_UPDATEREFRESHRATE; class tagMILCMD_RESOURCE_SETFLOATPROPERTY; class tagMILCMD_RESOURCE_SETHANDLEPROPERTY; class tagMILCMD_RESOURCE_SETINTEGERPROPERTY; class tagMILCMD_RESOURCE_SETREFERENCEPROPERTY; class tagMILCMD_SATURATIONEFFECT; class tagMILCMD_SCALAR_SETVALUE; class tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMATERIAL; class tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMESH; class tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS; class tagMILCMD_SCENESURFACEMATERIALINPUT_SETBITMAPINTERPOLATIONMODE; class tagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE; class tagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGUMODE; class tagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGVMODE; class tagMILCMD_SHADOWEFFECT; class tagMILCMD_SHAPEVISUAL_SETSHAPES; class tagMILCMD_SHAPEVISUAL_SETVIEWBOX; class tagMILCMD_SHAREDSECTION; class tagMILCMD_SHAREDSECTIONBASE; class tagMILCMD_SHAREDSECTIONBASE_SETDATA; class tagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION; class tagMILCMD_SIZERESOURCE; class tagMILCMD_SNAPSHOT; class tagMILCMD_SNAPSHOT_SETTRANSFORMMATRIX; class tagMILCMD_SPRITEVECTORSHAPE_SETFILLBRUSH; class tagMILCMD_SPRITEVECTORSHAPE_SETGEOMETRY; class tagMILCMD_SPRITEVECTORSHAPE_SETNONSCALINGSTROKE; class tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEBRUSH; class tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY; class tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHOFFSET; class tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT; class tagMILCMD_SPRITEVECTORSHAPE_SETSTROKESTYLE; class tagMILCMD_SPRITEVECTORSHAPE_SETSTROKETHICKNESS; class tagMILCMD_SPRITEVISUAL_SETBRUSH; class tagMILCMD_SPRITEVISUAL_SETSHADOW; class tagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT; class tagMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE; class tagMILCMD_SURFACEBRUSH_SETSNAPTOPIXELS; class tagMILCMD_SURFACEBRUSH_SETSTRETCH; class tagMILCMD_SURFACEBRUSH_SETSUPERDOWNSAMPLE; class tagMILCMD_SURFACEBRUSH_SETSURFACE; class tagMILCMD_SURFACEBRUSH_SETTRANSFORM; class tagMILCMD_SURFACEBRUSH_SETVERTICALALIGNMENT; class tagMILCMD_TABLETRANSFEREFFECT; class tagMILCMD_TABLETRANSFEREFFECT_UPDATETABLE; class tagMILCMD_TURBULENCEEFFECT; class tagMILCMD_VECTORSHAPE_SETTRANSFORM; class tagMILCMD_VIEWBOX_SETHORIZONTALALIGNMENT; class tagMILCMD_VIEWBOX_SETOFFSET; class tagMILCMD_VIEWBOX_SETSIZE; class tagMILCMD_VIEWBOX_SETSTRETCH; class tagMILCMD_VIEWBOX_SETVERTICALALIGNMENT; class tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA; class tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BOUNDSINMONITOR; class tagMILCMD_VISUALCAPTURE; class tagMILCMD_VISUALREFERENCECONTROLLER; class tagMILCMD_VISUALSURFACE_FREEZE; class tagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE; class tagMILCMD_VISUALSURFACE_SETSOURCEOFFSET; class tagMILCMD_VISUALSURFACE_SETSOURCESIZE; class tagMILCMD_VISUALSURFACE_SETSOURCEVISUAL; class tagMILCMD_VISUALSURFACE_SETSTRETCHMODE; class tagMILCMD_VISUAL_APPENDEXCLUDEDSHAREDLIGHTS; class tagMILCMD_VISUAL_APPENDSHAREDLIGHTS; class tagMILCMD_VISUAL_CREATE; class tagMILCMD_VISUAL_FORCELOWCOLOR; class tagMILCMD_VISUAL_INSERTCHILD; class tagMILCMD_VISUAL_PROTECTCONTENT; class tagMILCMD_VISUAL_REMOVEALLCHILDREN; class tagMILCMD_VISUAL_REMOVECHILD; class tagMILCMD_VISUAL_RESAMPLEMODE; class tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE; class tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT; class tagMILCMD_VISUAL_SETCLIP; class tagMILCMD_VISUAL_SETCOLORTRANSFORM; class tagMILCMD_VISUAL_SETCONTENT; class tagMILCMD_VISUAL_SETCONTEXTOVERRIDES; class tagMILCMD_VISUAL_SETEFFECT; class tagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS; class tagMILCMD_VISUAL_SETEXCLUDESUBTREE; class tagMILCMD_VISUAL_SETHEATMAPMODE; class tagMILCMD_VISUAL_SETINTERACTION; class tagMILCMD_VISUAL_SETOFFSET; class tagMILCMD_VISUAL_SETOPACITY; class tagMILCMD_VISUAL_SETOPTIONS; class tagMILCMD_VISUAL_SETPASSIVEUPDATEMODE; class tagMILCMD_VISUAL_SETREDRAWREGIONMODE; class tagMILCMD_VISUAL_SETRELATIVEOFFSET; class tagMILCMD_VISUAL_SETRELATIVESIZE; class tagMILCMD_VISUAL_SETRENDEROPTIONS; class tagMILCMD_VISUAL_SETSHAREDLIGHTS; class tagMILCMD_VISUAL_SETSIZE; class tagMILCMD_VISUAL_SETTOUCHTARGETRECT; class tagMILCMD_VISUAL_SETTRANSFORM; class tagMILCMD_VISUAL_SETTRANSFORMPARENT; class tagMILCMD_VISUAL_SETVISIBLE; class tagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT; class tagMILCMD_VISUAL_TOPLEVELNODE; class tagMILCMD_YCBCRSURFACE; class tagPOINT; class tagPOINTER_INFO; class tagPOINTER_INFO_UNION; class tagRECT; class tagTELEMETRY_POINTER_FRAME_TIMES; class thunk; class type_info; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace CDrawListCacheSet { class ContentEntry; } 
namespace CoordinateSpace { class DeviceHPC; class LocalRenderingHPC; } 
namespace D2D1 { class Matrix3x2F; } 
namespace DirectX { class PackedVector; } 
namespace FastRegion { class CRegion; } 
namespace FastRegion { namespace Internal { class CRgnData; class CStripe; class CWorkBuffer; } } 
namespace Microsoft { namespace Bamo { class BamoPrincipal; class BamoProxy; class BamoStub; class BaseBamoConnection; class BaseBamoPeer; class Lock; } } 
namespace Microsoft { namespace Bamo { namespace Lib { namespace BamoImpl { class dataprovider_AutoBamos; } } } } 
namespace Microsoft { namespace Bamo { namespace Lib { namespace dataprovider_AutoBamos { class BamoList_uint_Proxy; class ListProxy; } } } } 
namespace Microsoft { namespace BamoImpl { class BamoImplObject; class BamoPrincipalImpl; class BamoProxyImpl; class BamoStubImpl; class BaseBamoConnectionImpl; class BaseBamoPeerImpl; class BufferStream; class BufferingMessageCallHost; class CalloutWrapperObject; class ConnectionIndirector; class ConversationItem; class InternalLock; class RemoteCallBuffer; class Util; } } 
namespace Microsoft { namespace CoreUI { class MessageCall; } } 
namespace Microsoft { namespace WRL { class ComPtr; class Details; class FtmBase; class RuntimeClassFlags; } } 
namespace PrimitiveStorage { class CDynamicInlineStorage; } 
namespace RectUniqueness { class NotNeeded; class _CMILSurfaceRect_; class _CMilRectL_; } 
namespace Windows { namespace Devices { namespace Display { namespace Core { class IDisplayAdapter; class IDisplayDevice; class IDisplayFence; class IDisplayHdrMetadata; class IDisplayPrimaryDescription; class IDisplayScanout; class IDisplaySource; class IDisplaySurface; class IDisplaySurfacePrivate; class IDisplayTarget; } } } } 
namespace Windows { namespace Foundation { class IReference; class Numerics; } } 
namespace Windows { namespace Foundation { namespace Collections { class Detail; class IIterator; class IIterator_impl; class IKeyValuePair; class IMapView; } } } 
namespace Windows { namespace Foundation { namespace Collections { namespace Internal { class DefaultEqualityPredicate; class DefaultHash; class DefaultLifetimeTraits; class HashMap; class HashMapOptions; class NaiveSplitView; class SimpleKeyValuePair; } } } } 
namespace Windows { namespace Graphics { class RectInt32; } } 
namespace Windows { namespace Internal { namespace Details { class Git; } } } 
namespace Windows { namespace UI { namespace Composition { class ICompiledEffect; class IEffectDescription; class IEffectInstance; } } } 
namespace XWinRT { class CElementTraits; class ComLock; class FakeStl; class InterfaceLifetimeTraits; class SerializingLockPolicy; class TXPOSITION; class XHashMap; } 
namespace XWinRT { namespace SecureVersionTag { class TagManager; } } 
namespace XWinRT { namespace detail { class AcquireRead; class AcquireWrite; class GitStorageType; class LockHolder; } } 
namespace dataprovider_AutoBamos { class BamoConnection; class BamoPeer; } 
namespace gsl { class details; class span; } 
namespace std { class _Align_type; class _Container_proxy; class _Deque_const_iterator; class _Deque_iterator; class _Deque_simple_types; class _Deque_unchecked_iterator; class _Deque_val; class _Func_class; class _Hash_find_last_result; class _Iterator_base0; class _List_const_iterator; class _List_iterator; class _List_node; class _List_simple_types; class _List_unchecked_const_iterator; class _List_unchecked_iterator; class _List_val; class _Simple_types; class _Tmap_traits; class _Tree; class _Tree_const_iterator; class _Tree_find_hint_result; class _Tree_find_result; class _Tree_id; class _Tree_iterator; class _Tree_node; class _Tree_simple_types; class _Tree_unchecked_const_iterator; class _Tree_val; class _Uhash_compare; class _Value_init_tag; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class allocator; class basic_string; class char_traits; class default_delete; class deque; class equal_to; class function; class hash; class less; class list; class monostate; class move_iterator; class nullptr_t; class optional; class pair; class piecewise_construct_t; class set; class shared_ptr; class tuple; class unique_ptr; class vector; } 
namespace stdext { class bad_alloc; class bad_array_new_length; class checked_array_iterator; } 
namespace wil { class FailureInfo; class com_ptr_t; class err_returncode_policy; class process_heap_deleter; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class FeatureLogging; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class delete_wnf_subscription_state; class empty_wnf_state; class handle_null_resource_policy; class out_param_t; class resource_policy; class unique_storage; class wnf_subscription_state; class wnf_subscription_state_base; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

// Reconstructed from dwmcore.dll by Windissect. 131 member(s).
class CDrawingContext {
public:
    class CSetOverlayColorRenderStateScope;
    class CTryIgnoreCpuClippingScope;
    class NodeEffects;
    class StackBackfaceVisibilityEntry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z
    long AddCpuClipAntialiasDrawList(CDrawListEntry *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDrawingContext@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z
    void AddTransientInkDirtyRegion(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderState@CDrawingContext@@UEAAJXZ
    virtual long ApplyRenderState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEffectsSupported@CDrawingContext@@QEBA_NXZ
    bool AreEffectsSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z
    long BeginFrame(IDeviceTarget *, CMILMatrix const *, _D3DCOLORVALUE const *, int, COverlayContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    void CalcLocalSpaceClippedBounds(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    void CalcWorldSpaceClippedBounds(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long Clear(_D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDrawingContext@@SAXPEAPEAV1@@Z
    static void Create(CDrawingContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z
    bool DoesCpuClipFullyContainRect(WindissectOpaque const &, CMILMatrix const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    bool DrawAsOverlay(IBitmapResource *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z
    virtual long DrawBitmap(CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_NHM@Z
    long DrawBitmapRealization(IBitmapRealization *, WindissectOpaque const &, WindissectOpaque const &, bool, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z
    long DrawBitmapRealization(IBitmapRealization *, WindissectOpaque const &, MILMatrix3x2const &, bool, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z
    long DrawBspPolygonList(CVisual *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z
    virtual long DrawGenericInk(IDCompositionDirectInkWetStrokePartner *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z
    virtual long DrawInk(ID2D1Ink *, _D3DCOLORVALUE const &, ID2D1InkStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z
    long DrawPolygon(CPolygon *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z
    long DrawScene3D(ISpectreWorld *, CCompositionEnvironmentLight *, CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z
    virtual long DrawSolidRectangle(WindissectOpaque const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z
    long DrawSubVisualTree(CVisualTree const *, WindissectOpaque const &, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z
    long DrawTextW(unsigned short *, unsigned int, IDWriteTextFormat *, D2D_RECT_F const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z
    virtual long DrawVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z
    long DrawVisualTree(CVisualTree const *, WindissectOpaque const &, COcclusionContext const *, int, bool, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z
    long EmitDrawListCache(CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFrame@CDrawingContext@@QEAAJXZ
    long EndFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ
    void EtwLogCurrentState() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z
    long FillEffect(ID2D1Effect *, WindissectOpaque const *, D2D_POINT_2F const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z
    long FillRectanglesWithSolidColor(WindissectOpaque const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z
    long FillShapeWithBitmap(IBitmapResource *, CMILMatrix const &, CShape const &, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z
    long FillShapeWithBitmapRealization(IBitmapRealization *, CShape const &, MILMatrix3x2const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z
    long FillShapeWithBrush(CShape const &, ID2D1Brush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z
    long FillShapeWithSolidColor(CShape const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushD2D@CDrawingContext@@QEAAJXZ
    long FlushD2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z
    long GenerateDrawListForOverlayColor(_D3DCOLORVALUE const &, D2D_RECT_F const &, D2D_MATRIX_3X2_F const *, CDrawListEntryBuilder *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveLightCount@CDrawingContext@@QEBAIXZ
    unsigned int GetActiveLightCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z
    long GetBlurredWallpaperEffectInput(D2D_SIZE_F const &, EffectInput *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z
    void GetClipBoundsWorld(WindissectOpaque *, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z
    void GetCpuClip(CCpuClip *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRenderTargetInfo@CDrawingContext@@UEBAAEBVRenderTargetInfo@@XZ
    virtual RenderTargetInfo const & GetCurrentRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTargetDesktopScale@CDrawingContext@@QEBA?BMXZ
    float GetCurrentTargetDesktopScale() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTargetTreeBounds@CDrawingContext@@QEBA?BV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetCurrentTargetTreeBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ
    CVisual * GetCurrentVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentVisualTreePath@CDrawingContext@@QEBAAEBVCVisualTreePath@@XZ
    CVisualTreePath const & GetCurrentVisualTreePath() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentZ@CDrawingContext@@UEBAHXZ
    virtual int GetCurrentZ() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DAntialiasMode@CDrawingContext@@QEBA?AW4D2D1_ANTIALIAS_MODE@@XZ
    int GetD2DAntialiasMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ
    int GetD2DInterpolationMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxTextureSize@CDrawingContext@@QEBAI_N@Z
    unsigned int GetMaxTextureSize(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ
    IMonitorTarget * GetMonitorTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpacity@CDrawingContext@@QEBAMXZ
    float GetOpacity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z
    long GetWindowBackgroundTreatmentEffectInput(D2D_SIZE_F const &, EffectInput *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z
    void GetWorldTransform(CMILMatrix *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z
    virtual void GetWorldTransform3x2(D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHDRTarget@CDrawingContext@@QEBA_NXZ
    bool IsHDRTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIn3DMode@CDrawingContext@@QEBA_NXZ
    bool IsIn3DMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ
    bool IsNormalDesktopRender() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@H@Z
    bool IsOccluded(WindissectOpaque const &, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSoftwareCursor@CDrawingContext@@QEBA_NPEBVCCursorVisual@@@Z
    bool IsSoftwareCursor(CCursorVisual const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ
    bool IsWarpFastPathEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkCurrentState@CDrawingContext@@QEAAJXZ
    long MarkCurrentState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ
    void NotifyFrameContainsProtectedContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@CDrawingContext@@UEAAJXZ
    virtual long Pop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLayer@CDrawingContext@@QEAAJXZ
    long PopLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z
    long PostSubgraph(CVisualTree const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z
    long PreSubgraph(CVisualTree const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z
    long PushClipRectForCurrentNode(WindissectOpaque const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z
    long PushClipShapeForCurrentNode(CShapePtr &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z
    long PushColorTransformLayer(WindissectOpaque const *, CColorTransformResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z
    long PushD2DLayer(CVisual const *, WindissectOpaque const *, ID2D1Geometry *, D2D_MATRIX_3X2_F const *, float, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z
    long PushEffects(WindissectOpaque &, WindissectOpaque const *, CFilterEffect *, WindissectOpaque const *, WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z
    long PushGammaBlendLayer(D2D_POINTANDSIZE_L const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long PushLinearInterpolationLayer(D2D_POINTANDSIZE_L const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z
    long PushOffScreenRenderingLayer(CResourceTag const &, D2D_SIZE_F const &, DisplayId, int, IRenderTargetBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    long PushOverlayClip(IBitmapResource *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z
    long PushRenderTarget(IDeviceTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z
    virtual long PushTransform(CTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z
    long PushValueColorTransformLayer(WindissectOpaque const *, MilColorTransform const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDrawingContext@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadTexture@CDrawingContext@@QEBAXXZ
    void ReadTexture() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAJPEAVIBitmapRealization@@@Z
    long RecordBitmapRealizationInfo(IBitmapRealization *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z
    void RecordBitmapResourceInfo(IBitmapResource *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDrawingContext@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z
    virtual void RestoreDrawingContextFlags(DrawingContextFlags const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ
    void RestoreStateToLastMark();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveDrawingContextFlags@CDrawingContext@@UEBAXPEAUDrawingContextFlags@@@Z
    virtual void SaveDrawingContextFlags(DrawingContextFlags *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z
    long StrokeShapeWithBrush(CShape const &, ID2D1Brush *, float, ID2D1StrokeStyle1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z
    long ValidateBVIEffectInputForRender(WindissectOpaque const &, bool *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawingContext@@IEAA@XZ
    CDrawingContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z
    void PopRenderOptionsInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z
    void PopTransformInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z
    long PushDeviceTransform(CMILMatrix const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z
    long PushRenderOptionsInternal(CVisual const *, MilRenderOptions const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z
    long PushTransformInternal(CVisual const *, CMILMatrix const *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawingContext@@MEAA@XZ
    virtual ~CDrawingContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z
    long ApplyRenderStateInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z
    void CalcClippedNodeWorldSpaceBounds(CVisual const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CDrawingContext@@AEBAJPEAVCVisual@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z
    long CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(CVisual *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcNodeWorldSpaceInputBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z
    void CalcNodeWorldSpaceInputBounds(CVisual const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z
    long D2DGeometryFromShape(CShape const *, CMILMatrix const &, ID2D1Geometry * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ
    long DrawDirtyRegionVisualizationForCurrentNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long DrawRectangleOverlay(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z
    long FillRectanglesWithDrawListBitmap(CDrawListBitmap const &, WindissectOpaque const &, MILMatrix3x2const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ
    long FlushAllDeferredClipping();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChainOverlayColor@CDrawingContext@@AEBA?AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@PEBVIBitmapResource@@@Z
    _D3DCOLORVALUE GetSwapChainOverlayColor(ISwapChainRealization *, IBitmapResource const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z
    long GetUnOccludedWorldShape(CShape const &, int, CShape * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBackdropWalk@CDrawingContext@@AEBA_NXZ
    bool IsBackdropWalk() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z
    bool IsSurfaceSizeValid(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopAllStacks@CDrawingContext@@AEAAXXZ
    void PopAllStacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopAlpha@CDrawingContext@@AEAAX_N@Z
    void PopAlpha(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopClippingScope@CDrawingContext@@AEAAX_N@Z
    void PopClippingScope(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopCpuClip@CDrawingContext@@AEAAXXZ
    void PopCpuClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z
    void PopGpuClipRectInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z
    long PopLayerInternal(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLight@CDrawingContext@@AEAAJXZ
    long PopLight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z
    long PopRenderTargetInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long PushClippingScope(CVisual const *, bool, bool, CMILMatrix const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z
    long PushEffectLayer(CVisual const *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, CResource *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z
    long PushEffectiveAlphaForNode(CVisual const *, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z
    long PushGpuClipRectInternal(CVisual const *, WindissectOpaque const &, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z
    long PushLayer(CVisual const *, CLayer *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z
    long PushLocalSpaceClipAndAlphaInternal(WindissectOpaque const *, WindissectOpaque *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z
    long PushNoOpLayer(CVisual const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long RenderOverlayColor(_D3DCOLORVALUE const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z
    void SetEffectInputToTransparentBlack(D2D_SIZE_F const &, EffectInput *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ
    void SetHeatMapForCurrentNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z
    static long ShapeDataFromGeometry(D2D_SIZE_F const *, CGeometry *, CShapePtr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ
    long UpdateBspCurrentPolygonClippingPlanes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z
    void UpdateDeviceTransform(CMILMatrix const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ
    void UpdateRenderTargetInfo();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `PushEffectLayer` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsSurfaceSizeValid` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `DrawVisualTree` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetClipBoundsWorld` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `PushTransformInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `ValidateBVIEffectInputForRender` | `long` | `Method` | `Pdb` | No (PDB) |
| `CDrawingContext` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `Create` | `void` | `Method` | `Pdb` | No (PDB) |
| `RecordBitmapRealizationInfo` | `long` | `Method` | `Pdb` | No (PDB) |
| `RecordBitmapResourceInfo` | `void` | `Method` | `Pdb` | No (PDB) |
| `DrawPolygon` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushRenderOptionsInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `PopRenderOptionsInternal` | `void` | `Method` | `Pdb` | No (PDB) |
| `FillEffect` | `long` | `Method` | `Pdb` | No (PDB) |
| `PopTransformInternal` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateBspCurrentPolygonClippingPlanes` | `long` | `Method` | `Pdb` | No (PDB) |
| `PopClippingScope` | `void` | `Method` | `Pdb` | No (PDB) |
| `PushDeviceTransform` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateDeviceTransform` | `void` | `Method` | `Pdb` | No (PDB) |
| `StrokeShapeWithBrush` | `long` | `Method` | `Pdb` | No (PDB) |
| `Clear` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApplyRenderState` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushGpuClipRectInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `PopGpuClipRectInternal` | `void` | `Method` | `Pdb` | No (PDB) |
| `DrawVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawSubVisualTree` | `long` | `Method` | `Pdb` | No (PDB) |
| `DoesCpuClipFullyContainRect` | `bool` | `Method` | `Pdb` | No (PDB) |
| `PushEffectiveAlphaForNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `FlushAllDeferredClipping` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushClippingScope` | `long` | `Method` | `Pdb` | No (PDB) |
| `PopLayer` | `long` | `Method` | `Pdb` | No (PDB) |
| `PopLayerInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushLayer` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetD2DInterpolationMode` | `enum D2D1_INTERPOLATION_MODE` | `Accessor` | `Pdb` | No (PDB) |
| `FillRectanglesWithDrawListBitmap` | `long` | `Method` | `Pdb` | No (PDB) |
| `FillShapeWithBitmapRealization` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetOpacity` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `FillShapeWithBitmap` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShapeDataFromGeometry` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetUnOccludedWorldShape` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWorldTransform3x2` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `FillShapeWithBrush` | `long` | `Method` | `Pdb` | No (PDB) |
| `BeginFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `EmitDrawListCache` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApplyRenderStateInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `RestoreDrawingContextFlags` | `void` | `Method` | `Pdb` | No (PDB) |
| `PushRenderTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `PopRenderTargetInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `EndFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `PopAllStacks` | `void` | `Method` | `Pdb` | No (PDB) |
| `PushOffScreenRenderingLayer` | `long` | `Method` | `Pdb` | No (PDB) |
| `D2DGeometryFromShape` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushD2DLayer` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushLocalSpaceClipAndAlphaInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `PopCpuClip` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddCpuClipAntialiasDrawList` | `long` | `Method` | `Pdb` | No (PDB) |
| `PostSubgraph` | `long` | `Method` | `Pdb` | No (PDB) |
| `Pop` | `long` | `Method` | `Pdb` | No (PDB) |
| `PreSubgraph` | `long` | `Method` | `Pdb` | No (PDB) |
| `CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds` | `long` | `Method` | `Pdb` | No (PDB) |
| `GenerateDrawListForOverlayColor` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentVisual` | `class CVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `CalcNodeWorldSpaceInputBounds` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetWindowBackgroundTreatmentEffectInput` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetBlurredWallpaperEffectInput` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetMonitorTarget` | `class IMonitorTarget *` | `Accessor` | `Pdb` | No (PDB) |
| `DrawSolidRectangle` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawBitmapRealization` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawBitmapRealization` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsHDRTarget` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsWarpFastPathEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetCpuClip` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `PushClipRectForCurrentNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawBspPolygonList` | `long` | `Method` | `Pdb` | No (PDB) |
| `FillRectanglesWithSolidColor` | `long` | `Method` | `Pdb` | No (PDB) |
| `MarkCurrentState` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushTransform` | `long` | `Method` | `Pdb` | No (PDB) |
| `~CDrawingContext` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `IsOccluded` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsOccluded` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetWorldTransform` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `CalcLocalSpaceClippedBounds` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddTransientInkDirtyRegion` | `void` | `Method` | `Pdb` | No (PDB) |
| `CalcWorldSpaceClippedBounds` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsBackdropWalk` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `FillShapeWithSolidColor` | `long` | `Method` | `Pdb` | No (PDB) |
| `RenderOverlayColor` | `long` | `Method` | `Pdb` | No (PDB) |
| `EtwLogCurrentState` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentZ` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `IsNormalDesktopRender` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetD2DAntialiasMode` | `enum D2D1_ANTIALIAS_MODE` | `Accessor` | `Pdb` | No (PDB) |
| `SaveDrawingContextFlags` | `void` | `Method` | `Pdb` | No (PDB) |
| `PopAlpha` | `void` | `Method` | `Pdb` | No (PDB) |
| `DrawGenericInk` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsIn3DMode` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateRenderTargetInfo` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetEffectInputToTransparentBlack` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `RestoreStateToLastMark` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentRenderTargetInfo` | `class RenderTargetInfo const &` | `Accessor` | `Pdb` | No (PDB) |
| `GetMaxTextureSize` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `NotifyFrameContainsProtectedContent` | `void` | `Method` | `Pdb` | No (PDB) |
| `PopLight` | `long` | `Method` | `Pdb` | No (PDB) |
| `AreEffectsSupported` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetSwapChainOverlayColor` | `struct _D3DCOLORVALUE` | `Accessor` | `Pdb` | No (PDB) |
| `GetCurrentVisualTreePath` | `class CVisualTreePath const &` | `Accessor` | `Pdb` | No (PDB) |
| `FlushD2D` | `long` | `Method` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `PushLinearInterpolationLayer` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `PushColorTransformLayer` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushNoOpLayer` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushEffects` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawAsOverlay` | `bool` | `Method` | `Pdb` | No (PDB) |
| `DrawRectangleOverlay` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetHeatMapForCurrentNode` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `CalcClippedNodeWorldSpaceBounds` | `void` | `Method` | `Pdb` | No (PDB) |
| `DrawBitmap` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawDirtyRegionVisualizationForCurrentNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawInk` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawScene3D` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawTextW` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetActiveLightCount` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `PushClipShapeForCurrentNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushGammaBlendLayer` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushValueColorTransformLayer` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushOverlayClip` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReadTexture` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentTargetDesktopScale` | `float const` | `Accessor` | `Pdb` | No (PDB) |
| `GetCurrentTargetTreeBounds` | `class TMilRect_<float, struct D2D_RECT_F, struct D3D_RECT_F, struct D2D_POINTANDSIZE_F, struct RectUniqueness::NotNeeded> const` | `Accessor` | `Pdb` | No (PDB) |
| `IsSoftwareCursor` | `bool` | `Accessor` | `Pdb` | No (PDB) |
