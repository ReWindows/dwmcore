#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CConnection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@CConnection@@QEAAXXZ
    void Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CConnection@@QEAAJH@Z
    long Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostMessageToClient@CConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z
    virtual long PostMessageToClient(UCE_RDP_HEADER const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConnection@@UEAA@XZ
    virtual ~CConnection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCompositionThread@CConnection@@IEAAJH@Z
    long StartCompositionThread(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z
    static unsigned long CompositionThreadEntryPoint(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MainCompositionThreadLoop@CConnection@@AEAAJXZ
    long MainCompositionThreadLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunCompositionThread@CConnection@@AEAAJXZ
    long RunCompositionThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendConnectionLostNotification@CConnection@@EEAAXJ@Z
    virtual void SendConnectionLostNotification(long);
};
