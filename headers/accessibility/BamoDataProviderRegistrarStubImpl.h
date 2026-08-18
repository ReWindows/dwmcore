#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
namespace BamoImpl {
class BamoDataProviderRegistrarStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z
    long OnRegisterError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z
    long OnUnregisterError(unsigned int);
};
} // namespace BamoImpl
