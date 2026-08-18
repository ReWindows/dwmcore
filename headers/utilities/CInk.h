#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class CInk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CInk@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInk@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z
    long CreateResource(CD3DDevice *, CD2DInk * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DInk@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z
    long GetD2DInk(CD3DDevice *, ID2D1Ink * *, ID2D1InkStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CInk@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CInk@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_BASICSTATEUPDATE@@@Z
    long ProcessBasicStateUpdate(CResourceTable *, tagMILCMD_INK_BASICSTATEUPDATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z
    long ProcessSegmentCountUpdate(CResourceTable *, tagMILCMD_INK_SEGMENTCOUNTUPDATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTUPDATE@@@Z
    long ProcessSegmentUpdate(CResourceTable *, tagMILCMD_INK_SEGMENTUPDATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_STARTPOINTUPDATE@@@Z
    long ProcessStartPointUpdate(CResourceTable *, tagMILCMD_INK_STARTPOINTUPDATE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInk@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInk@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInk@@UEAA@XZ
    virtual ~CInk();
};
