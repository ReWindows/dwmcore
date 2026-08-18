#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CYCbCrSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CYCbCrSurface@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSinglePrimitive@CYCbCrSurface@@UEBA_NXZ
    virtual bool HasSinglePrimitive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CYCbCrSurface@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_YCBCRSURFACE@@@Z
    virtual long ProcessUpdate(CResourceTable const *, tagMILCMD_YCBCRSURFACE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CYCbCrSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CYCbCrSurface@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CYCbCrSurface@@MEAA@XZ
    virtual ~CYCbCrSurface();
};
