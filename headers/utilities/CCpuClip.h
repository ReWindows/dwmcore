#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CCpuClip {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z
    long AddPrimitiveClip(CShape const *, CMILMatrix const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCpuClip@@QEAA@XZ
    CCpuClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z
    bool FullyContains(WindissectOpaque const &, D2D_MATRIX_3X2_F const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAntialiasMode@CCpuClip@@QEBA?AW4D2D1_ANTIALIAS_MODE@@XZ
    int GetAntialiasMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAntialiasSinkContext@CCpuClip@@QEBAPEBVCCpuClipAntialiasSinkContext@@XZ
    CCpuClipAntialiasSinkContext const * GetAntialiasSinkContext() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasClip@CCpuClip@@QEBA_NXZ
    bool HasClip() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContextDependentClip@CCpuClip@@QEBA_NXZ
    bool HasContextDependentClip() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z
    void Initialize(CShape const *, CMILMatrix const *, int, unsigned int, CCpuClipAntialiasSinkContext const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ
    bool IsAxisAlignedRectangle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePrimitiveClips@CCpuClip@@QEAAXXZ
    void RemovePrimitiveClips();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z
    long ResolveClip(CShape const * *, CMILMatrix *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ
    long ConvertContextDependentClipToLocal();
};
