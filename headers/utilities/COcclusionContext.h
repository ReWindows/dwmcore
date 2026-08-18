#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 49 member(s).
class COcclusionContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z
    void AddOcclusionRect(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderState@COcclusionContext@@UEAAJXZ
    virtual long ApplyRenderState();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COcclusionContext@@QEAA@XZ
    COcclusionContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcVisibleArea@COcclusionContext@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z
    uint64_t CalcVisibleArea(WindissectOpaque const &, int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z
    long CheckAndRecordOverlayCandidate(CVisual *, CCompositionSurfaceInfo *, CMILMatrix const &, CShape const *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z
    long CheckAndRecordOverlayCandidateForContext(COverlayContext *, CVisual *, CCompositionSurfaceInfo *, ISwapChainRealization *, CMILMatrix const &, CShape const *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@COcclusionContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long Clear(_D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z
    void CollectCursor(CCursorVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmap@COcclusionContext@@UEAAJPEAVCResource@@@Z
    virtual long DrawBitmap(CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z
    long DrawClippedImage(CResource *, WindissectOpaque *, CShape const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGenericInk@COcclusionContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z
    virtual long DrawGenericInk(IDCompositionDirectInkWetStrokePartner *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z
    virtual long DrawGeometry(CLegacyMilBrush *, CGeometry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z
    long DrawImage(CResource *, WindissectOpaque const *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long DrawImage(CResource *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawInk@COcclusionContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z
    virtual long DrawInk(ID2D1Ink *, _D3DCOLORVALUE const &, ID2D1InkStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawMesh2D@COcclusionContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z
    virtual long DrawMesh2D(CGeometry2D *, CImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@@Z
    virtual long DrawRectangle(WindissectOpaque const &, CLegacyMilBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z
    virtual long DrawSolidRectangle(WindissectOpaque const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawVisual@COcclusionContext@@UEAAJPEAVCVisual@@@Z
    virtual long DrawVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawYCbCrBitmap@COcclusionContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z
    virtual long DrawYCbCrBitmap(CResource *, CResource *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushOcclusionRects@COcclusionContext@@QEAAJXZ
    long FlushOcclusionRects();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z
    bool GetLargestOccluder(WindissectOpaque const &, bool, int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrent@COcclusionContext@@QEBA_NXZ
    bool IsCurrent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z
    bool IsOccluded(WindissectOpaque const &, int, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEBA_NXZ
    bool IsOverlayCandidateCollectionEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRectInOcclusionRegion@COcclusionContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    bool IsRectInOcclusionRegion(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OptimizeCornerRects@COcclusionContext@@QEBAXPEAVCCornerRects@@H@Z
    void OptimizeCornerRects(CCornerRects *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@COcclusionContext@@UEAAJXZ
    virtual long Pop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z
    long PostSubgraph(CVisualTree const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z
    long PreSubgraph(CVisualTree const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z
    virtual long PushTransform(CTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z
    long SetDeviceTransform(CMILMatrix const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileImage@COcclusionContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_POINT_2F@@M@Z
    virtual long TileImage(CResource *, WindissectOpaque const &, D2D_POINT_2F const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z
    long UpdateDeviceTransform(CMILMatrix const &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COcclusionContext@@QEAA@XZ
    ~COcclusionContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z
    long Compute(CVisualTree const *, WindissectOpaque const &, float, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcNodeWorldBounds@COcclusionContext@@AEBA_NPEBVCVisual@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool CalcNodeWorldBounds(CVisual const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z
    bool CanDiscardCornerRect(WindissectOpaque const &, int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z
    long CheckClipAllowsOcclusion(D2D_SIZE_F const *, CGeometry *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z
    long CollectOcclusion(COcclusionInfo *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z
    void CollectRectangleForOcclusion(WindissectOpaque const &, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositeModeSupportsOcclusion@COcclusionContext@@AEAA_NPEBVCVisual@@@Z
    bool CompositeModeSupportsOcclusion(CVisual const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    bool DeviceRectToPageInPixelsRect(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z
    bool DoesImageOcclude(IUnknown *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NodeIntersectsOcclusionRegion@COcclusionContext@@AEAA_NPEBVCVisual@@PEAVCOcclusionInfo@@PEAM@Z
    bool NodeIntersectsOcclusionRegion(CVisual const *, COcclusionInfo *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    bool PageInPixelsRectToDeviceRect(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopClip@COcclusionContext@@AEAAXXZ
    void PopClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z
    long PushClipInternal(D2D_SIZE_F const *, CGeometry *, CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z
    long PushTransformInternal(CTransform *);
};
