#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CD2DSharedBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z
    static long CreateFromHeap(unsigned int, ID2D1PrivateCompositorBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z
    static long CreateFromSharedSection(void const *, unsigned int, CSharedSection *, ID2D1PrivateCompositorBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ
    virtual void * GetBufferPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferSize@CD2DSharedBuffer@@UEAAIXZ
    virtual unsigned int GetBufferSize();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD2DSharedBuffer@@IEAA@PEAXI@Z
    CD2DSharedBuffer(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CD2DSharedBuffer@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
