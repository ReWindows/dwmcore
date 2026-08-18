#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CSharedSectionBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharedSectionBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSharedSectionBase@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetData@CSharedSectionBase@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONBASE_SETDATA@@PEBXI@Z
    long ProcessSetData(CResourceTable *, tagMILCMD_SHAREDSECTIONBASE_SETDATA const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CSharedSectionBase@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONBASE@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_SHAREDSECTIONBASE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSharedSectionBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharedSectionBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z
    void const * ResolveAllocation(uint64_t, uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ
    void UnmapSharedMemory() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharedSectionBase@@MEAA@XZ
    virtual ~CSharedSectionBase();
};
