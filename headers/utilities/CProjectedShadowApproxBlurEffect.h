#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 27 member(s).
class CProjectedShadowApproxBlurEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProjectedShadowApproxBlurEffect@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ
    CProjectedShadowApproxBlurEffect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CProjectedShadowApproxBlurEffect@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEBV2@IPEAV2@2@Z
    virtual long CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const *, unsigned int, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillConstantBuffer@CProjectedShadowApproxBlurEffect@@UEBAXIIPEAX@Z
    virtual void FillConstantBuffer(unsigned int, unsigned int, void *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlurParams@CProjectedShadowApproxBlurEffect@@UEBAXIPEAMPEAW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAW4D2D1_BORDER_MODE@@@Z
    virtual void GetBlurParams(unsigned int, float *, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CProjectedShadowApproxBlurEffect@@UEBAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z
    virtual long GetBounds(WindissectOpaque const *, unsigned int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompiledEffectNoRef@CProjectedShadowApproxBlurEffect@@UEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::ICompiledEffect const * GetCompiledEffectNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantBufferChangeStamp@CProjectedShadowApproxBlurEffect@@UEBAII@Z
    virtual unsigned int GetConstantBufferChangeStamp(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantBufferInitialValue@CProjectedShadowApproxBlurEffect@@UEBAPEBXI@Z
    virtual void const * GetConstantBufferInitialValue(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantBufferSize@CProjectedShadowApproxBlurEffect@@UEBAII@Z
    virtual unsigned int GetConstantBufferSize(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptionNoRef@CProjectedShadowApproxBlurEffect@@UEBAPEBUIEffectDescription@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::IEffectDescription const * GetDescriptionNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputMapping@CProjectedShadowApproxBlurEffect@@UEBAIIIPEA_N@Z
    virtual unsigned int GetInputMapping(unsigned int, unsigned int, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphCount@CProjectedShadowApproxBlurEffect@@UEBAIXZ
    virtual unsigned int GetSubgraphCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphFlags@CProjectedShadowApproxBlurEffect@@UEBA?AW4Enum@CompiledEffectSubgraphFlags@Composition@UI@Windows@@I@Z
    virtual int GetSubgraphFlags(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphInputCount@CProjectedShadowApproxBlurEffect@@UEBAII@Z
    virtual unsigned int GetSubgraphInputCount(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphShaderLinkingBody@CProjectedShadowApproxBlurEffect@@UEBA?AUShaderLinkingBody@@I@Z
    virtual ShaderLinkingBody GetSubgraphShaderLinkingBody(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceTransform@CProjectedShadowApproxBlurEffect@@UEBAAEBUD2D_MATRIX_3X2_F@@I@Z
    virtual D2D_MATRIX_3X2_F const & GetSurfaceTransform(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNoOpSubgraph@CProjectedShadowApproxBlurEffect@@UEBA_NI@Z
    virtual bool IsNoOpSubgraph(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSamplerDataExtRequired@CProjectedShadowApproxBlurEffect@@UEBA_NII@Z
    virtual bool IsSamplerDataExtRequired(unsigned int, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUVClampingRequired@CProjectedShadowApproxBlurEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@Z
    virtual bool IsUVClampingRequired(unsigned int, unsigned int, int *, int *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProjectedShadowApproxBlurEffect@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatableProperty@CProjectedShadowApproxBlurEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBXPEA_NPEAI@Z
    virtual long SetAnimatableProperty(unsigned int, int, void const *, bool *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompiledEffect@CProjectedShadowApproxBlurEffect@@UEAAJPEBUICompiledEffect@Composition@UI@Windows@@@Z
    virtual long SetCompiledEffect(::Windows::UI::Composition::ICompiledEffect const *);
};
