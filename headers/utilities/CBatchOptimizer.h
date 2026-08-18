#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 20 member(s).
class CBatchOptimizer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z
    CBatchOptimizer(CDrawListBatchManager *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendLayer@CBatchOptimizer@@AEAAXXZ
    void AppendLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEAH@Z
    bool CanTunnelToLayer(WindissectOpaque const &, int, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z
    void ConsolidateAdjacentHomogeneousLayers(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z
    void DiscardEmptyLayers(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z
    static void DiscardEntries(CDrawListBatchManager *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ
    void FlushBottomLayer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z
    int GetNearestRenderingLayerUnderEmptyLayer(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z
    static bool MatchStateToHomogeneousLayer(SharedStateLayer const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z
    void PurgeStateSettingEntriesFromLayer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z
    void RecycleLayer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CBatchOptimizer@@AEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlendMode@CBatchOptimizer@@EEAAXW4Enum@BlendMode@@@Z
    virtual void SetBlendMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDrawMethod@CBatchOptimizer@@EEAAXW4PrimitiveDrawMethod@@@Z
    virtual void SetDrawMethod(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLights@CBatchOptimizer@@EEAAXPEAVCHwLightCollectionBuffer@@@Z
    virtual void SetLights(CHwLightCollectionBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateGroup@CBatchOptimizer@@EEAAXPEBVCGroupBatchCommand@@@Z
    virtual void SetStateGroup(CGroupBatchCommand const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z
    int SkipContinuations(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ
    bool TryMergeOneLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z
    bool TryRemoveEmptyStateSettingLayer(int);
};
