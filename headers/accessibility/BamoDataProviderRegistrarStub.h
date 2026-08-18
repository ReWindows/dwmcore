#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class BamoDataProviderRegistrarStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDataProviderRegistrarStub@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z
    virtual long OnRegisterError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z
    virtual long OnUnregisterError(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDataProviderRegistrarStub@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDataProviderRegistrarStub@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDataProviderRegistrarStub@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
