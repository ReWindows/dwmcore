#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class CHolographicExclusivePresentData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicExclusivePresentData@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHolographicExclusivePresentData@@SAJPEAX00IIPEAPEAUIHolographicExclusivePresentData@@@Z
    static long Create(void *, void *, void *, unsigned int, unsigned int, IHolographicExclusivePresentData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindId@CHolographicExclusivePresentData@@UEAAIXZ
    virtual unsigned int GetBindId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientProcessHandle@CHolographicExclusivePresentData@@UEAAPEAXXZ
    virtual void * GetClientProcessHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientProcessId@CHolographicExclusivePresentData@@UEAAIXZ
    virtual unsigned int GetClientProcessId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataHandle@CHolographicExclusivePresentData@@UEAAPEAXXZ
    virtual void * GetDataHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataMutex@CHolographicExclusivePresentData@@UEAAPEAXXZ
    virtual void * GetDataMutex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicExclusivePresentData@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicExclusivePresentData@@EEAA@XZ
    virtual ~CHolographicExclusivePresentData();
};
