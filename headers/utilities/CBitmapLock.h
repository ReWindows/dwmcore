#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 22 member(s).
class CBitmapLock {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapLock@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapLock@@QEAA@XZ
    CBitmapLock();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z
    virtual long GetDataPointer(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z
    virtual long GetPixelFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CBitmapLock@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStride@CBitmapLock@@UEAAJPEAI@Z
    virtual long GetStride(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z
    long HrInit(IBitmapUnlock *, unsigned int, unsigned int, PixelFormatInfo const &, unsigned int, unsigned int, void *, int, bool, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapLock@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapLock@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReferenceBits@CBitmapLock@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long TryReferenceBits(IUnknown * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CBitmapLock@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CBitmapLock@@IEAAXXZ
    void Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapLock@@MEAA@XZ
    virtual ~CBitmapLock();
};
