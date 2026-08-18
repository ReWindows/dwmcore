#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 21 member(s).
class CSynchronousSuperWetInk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CSynchronousSuperWetInk@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z
    CSynchronousSuperWetInk(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z
    virtual long CreateScribble(CD3DDevice *, DCompWetInkStrokeRenderState const &, CComputeScribble * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueComputeScribbleOnHost@CSynchronousSuperWetInk@@UEAAJ_KPEAVCComputeScribble@@@Z
    virtual long EnqueueComputeScribbleOnHost(uint64_t, CComputeScribble *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointTransformSpace@CSynchronousSuperWetInk@@UEBA?AW4InkPointTransformSpace@@XZ
    virtual int GetPointTransformSpace() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ
    bool HasNewData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z
    virtual bool IsSuperWetCompatible(CD3DDevice *, DCompWetInkStrokeRenderState const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivated@CSynchronousSuperWetInk@@UEAAXXZ
    virtual void OnActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeactivated@CSynchronousSuperWetInk@@UEAAXXZ
    virtual void OnDeactivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ
    void OnPropertyChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ
    void CleanupOldPerFrameData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ
    uint64_t GetLatestLookupId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ
    unsigned int GetPerFrameDataId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ
    bool IsSuperWetCompatible() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z
    void PullNewPerFrameData(unsigned int, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSynchronousSuperWetInk@@EEAA@XZ
    virtual ~CSynchronousSuperWetInk();
};
