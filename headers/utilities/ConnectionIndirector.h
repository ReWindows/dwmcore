#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 18 member(s).
namespace Microsoft::BamoImpl {
class ConnectionIndirector {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z
    virtual long OnIDFreed(unsigned int, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z
    virtual long OnItemMessage(unsigned int, unsigned int, void const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z
    virtual long OnPeerConnected(unsigned int, unsigned int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z
    virtual long OnPeerDisconnected(unsigned int, void const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z
    virtual long OnPeerRequestsConnect(unsigned int, unsigned int *, MsgString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPortConnectionFailed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJJIII@Z
    virtual long OnPortConnectionFailed(long, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConnectionIndirector@BamoImpl@Microsoft@@MEAA@XZ
    virtual ~ConnectionIndirector();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ
    virtual void OnZeroReferenceCount();
};
} // namespace Microsoft::BamoImpl
