#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CHolographicInteropTaskQueue {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicInteropTaskQueue@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z
    static long Create(CHolographicInteropTaskQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z
    bool PostMessageW(unsigned int, IUnknown *, void *, void *, void *, void *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicInteropTaskQueue@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z
    void ClearList(_SLIST_HEADER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z
    void ClearMessage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z
    _SLIST_ENTRY * ReverseList(_SLIST_ENTRY *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicInteropTaskQueue@@EEAA@XZ
    virtual ~CHolographicInteropTaskQueue();
};
