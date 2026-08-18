#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 27 member(s).
class CHolographicViewer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireBuffer@CHolographicViewer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long AcquireBuffer(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicViewer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@CHolographicViewer@@UEAAJXZ
    virtual long Dispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CHolographicViewer@@UEAAJPEAUHOLOGRAPHIC_VIEWER_DESC@@@Z
    virtual long GetDesc(HOLOGRAPHIC_VIEWER_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CHolographicViewer@@UEAAKXZ
    virtual unsigned long GetFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewerId@CHolographicViewer@@UEAAKXZ
    virtual unsigned long GetViewerId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CHolographicViewer@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenOnDevice@CHolographicViewer@@UEAAJPEAUIDXGIDevice@@@Z
    virtual long OpenOnDevice(IDXGIDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z
    long ProcessInitialize(CResourceTable *, tagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETFLAGS@@@Z
    long ProcessSetFlags(CResourceTable *, tagMILCMD_HOLOGRAPHICVIEWER_SETFLAGS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE@@@Z
    long ProcessSetTargetFrameRate(CResourceTable *, tagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicViewer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicViewer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@CHolographicViewer@@UEAAJIPEAX@Z
    virtual long ReleaseBuffer(unsigned int, void *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicViewer@@IEAA@PEAVCComposition@@@Z
    CHolographicViewer(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CHolographicViewer@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicViewer@@MEAA@XZ
    virtual ~CHolographicViewer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CHolographicViewer@@AEAAXXZ
    void OnChanged();
};
