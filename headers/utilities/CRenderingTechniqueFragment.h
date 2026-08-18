#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 18 member(s).
class CRenderingTechniqueFragment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z
    void AddIntermediateInput(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNamedInput@CRenderingTechniqueFragment@@QEAAXI@Z
    void AddNamedInput(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z
    CRenderingTechniqueFragment(::Windows::UI::Composition::IEffectInstance *, CShaderCache *, unsigned int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ
    void ClearConsumerUVClampingRequirement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsEffectSubgraph@CRenderingTechniqueFragment@@QEBA_NPEAUIEffectInstance@Composition@UI@Windows@@I@Z
    bool ContainsEffectSubgraph(::Windows::UI::Composition::IEffectInstance *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingGraph@@@Z
    CBackdropBrush const * GetBackdropBrushNoRef(CBrushRenderingGraph const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueShaderCache@CRenderingTechniqueFragment@@QEBAPEAVCShaderCache@@XZ
    CShaderCache * GetUniqueShaderCache() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z
    bool HasBlurredWallpaperBackdropInput(CBrushRenderingGraph const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z
    bool HasWindowBackdropInput(CBrushRenderingGraph const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ
    bool IsNoOp() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z
    bool NeedsToBeBrokenUp(CBrushRenderingGraph *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderingTechniqueFragment@@QEAA@XZ
    ~CRenderingTechniqueFragment();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z
    long CreateEffectShaderBody(WindissectOpaque const &, WindissectOpaque const &, CBrushRenderingGraph const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z
    long CreateMaskShaderBody(WindissectOpaque const &, WindissectOpaque const &, CBrushRenderingGraph const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z
    unsigned int GetCumulativeSurfaceInputCount(CBrushRenderingGraph *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z
    void GetSurfaceDescription(CBrushRenderingGraph const *, unsigned int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z
    bool IsUVClampingRequiredForInput(unsigned int, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z
    int MakeShaderLinkingArgument(int, unsigned int, WindissectOpaque const &, WindissectOpaque const &, CBrushRenderingGraph const *);
};
