#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CHolographicComposition {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CHolographicComposition@@UEAAJPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z
    virtual long GetDesc(HOLOGRAPHIC_COMPOSITION_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CHolographicComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOSITION_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_HOLOGRAPHICCOMPOSITION_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL@@@Z
    long ProcessSetQualityLevel(CResourceTable *, tagMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CHolographicComposition@@UEAAJJ@Z
    virtual long SetState(long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CHolographicComposition@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
