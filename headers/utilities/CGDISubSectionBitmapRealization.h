#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CGDISubSectionBitmapRealization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z
    static long Create(unsigned char *, WindissectOpaque const &, WindissectOpaque const &, unsigned int, int, int, IGDIBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CGDISubSectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z
    virtual void AddDirtyRegion(CRegion const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z
    CGDISubSectionBitmapRealization(CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, CSM_SYSMEM_SECTION_INFO const &, unsigned char *, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ
    virtual long EnsureBitmapCacheSource();
};
