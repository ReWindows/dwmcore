#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 21 member(s).
class CHolographicDisplay {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicDisplay@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDebugOverlayFlags@CHolographicDisplay@@UEAAKXZ
    virtual unsigned long GetDebugOverlayFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CHolographicDisplay@@UEAAJPEAUHOLOGRAPHIC_DISPLAY_DESC@@@Z
    virtual long GetDesc(HOLOGRAPHIC_DISPLAY_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CHolographicDisplay@@UEAAKXZ
    virtual unsigned long GetFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@CHolographicDisplay@@UEAAIXZ
    virtual unsigned int GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CHolographicDisplay@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_HOLOGRAPHICDISPLAY_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetDebugOverlayFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETDEBUGOVERLAYFLAGS@@@Z
    long ProcessSetDebugOverlayFlags(CResourceTable *, tagMILCMD_HOLOGRAPHICDISPLAY_SETDEBUGOVERLAYFLAGS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z
    long ProcessSetFlags(CResourceTable *, tagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicDisplay@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicDisplay@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CHolographicDisplay@@UEAAJJ@Z
    virtual long SetState(long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicDisplay@@IEAA@PEAVCComposition@@@Z
    CHolographicDisplay(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CHolographicDisplay@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CHolographicDisplay@@AEAAXXZ
    void OnChanged();
};
