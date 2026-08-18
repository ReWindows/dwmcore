#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class ShadowHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z
    long CreateFastShadowBitmap(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z
    long GenerateBlurIntermediate(CResourceTag const &, CDrawingContext *, IBitmapRealization *, D2D_SIZE_F const *, WindissectOpaque const &, float, IRenderTargetBitmap * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z
    long GenerateMaskIntermediate(CResourceTag const &, CDrawingContext *, D2D_SIZE_F const *, D2D_SIZE_F const &, CBrush *, CShape const *, bool, WindissectOpaque const &, IRenderTargetBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z
    long GetLightPosition(CVisualTree const *, CCompositionLight const *, CVisual *, D2D_VECTOR_3F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z
    long GetLightToCameraMatrix(CVisualTree const *, CCompositionLight const *, WindissectOpaque &, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z
    D2D_VECTOR_4F GetPlaneOfVisual(CVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionMatrix@ShadowHelpers@@YA?AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z
    CMILMatrix GetProjectionMatrix(D2D_VECTOR_3F const &, D2D_VECTOR_4F const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z
    long GetProjectionOntoVisualMatrix(CVisualTree const *, CCompositionLight *, CVisual *, CMILMatrix *);
};
