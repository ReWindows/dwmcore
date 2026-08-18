#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CCachedWindowBackgroundTreatment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z
    static long Create(CWindowBackgroundTreatment *, CMILMatrix const &, _D3DCOLORVALUE const &, CCachedWindowBackgroundTreatment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidRenderingRealization@CCachedWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z
    bool HasValidRenderingRealization(RenderTargetInfo const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@@Z
    long Update(CWindowBackgroundTreatment *, CMILMatrix const &, _D3DCOLORVALUE const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVCWindowBackgroundBitmapProducer@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z
    CCachedWindowBackgroundTreatment(CWindowBackgroundTreatment *, CWindowBackgroundBitmapProducer *, CMILMatrix const &, WindissectOpaque const &, _D3DCOLORVALUE const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCachedWindowBackgroundTreatment@@EEAA@XZ
    virtual ~CCachedWindowBackgroundTreatment();
};
