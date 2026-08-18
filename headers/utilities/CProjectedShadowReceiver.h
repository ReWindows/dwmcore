#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 18 member(s).
class CProjectedShadowReceiver {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProjectedShadowReceiver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ
    CBrush * GetEffectiveMaskBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z
    long GetReceiverMaskInputBrush(CDrawingContext *, CDrawListBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ
    void InvalidateMaskContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ
    bool IsEmptyMaskContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CProjectedShadowReceiver@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ
    void OnDestroyingReceivingVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER@@@Z
    long ProcessSetDrawOrder(CResourceTable *, tagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z
    long ProcessSetMask(CResourceTable *, tagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL@@@Z
    long ProcessSetReceivingVisual(CResourceTable *, tagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProjectedShadowReceiver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProjectedShadowReceiver@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ
    void RequestRedraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z
    void SetReceivingVisual(CVisual *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectedShadowReceiver@@MEAA@XZ
    virtual ~CProjectedShadowReceiver();
};
