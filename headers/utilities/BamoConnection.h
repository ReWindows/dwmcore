#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
namespace dataprovider_AutoBamos {
class BamoConnection {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocatePeer@BamoConnection@dataprovider_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z
    virtual long AllocatePeer(::dataprovider_AutoBamos::BamoPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@BamoConnection@dataprovider_AutoBamos@@MEAAJPEAVBamoPeer@2@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::dataprovider_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@BamoConnection@dataprovider_AutoBamos@@MEAAJPEAVBamoPeer@2@_N@Z
    virtual long OnPeerDisconnected(::dataprovider_AutoBamos::BamoPeer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerRequestsConnect@BamoConnection@dataprovider_AutoBamos@@MEAAJIPEAIPEAPEAUMsgString@@@Z
    virtual long OnPeerRequestsConnect(unsigned int, unsigned int *, MsgString * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Do_not_derive_from_BaseBamoConnection_directly@BamoConnection@dataprovider_AutoBamos@@EEBAXXZ
    virtual void Do_not_derive_from_BaseBamoConnection_directly() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoConnection@dataprovider_AutoBamos@@EEBAPEAVBaseBamoConnectionImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BaseBamoConnectionImpl * GetImpl() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProtocolId@BamoConnection@dataprovider_AutoBamos@@EEBAAEBU_GUID@@XZ
    virtual _GUID const & GetProtocolId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxyCallout@BamoConnection@dataprovider_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z
    virtual long SetBootstrapProxyCallout(::Microsoft::Bamo::BamoProxy *);
};
} // namespace dataprovider_AutoBamos
