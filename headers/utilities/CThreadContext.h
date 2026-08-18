#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 18 member(s).
class CThreadContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyObjectCaches@CThreadContext@@SAXXZ
    static void DestroyObjectCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeCurrent@CThreadContext@@SAXXZ
    static void FreeCurrent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z
    static long GetCurrent(CThreadContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z
    static CObjectCache * GetObjectCache(CBrushRenderingEffect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z
    static CObjectCache * GetObjectCache(CDrawListPrimitive8*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z
    static CObjectCache * GetObjectCache(CCpuClipAntialiasSinkContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCReconstructableDrawListEntry_UVx0@@@Z
    static CObjectCache * GetObjectCache(CReconstructableDrawListEntry_UVx0*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWarpRenderingEffect@@@Z
    static CObjectCache * GetObjectCache(CWarpRenderingEffect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z
    static CObjectCache * GetObjectCache(CPrimitiveGroupDrawListBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z
    static CObjectCache * GetObjectCache(CEmptyRegionDrawListBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z
    static CObjectCache * GetObjectCache(CNineGridDrawListBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z
    static CObjectCache * GetObjectCache(CColorDrawListBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z
    static CObjectCache * GetObjectCache(CSpectreCallbackRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeObjectCaches@CThreadContext@@SAJXZ
    static long InitializeObjectCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z
    static long RegisterGraphWalkRoot(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ
    static void UnregisterGraphWalkRoot();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThreadContext@@AEAA@XZ
    CThreadContext();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThreadContext@@AEAA@XZ
    ~CThreadContext();
};
