# `global` :: `CVisual`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `dwmcore.dll`. Total members: **221**.

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

// Reconstructed from dwmcore.dll by Windissect. 221 member(s).
class CVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z
    void AddAdditionalDirtyRect(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z
    virtual long AddBoundsToDirtyRegion(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z
    long AddLight(CCompositionLight *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z
    void AddProjectedShadowCaster(CProjectedShadowCaster *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z
    void AddProjectedShadowReceiver(CProjectedShadowReceiver *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z
    virtual long CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z
    long CalcRootBounds(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z
    static long CalcSrcToDestVisualTransform(CVisualTree const *, int, CVisual *, CVisual *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z
    static long CalcSrcToDestVisualTransform(CVisualTree const *, int, WindissectOpaque, CVisual *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z
    void CalcTransform(CVisualTree const *, CMILMatrix const *, bool *, CMILMatrix *, CMILMatrix *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearInteraction@CVisual@@QEAAXXZ
    void ClearInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z
    virtual long CollectOcclusion(COcclusionContext *, COcclusionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z
    long CreateOrUpdateBVI(CVisualTreePath const &, WindissectOpaque const &, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyOnNewData@CVisual@@QEAAXXZ
    void DirtyOnNewData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLayoutSize@CVisual@@QEAAXXZ
    void EnsureLayoutSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z
    CTreeData * EnsureTreeData(CVisualTree const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z
    CTreeData * FindTreeData(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ
    CMergedDirtyRect * GetAdditionalDirtyRects() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropFlagsDebugString@CVisual@@QEBA?BVDbgString@DwmDbg@@XZ
    WindissectOpaque GetBackdropFlagsDebugString() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z
    CBackdropVisualImage * GetBackdropVisualImage(CVisualTreePath const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ
    CVisualSurface * GetBlurredWallpaperSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z
    WindissectOpaque const & GetBounds(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    virtual long GetBoundsWithEffects(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ
    WindissectOpaque * GetBspPolygonList() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ
    CCachedWindowBackgroundTreatment * GetCachedWindowBackgroundTreatment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildAt@CVisual@@QEBAPEAV1@I@Z
    CVisual * GetChildAt(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipForHitTest@CVisual@@UEBAPEAVCGeometry@@XZ
    virtual CGeometry * GetClipForHitTest() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ
    int GetColorSpace() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorTransform@CVisual@@QEBAPEAVCColorTransformResource@@XZ
    CColorTransformResource * GetColorTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetContentBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentType@CVisual@@UEAAKXZ
    virtual unsigned long GetContentType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z
    CCpuClippingData * GetCpuClippingData(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ
    CDesktopTree * GetDesktopTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectAlpha@CVisual@@QEBAMXZ
    float GetEffectAlpha() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ
    CEffect * GetEffectInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z
    bool GetEffectiveSize(float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ
    WindissectOpaque GetHeatMapProperties() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque const & GetInputBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputHandle@CVisual@@QEBAPEAXXZ
    void * GetInputHandle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ
    _LUID GetInputLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteraction@CVisual@@QEBAPEAVCInteraction@@XZ
    CInteraction * GetInteraction() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ
    CInteraction * GetInteractionInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z
    unsigned int GetLightsCount(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ
    float GetNotifiedWorldRenderingScale() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpacityInternal@CVisual@@QEBAMXZ
    float GetOpacityInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ
    D2D_SIZE_F GetRelativeLayoutSizeInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ
    D2D_VECTOR_3F GetRelativeOffsetInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ
    int GetResampleMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z
    bool GetRootTransform(CMILMatrix *, bool, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z
    int GetSubtreeZ(CVisualTree const *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopLevelWindow@CVisual@@QEBA_KXZ
    uint64_t GetTopLevelWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ
    CTransform3D * GetTransform3DEffectNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z
    CVisual const * GetTransformParent(CVisualTree const *, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ
    TransformParentData * GetTransformParentDataInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ
    _LIST_ENTRY * GetTreeDataListHead() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeEffect@CVisual@@UEBAPEAVCTreeEffect@@XZ
    virtual CTreeEffect * GetTreeEffect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ
    CTreeData * GetUnusedTreeData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z
    float GetVisualAlpha(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z
    long GetVisualTree(CVisualTree * *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ
    CVisualTree * GetVisualTreeNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ
    CWindowBackgroundTreatment * GetWindowBackgroundTreatmentInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ
    float GetWorldRenderingScaleOverride() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z
    long GetWorldTransform(CVisualTreePath const &, int, CMILMatrix *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z
    long GetWorldTransform(CVisualTree const *, int, CMILMatrix *, bool *, CMILMatrix *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ
    D2D_VECTOR_3F GetWorldUpVectorOverride() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z
    int GetZ(CVisualTree const *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContent@CVisual@@UEBA_NXZ
    virtual bool HasContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasInputSink@CVisual@@QEBA_NXZ
    bool HasInputSink() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasInteraction@CVisual@@QEBA_NXZ
    bool HasInteraction() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonDefaultEffectInternal@CVisual@@QEBA_NXZ
    bool HasNonDefaultEffectInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonDefaultWindowBackgroundTreatmentInternal@CVisual@@QEBA_NXZ
    bool HasNonDefaultWindowBackgroundTreatmentInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonEmptyContent@CVisual@@UEBA_NXZ
    virtual bool HasNonEmptyContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasProjectedShadowReceivers@CVisual@@QEBA_NXZ
    bool HasProjectedShadowReceivers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasProtectedContent@CVisual@@QEBA_NXZ
    bool HasProtectedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ
    bool HasSingleD2DBitmapOrPrimitiveGroup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSubtreeSurface@CVisual@@QEBA_NXZ
    bool HasSubtreeSurface() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTestContent(bool, D2D_POINT_2F const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z
    void InvalidateDrawListCaches(CVisualTree const *, unsigned int, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCursor@CVisual@@UEBA_NXZ
    virtual bool IsCursor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLegacyInvertedCursor@CVisual@@UEBA_NXZ
    virtual bool IsLegacyInvertedCursor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z
    bool IsPreserve3DRoot(CVisual const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z
    bool IsSimple3DRootOrHasEffects(CVisual const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkAllBackdropVisualImagesDirty@CVisual@@QEBAXPEBVCVisualTree@@@Z
    void MarkAllBackdropVisualImagesDirty(CVisualTree const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAppendExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDEXCLUDEDSHAREDLIGHTS@@PEBXI@Z
    long ProcessAppendExcludedSharedLights(CResourceTable const *, tagMILCMD_VISUAL_APPENDEXCLUDEDSHAREDLIGHTS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAppendSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_APPENDSHAREDLIGHTS@@PEBXI@Z
    long ProcessAppendSharedLights(CResourceTable const *, tagMILCMD_VISUAL_APPENDSHAREDLIGHTS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_VISUAL_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z
    long ProcessForceLowColor(CResourceTable *, tagMILCMD_VISUAL_FORCELOWCOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z
    long ProcessInsertChild(CResourceTable const *, tagMILCMD_VISUAL_INSERTCHILD const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z
    long ProcessProtectContent(CResourceTable *, tagMILCMD_VISUAL_PROTECTCONTENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z
    long ProcessRemoveAllChildren(CResourceTable const *, tagMILCMD_VISUAL_REMOVEALLCHILDREN const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z
    long ProcessRemoveChild(CResourceTable const *, tagMILCMD_VISUAL_REMOVECHILD const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z
    long ProcessResampleMode(CResourceTable *, tagMILCMD_VISUAL_RESAMPLEMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z
    long ProcessSetBlurredWallpaperSurface(CResourceTable *, tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z
    long ProcessSetBlurredWallpaperSurfaceRect(CResourceTable *, tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z
    long ProcessSetClip(CResourceTable *, tagMILCMD_VISUAL_SETCLIP const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z
    long ProcessSetColorTransform(CResourceTable *, tagMILCMD_VISUAL_SETCOLORTRANSFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTENT@@@Z
    long ProcessSetContent(CResourceTable const *, tagMILCMD_VISUAL_SETCONTENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z
    long ProcessSetContextOverrides(CResourceTable *, tagMILCMD_VISUAL_SETCONTEXTOVERRIDES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEFFECT@@@Z
    long ProcessSetEffect(CResourceTable const *, tagMILCMD_VISUAL_SETEFFECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z
    long ProcessSetExcludeSubtree(CResourceTable *, tagMILCMD_VISUAL_SETEXCLUDESUBTREE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS@@PEBXI@Z
    long ProcessSetExcludedSharedLights(CResourceTable const *, tagMILCMD_VISUAL_SETEXCLUDEDSHAREDLIGHTS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z
    long ProcessSetHeatMapMode(CResourceTable *, tagMILCMD_VISUAL_SETHEATMAPMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z
    long ProcessSetInteraction(CResourceTable *, tagMILCMD_VISUAL_SETINTERACTION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z
    long ProcessSetOffset(CResourceTable *, tagMILCMD_VISUAL_SETOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z
    long ProcessSetOpacity(CResourceTable *, tagMILCMD_VISUAL_SETOPACITY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z
    long ProcessSetOptions(CResourceTable *, tagMILCMD_VISUAL_SETOPTIONS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPassiveUpdateMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETPASSIVEUPDATEMODE@@@Z
    long ProcessSetPassiveUpdateMode(CResourceTable *, tagMILCMD_VISUAL_SETPASSIVEUPDATEMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z
    long ProcessSetRedrawRegionMode(CResourceTable *, tagMILCMD_VISUAL_SETREDRAWREGIONMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFSET@@@Z
    long ProcessSetRelativeOffset(CResourceTable *, tagMILCMD_VISUAL_SETRELATIVEOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@@Z
    long ProcessSetRelativeSize(CResourceTable *, tagMILCMD_VISUAL_SETRELATIVESIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS@@@Z
    long ProcessSetRenderOptions(CResourceTable *, tagMILCMD_VISUAL_SETRENDEROPTIONS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSHAREDLIGHTS@@PEBXI@Z
    long ProcessSetSharedLights(CResourceTable const *, tagMILCMD_VISUAL_SETSHAREDLIGHTS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z
    long ProcessSetSize(CResourceTable *, tagMILCMD_VISUAL_SETSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z
    long ProcessSetTouchTargetRect(CResourceTable *, tagMILCMD_VISUAL_SETTOUCHTARGETRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z
    long ProcessSetTransform(CResourceTable const *, tagMILCMD_VISUAL_SETTRANSFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z
    long ProcessSetTransformParent(CResourceTable const *, tagMILCMD_VISUAL_SETTRANSFORMPARENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z
    long ProcessSetVisible(CResourceTable *, tagMILCMD_VISUAL_SETVISIBLE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z
    long ProcessSetWindowBackgroundTreatment(CResourceTable const *, tagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_TOPLEVELNODE@@@Z
    long ProcessTopLevelNode(CResourceTable *, tagMILCMD_VISUAL_TOPLEVELNODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z
    void ReleaseVisualTreeData(CVisualTreeData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z
    long RemoveLight(CCompositionLight *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z
    void RemoveProjectedShadowCaster(CProjectedShadowCaster *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z
    void RemoveProjectedShadowReceiver(CProjectedShadowReceiver *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z
    virtual long RenderContent(CDrawingContext *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z
    void RenderProjectedShadows(CDrawingContext *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresExternalLayer@CVisual@@QEBA_NXZ
    bool RequiresExternalLayer() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAllBackdropVisualImagesForVisualTree@CVisual@@QEBAXPEBVCVisualTree@@@Z
    void ResetAllBackdropVisualImagesForVisualTree(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z
    void SetBlurredWallpaperSurface(CVisualSurface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z
    void SetBspPolygonList(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z
    void SetCachedWindowBackgroundTreatment(CCachedWindowBackgroundTreatment *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z
    long SetClip(CGeometry *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z
    void SetEffectInternal(CEffect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z
    void SetHeatMapProperties(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z
    void SetInteractionInternal(CInteraction *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z
    void SetNotifiedEffectiveLayoutSize(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z
    void SetNotifiedWorldRenderingScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CVisual@@QEAAXMMM@Z
    void SetOffset(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CVisual@@QEAAXM@Z
    void SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z
    void SetPixelSnappingEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z
    void SetRelativeLayoutSizeInternal(D2D_SIZE_F);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeOffset@CVisual@@QEAAXMMM@Z
    void SetRelativeOffset(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeSize@CVisual@@QEAAXMM@Z
    void SetRelativeSize(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z
    void SetResampleMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CVisual@@QEAAXMM@Z
    void SetSize(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTopLevelWindow@CVisual@@QEAAX_K@Z
    void SetTopLevelWindow(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z
    long SetTransform(CTransform3D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z
    void SetTransformParentDataInternal(TransformParentData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z
    void SetUnusedTreeData(CTreeData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@CVisual@@QEAAX_N@Z
    void SetVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z
    void SetVisualTreeNoRef(CVisualTree *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z
    void SetWindowBackgroundTreatmentInternal(CWindowBackgroundTreatment *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z
    void SetWorldUpVectorOverride(D2D_VECTOR_3F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipInvalidTransformParentSubtree@CVisual@@QEBA_NPEBVCVisualTree@@@Z
    bool SkipInvalidTransformParentSubtree(CVisualTree const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubgraphHasBackdropInput@CVisual@@QEBA_NXZ
    bool SubgraphHasBackdropInput() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubgraphHasWindowBackdropInput@CVisual@@QEBA_NXZ
    bool SubgraphHasWindowBackdropInput() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitNode@CVisual@@QEAAXPEBVCVisualTree@@@Z
    void VisitNode(CVisualTree const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z
    long AddToBspPolygonList(CPolygon *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisual@@IEAA@PEAVCComposition@@@Z
    CVisual(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ
    float CalculateWorldRenderingScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ
    void ClearContentTreeDataCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long CollectAdditionalDirtyRects(CVisualTree const *, CTreeDirty *, CMILMatrix const &, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z
    long ConvertInnerToOuterBounds(CVisualTree const *, CVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z
    void DirtyForInvisibleChild(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z
    void DirtyForVisibleChild(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CVisual@@MEAAXXZ
    virtual void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBspPolygonListCount@CVisual@@IEBAIXZ
    unsigned int GetBspPolygonListCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ
    virtual HWND__* GetHwnd() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z
    long GetPolygonNoRef(CMILMatrix *, float, unsigned int, int, int, int, bool, bool, bool, CPolygon * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetTouchTargetBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z
    CVisual * GetTransformParentForValidation(CVisualTree const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Has3DContent@CVisual@@IEBA_NXZ
    bool Has3DContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAntialiasedContent@CVisual@@MEBA_NXZ
    virtual bool HasAntialiasedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAtlasedContent@CVisual@@MEBA_NXZ
    virtual bool HasAtlasedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBspPolygonList@CVisual@@IEBA_NXZ
    bool HasBspPolygonList() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonOpaqueEffectInternal@CVisual@@IEBA_NXZ
    bool HasNonOpaqueEffectInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPixelSnappedContent@CVisual@@IEBA_NXZ
    bool HasPixelSnappedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ
    virtual bool HasSingleD2DBitmapOrPrimitiveGroupInternal() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z
    long InsertChild(CVisual *, CVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z
    void InvalidateTransformParent(CVisualTree const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z
    void IssueContextUpdateNotification(float, D2D_VECTOR_2F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z
    virtual long NotifyCurrentPropertyValues(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z
    void PropagateFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBspPolygonList@CVisual@@IEAAXXZ
    void ReleaseBspPolygonList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllChildren@CVisual@@IEAAXXZ
    void RemoveAllChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@CVisual@@IEAAXPEAV1@@Z
    void RemoveChild(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z
    static long RenderContentWorker(CVisual *, CContent *, unsigned int, unsigned int, CDrawingContext *, D2D_SIZE_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z
    virtual long SetContent(CContent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z
    long SetEffect(CEffect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z
    long SetInteraction(CInteraction *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHitTest@CVisual@@MEBA_NXZ
    virtual bool ShouldHitTest() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z
    void UpdateBackdropCounts(CVisual const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z
    void UpdateHasBackdropInputFlag(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z
    void UpdateHasWindowBackdropInputFlag(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayoutSize@CVisual@@IEAAXXZ
    void UpdateLayoutSize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisual@@MEAA@XZ
    virtual ~CVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool AdjustContentWorldBounds(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z
    long AppendDirtyRegionVisualizationRects(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ
    void ClearAllBackdropVisualImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z
    bool EnsureWorldTransform(CVisualTree const *, CTreeData *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z
    CTreeData const * GetParentTreeData(CVisualTree const *, CTreeData *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z
    void NotifyMidManipulationPropertyChange(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z
    void NotifyMidManipulationUpdate(int, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClipChanged@CVisual@@AEAAXXZ
    void OnClipChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInnerTransformChanged@CVisual@@AEAAXXZ
    void OnInnerTransformChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanged@CVisual@@AEAAXXZ
    void OnLayoutChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOuterTransformChanged@CVisual@@AEAAXXZ
    void OnOuterTransformChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformChanged@CVisual@@AEAAXXZ
    void OnTransformChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllLights@CVisual@@AEAAXXZ
    void RemoveAllLights();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z
    long RemoveAllSharedLights(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ
    void RemoveDirtyRegionVisualizationData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ
    void UpdateBackdropBlurFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ
    void UpdateBackdropVisualImageForWindowBackgroundTreatment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContentFlags@CVisual@@AEAAXXZ
    void UpdateContentFlags();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `CollectOcclusion` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetWorldTransform` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `CreateOrUpdateBVI` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetProperty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetProperty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessSetTouchTargetRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetOpacity` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetRelativeOffsetInternal` | `struct D2D_VECTOR_3F` | `Accessor` | `Pdb` | No (PDB) |
| `GetRelativeLayoutSizeInternal` | `struct D2D_SIZE_F` | `Accessor` | `Pdb` | No (PDB) |
| `GetOpacityInternal` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `ConvertInnerToOuterBounds` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetTransform3DEffectNoRef` | `class CTransform3D *` | `Accessor` | `Pdb` | No (PDB) |
| `GetTransformParent` | `class CVisual const *` | `Accessor` | `Pdb` | No (PDB) |
| `GetParentTreeData` | `class CTreeData const *` | `Accessor` | `Pdb` | No (PDB) |
| `GetTreeDataListHead` | `struct _LIST_ENTRY *` | `Accessor` | `Pdb` | No (PDB) |
| `GetRootTransform` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `DirtyForVisibleChild` | `void` | `Method` | `Pdb` | No (PDB) |
| `DirtyForInvisibleChild` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetOffset` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `PropagateFlags` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnOuterTransformChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnClipChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessInsertChild` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetWorldTransform` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `EnsureWorldTransform` | `bool` | `Method` | `Pdb` | No (PDB) |
| `CalcRootBounds` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetEffectInternal` | `class CEffect *` | `Accessor` | `Pdb` | No (PDB) |
| `HasNonEmptyContent` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `RenderContent` | `long` | `Method` | `Pdb` | No (PDB) |
| `HitTestContent` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetContentBounds` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `HasSubtreeSurface` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetBackdropVisualImage` | `class CBackdropVisualImage *` | `Accessor` | `Pdb` | No (PDB) |
| `AddAdditionalDirtyRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnChanged` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetVisualAlpha` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `GetBoundsWithEffects` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `HasSingleD2DBitmapOrPrimitiveGroup` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessSetContent` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetContent` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateContentFlags` | `void` | `Method` | `Pdb` | No (PDB) |
| `HasAtlasedContent` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `Has3DContent` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ProcessRemoveChild` | `long` | `Method` | `Pdb` | No (PDB) |
| `CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds` | `long` | `Method` | `Pdb` | No (PDB) |
| `RequiresExternalLayer` | `bool` | `Method` | `Pdb` | No (PDB) |
| `IsOfType` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetEffectAlpha` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessSetTransform` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetTransform` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessSetClip` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetClip` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `OnTransformChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetEffect` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetEffect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetEffectInternal` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `AddProjectedShadowCaster` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddBoundsToDirtyRegion` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetBounds` | `class TMil3DRect<float, class TMilRect_<float, struct D2D_RECT_F, struct D3D_RECT_F, struct D2D_POINTANDSIZE_F, struct RectUniqueness::NotNeeded>, struct D3D_RECT_F, struct MilPointAndSizeF, struct RectUniqueness::NotNeeded> const &` | `Accessor` | `Pdb` | No (PDB) |
| `FindTreeData` | `class CTreeData *` | `Method` | `Pdb` | No (PDB) |
| `GetZ` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetSubtreeZ` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `CVisual` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `VisitNode` | `void` | `Method` | `Pdb` | No (PDB) |
| `EnsureTreeData` | `class CTreeData *` | `Method` | `Pdb` | No (PDB) |
| `OnLayoutChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `ClearContentTreeDataCaches` | `void` | `Method` | `Pdb` | No (PDB) |
| `RenderContentWorker` | `long` | `Method` | `Pdb` | No (PDB) |
| `CalcTransform` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetTransformParentDataInternal` | `struct TransformParentData *` | `Accessor` | `Pdb` | No (PDB) |
| `GetTransformParentForValidation` | `class CVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `GetInteraction` | `class CInteraction *` | `Accessor` | `Pdb` | No (PDB) |
| `ClearAllBackdropVisualImages` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResetAllBackdropVisualImagesForVisualTree` | `void` | `Method` | `Pdb` | No (PDB) |
| `ReleaseVisualTreeData` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetUnusedTreeData` | `class CTreeData *` | `Accessor` | `Pdb` | No (PDB) |
| `SetUnusedTreeData` | `void` | `Accessor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~CVisual` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `ReleaseBspPolygonList` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetBspPolygonList` | `class DynArray<class CPolygon *, 0> *` | `Accessor` | `Pdb` | No (PDB) |
| `GetDesktopTree` | `class CDesktopTree *` | `Accessor` | `Pdb` | No (PDB) |
| `GetVisualTree` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetVisualTreeNoRef` | `class CVisualTree *` | `Accessor` | `Pdb` | No (PDB) |
| `GetColorTransform` | `class CColorTransformResource *` | `Accessor` | `Pdb` | No (PDB) |
| `CollectAdditionalDirtyRects` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetAdditionalDirtyRects` | `class CMergedDirtyRect *` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessRemoveAllChildren` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveAllChildren` | `void` | `Method` | `Pdb` | No (PDB) |
| `RemoveAllLights` | `void` | `Method` | `Pdb` | No (PDB) |
| `RemoveDirtyRegionVisualizationData` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetBlurredWallpaperSurface` | `class CVisualSurface *` | `Accessor` | `Pdb` | No (PDB) |
| `GetCachedWindowBackgroundTreatment` | `class CCachedWindowBackgroundTreatment *` | `Accessor` | `Pdb` | No (PDB) |
| `EnsureLayoutSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetBlurredWallpaperSurface` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetBlurredWallpaperSurface` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetCachedWindowBackgroundTreatment` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `HasInteraction` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `DirtyOnNewData` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddLight` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetVisualTreeNoRef` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetInputHandle` | `void *` | `Accessor` | `Pdb` | No (PDB) |
| `GetInputLuid` | `struct _LUID` | `Accessor` | `Pdb` | No (PDB) |
| `NotifyMidManipulationPropertyChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetInteractionInternal` | `class CInteraction *` | `Accessor` | `Pdb` | No (PDB) |
| `ClearInteraction` | `void` | `Method` | `Pdb` | No (PDB) |
| `InsertChild` | `long` | `Method` | `Pdb` | No (PDB) |
| `NotifyMidManipulationUpdate` | `void` | `Method` | `Pdb` | No (PDB) |
| `FinalRelease` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetInteraction` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetInteraction` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetInteractionInternal` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetPolygonNoRef` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `HasContent` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetLightsCount` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateLayoutSize` | `void` | `Method` | `Pdb` | No (PDB) |
| `CalcSrcToDestVisualTransform` | `long` | `Method` | `Pdb` | No (PDB) |
| `CalcSrcToDestVisualTransform` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsSimple3DRootOrHasEffects` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetBspPolygonListCount` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `RenderProjectedShadows` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetChildAt` | `class CVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `HasInputSink` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `SkipInvalidTransformParentSubtree` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetCpuClippingData` | `class CCpuClippingData *` | `Accessor` | `Pdb` | No (PDB) |
| `HasNonDefaultEffectInternal` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsPreserve3DRoot` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `HasNonDefaultWindowBackgroundTreatmentInternal` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `NotifyCurrentPropertyValues` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetRelativeOffset` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetRelativeOffset` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessSetRelativeSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetRelativeSize` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetRelativeLayoutSizeInternal` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `HasProjectedShadowReceivers` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `AdjustContentWorldBounds` | `bool` | `Method` | `Pdb` | No (PDB) |
| `HasAntialiasedContent` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `HasPixelSnappedContent` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `HasBspPolygonList` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateBackdropBlurFlag` | `void` | `Method` | `Pdb` | No (PDB) |
| `HasProtectedContent` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `HasNonOpaqueEffectInternal` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetClipForHitTest` | `class CGeometry *` | `Accessor` | `Pdb` | No (PDB) |
| `IssueContextUpdateNotification` | `void` | `Method` | `Pdb` | No (PDB) |
| `CalculateWorldRenderingScale` | `float` | `Method` | `Pdb` | No (PDB) |
| `GetNotifiedWorldRenderingScale` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `SetNotifiedWorldRenderingScale` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetNotifiedEffectiveLayoutSize` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetTouchTargetBounds` | `class TMilRect_<float, struct D2D_RECT_F, struct D3D_RECT_F, struct D2D_POINTANDSIZE_F, struct RectUniqueness::NotNeeded>` | `Accessor` | `Pdb` | No (PDB) |
| `RemoveChild` | `void` | `Method` | `Pdb` | No (PDB) |
| `ShouldHitTest` | `bool` | `Method` | `Pdb` | No (PDB) |
| `SetOffset` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `IsCursor` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsLegacyInvertedCursor` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessSetVisible` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateBackdropCounts` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateBackdropVisualImageForWindowBackgroundTreatment` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetWindowBackgroundTreatment` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetWindowBackgroundTreatmentInternal` | `class CWindowBackgroundTreatment *` | `Accessor` | `Pdb` | No (PDB) |
| `SetWindowBackgroundTreatmentInternal` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetSize` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateHasBackdropInputFlag` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetHwnd` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `GetTreeEffect` | `class CTreeEffect *` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateHasWindowBackdropInputFlag` | `void` | `Method` | `Pdb` | No (PDB) |
| `InvalidateDrawListCaches` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetContextOverrides` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetWorldRenderingScaleOverride` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `SetWorldUpVectorOverride` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetWorldUpVectorOverride` | `struct D2D_VECTOR_3F` | `Accessor` | `Pdb` | No (PDB) |
| `GetEffectiveSize` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `operator new` | `void *` | `Operator` | `Pdb` | No (PDB) |
| `HasSingleD2DBitmapOrPrimitiveGroupInternal` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `RemoveLight` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetOptions` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnInnerTransformChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetVisible` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessSetRenderOptions` | `long` | `Method` | `Pdb` | No (PDB) |
| `MarkAllBackdropVisualImagesDirty` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetTransformParent` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetTransformParentDataInternal` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `InvalidateTransformParent` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetOpacity` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetResampleMode` | `enum CompositionResampleMode::Enum` | `Accessor` | `Pdb` | No (PDB) |
| `GetColorSpace` | `enum DXGI_COLOR_SPACE_TYPE` | `Accessor` | `Pdb` | No (PDB) |
| `GetInputBounds` | `class TMil3DRect<float, class TMilRect_<float, struct D2D_RECT_F, struct D3D_RECT_F, struct D2D_POINTANDSIZE_F, struct RectUniqueness::NotNeeded>, struct D3D_RECT_F, struct MilPointAndSizeF, struct RectUniqueness::NotNeeded> const &` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessTopLevelNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetTopLevelWindow` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetResampleMode` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetTopLevelWindow` | `uint64_t` | `Accessor` | `Pdb` | No (PDB) |
| `AddToBspPolygonList` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetBspPolygonList` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessSetExcludeSubtree` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetBlurredWallpaperSurfaceRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetPassiveUpdateMode` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetHeatMapProperties` | `struct CVisual::HeatMapProperty` | `Accessor` | `Pdb` | No (PDB) |
| `RemoveProjectedShadowCaster` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessResampleMode` | `long` | `Method` | `Pdb` | No (PDB) |
| `SubgraphHasBackdropInput` | `bool` | `Method` | `Pdb` | No (PDB) |
| `SubgraphHasWindowBackdropInput` | `bool` | `Method` | `Pdb` | No (PDB) |
| `SetHeatMapProperties` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessCreate` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetContentType` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `AddProjectedShadowReceiver` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppendDirtyRegionVisualizationRects` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessAppendExcludedSharedLights` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessAppendSharedLights` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessForceLowColor` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessProtectContent` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetColorTransform` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetExcludedSharedLights` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetHeatMapMode` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetRedrawRegionMode` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSetSharedLights` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveAllSharedLights` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveProjectedShadowReceiver` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetColorSpace` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetPixelSnappingEnabled` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetBackdropFlagsDebugString` | `class DwmDbg::DbgString const` | `Accessor` | `Pdb` | No (PDB) |
