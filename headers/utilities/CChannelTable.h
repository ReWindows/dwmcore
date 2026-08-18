#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CChannelTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z
    long AssignChannelEntry(unsigned int, CLIENT_CHANNEL_HANDLE_ENTRY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyHandle@CChannelTable@@QEAAXI@Z
    void DestroyHandle(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z
    long GetMasterTableEntry(unsigned int, CLIENT_CHANNEL_HANDLE_ENTRY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z
    CLIENT_CHANNEL_HANDLE_ENTRY * TryGetMasterTableEntry(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CChannelTable@@UEAA@XZ
    virtual ~CChannelTable();
};
