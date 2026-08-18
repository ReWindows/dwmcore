#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CDrawListEntryBatch {
public:
    class CSharedDirect3DResources;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDrawListEntryBatch@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAVCSharedDirect3DResources@1@PEAPEAV1@@Z
    static long Create(CD3DDevice *, WindissectOpaque *, CDrawListEntryBatch * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDrawListEntryBatch@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDrawListEntryBatch@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CDrawListEntryBatch@@UEAAJXZ
    virtual long Render();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z
    CDrawListEntryBatch(CD3DDevice *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawListEntryBatch@@EEAA@XZ
    virtual ~CDrawListEntryBatch();
};
