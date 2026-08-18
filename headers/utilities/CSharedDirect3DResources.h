#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
namespace CDrawListEntryBatch {
class CSharedDirect3DResources {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z
    static long Create(CD3DDevice *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ
    void DestroyDeviceResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharedDirect3DResources@CDrawListEntryBatch@@UEAA@XZ
    virtual ~CSharedDirect3DResources();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSharedDirect3DResources@CDrawListEntryBatch@@AEAA@XZ
    CSharedDirect3DResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z
    long Init(CD3DDevice *);
};
} // namespace CDrawListEntryBatch
