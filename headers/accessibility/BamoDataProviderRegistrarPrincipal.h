#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class BamoDataProviderRegistrarPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDataProviderRegistrarPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z
    virtual long BroadcastOnRegisterError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z
    virtual long BroadcastOnUnregisterError(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDataProviderRegistrarPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDataProviderRegistrarPrincipal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoDataProviderRegistrarPrincipal@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataProviderRegistrarStub@@@Z
    virtual long AllocateStubUnderLock(::dataprovider_AutoBamos::BamoPeer *, BamoDataProviderRegistrarStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLock@BamoDataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@@Z
    virtual long InitializeProxyUnderLock(BamoDataProviderRegistrarStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoDataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@@Z
    virtual long OnPropertiesRefreshed(BamoDataProviderRegistrarStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@BamoDataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoDataProviderRegistrarStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BamoDataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@@Z
    virtual long OnStubDisconnected(BamoDataProviderRegistrarStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDataProviderRegistrarPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
