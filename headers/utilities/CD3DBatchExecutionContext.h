#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CD3DBatchExecutionContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z
    long FillVertexAndIndexBuffers(CBatchCommand const * const * *, CRenderingEffect const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z
    void Flush(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ
    CLightsMask const & GetLightsMask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ
    void SetNoOpLightingConstantBuffers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z
    long SetRenderingEffectState(CRenderingEffect const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z
    long PrepareIndexBuffer(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z
    virtual void SetBlendMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDrawMethod@CD3DBatchExecutionContext@@EEAAXW4PrimitiveDrawMethod@@@Z
    virtual void SetDrawMethod(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z
    virtual void SetLights(CHwLightCollectionBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateGroup@CD3DBatchExecutionContext@@EEAAXPEBVCGroupBatchCommand@@@Z
    virtual void SetStateGroup(CGroupBatchCommand const *);
};
