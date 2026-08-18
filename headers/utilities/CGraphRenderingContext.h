#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
namespace CExternalEffectGraph {
class CGraphRenderingContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z
    long ExecuteShaders(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z
    unsigned int MakeTargetFromSource(unsigned int, ::D2D1::Matrix3x2F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ
    void SetOutputToCurrentTarget();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z
    long PushTargetInternal(unsigned int, int, D2D_SIZE_F const &);
};
} // namespace CExternalEffectGraph
