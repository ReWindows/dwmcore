#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CNotificationResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z
    long ProcessSetCallbackId(CResourceTable *, tagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ
    unsigned int GetChannelCallbackId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChannelAttached@CNotificationResource@@MEAAJXZ
    virtual long OnChannelAttached();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNotify@CNotificationResource@@IEBA_NXZ
    bool ShouldNotify() const;
};
