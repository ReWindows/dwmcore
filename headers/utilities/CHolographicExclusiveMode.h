#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 19 member(s).
class CHolographicExclusiveMode {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicExclusiveMode@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveViewId@CHolographicExclusiveMode@@UEAA_KXZ
    virtual uint64_t GetActiveViewId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpacity@CHolographicExclusiveMode@@UEAAMXZ
    virtual float GetOpacity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetZoneId@CHolographicExclusiveMode@@UEAAHXZ
    virtual int GetTargetZoneId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CHolographicExclusiveMode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetActiveExclusiveView@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW@@@Z
    long ProcessSetActiveExclusiveView(CResourceTable *, tagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetExclusiveOpacity@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETEXCLUSIVEOPACITY@@@Z
    long ProcessSetExclusiveOpacity(CResourceTable *, tagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETEXCLUSIVEOPACITY const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicExclusiveMode@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicExclusiveMode@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z
    CHolographicExclusiveMode(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CHolographicExclusiveMode@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicExclusiveMode@@MEAA@XZ
    virtual ~CHolographicExclusiveMode();
};
