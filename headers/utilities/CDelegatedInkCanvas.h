#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CDelegatedInkCanvas {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CDelegatedInkCanvas@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDelegatedInkCanvas@@QEAA@PEAVCComposition@@@Z
    CDelegatedInkCanvas(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z
    virtual long CreateScribble(CD3DDevice *, DCompWetInkStrokeRenderState const &, CComputeScribble * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CDelegatedInkCanvas@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueComputeScribbleOnHost@CDelegatedInkCanvas@@UEAAJ_KPEAVCComputeScribble@@@Z
    virtual long EnqueueComputeScribbleOnHost(uint64_t, CComputeScribble *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CDelegatedInkCanvas@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointTransformSpace@CDelegatedInkCanvas@@UEBA?AW4InkPointTransformSpace@@XZ
    virtual int GetPointTransformSpace() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CDelegatedInkCanvas@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDelegatedInkCanvas@@UEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSuperWetCompatible@CDelegatedInkCanvas@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z
    virtual bool IsSuperWetCompatible(CD3DDevice *, DCompWetInkStrokeRenderState const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivated@CDelegatedInkCanvas@@UEAAXXZ
    virtual void OnActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeactivated@CDelegatedInkCanvas@@UEAAXXZ
    virtual void OnDeactivated();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ
    long CreatePointQueue();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDelegatedInkCanvas@@EEAA@XZ
    virtual ~CDelegatedInkCanvas();
};
