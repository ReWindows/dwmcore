#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class DataProviderRegistrarConnection {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@DataProviderRegistrarConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::dataprovider_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@DataProviderRegistrarConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_N@Z
    virtual long OnPeerDisconnected(::dataprovider_AutoBamos::BamoPeer *, bool);
};
