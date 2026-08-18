#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CSnapshot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSnapshot@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CSnapshot@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CSnapshot@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSnapshot@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z
    virtual long ProcessSetTransformMatrix(CResourceTable const *, tagMILCMD_SNAPSHOT_SETTRANSFORMMATRIX const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z
    virtual long ProcessUpdate(CResourceTable const *, tagMILCMD_SNAPSHOT const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSnapshot@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSnapshot@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSnapshot@@MEAA@XZ
    virtual ~CSnapshot();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z
    long CreateCVI(CVisual *);
};
