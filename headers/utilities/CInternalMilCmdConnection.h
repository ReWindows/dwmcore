#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CInternalMilCmdConnection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInternalMilCmdConnection@@QEAA@XZ
    CInternalMilCmdConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z
    long CreateChannel(IDwmChannelProvider *, CChannel * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z
    long GetComposedEventId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z
    virtual long PostMessageToClient(UCE_RDP_HEADER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z
    long WaitForSyncFlush(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInternalMilCmdConnection@@UEAA@XZ
    virtual ~CInternalMilCmdConnection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z
    virtual void SendConnectionLostNotification(long);
};
