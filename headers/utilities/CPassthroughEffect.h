#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 28 member(s).
class CPassthroughEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPassthroughEffect@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CPassthroughEffect@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEBV2@IPEAV2@2@Z
    virtual long CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const *, unsigned int, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPassthroughEffect@@SAJPEAPEAV1@@Z
    static long Create(CPassthroughEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillConstantBuffer@CPassthroughEffect@@UEBAXIIPEAX@Z
    virtual void FillConstantBuffer(unsigned int, unsigned int, void *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlurParams@CPassthroughEffect@@UEBAXIPEAMPEAW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAW4D2D1_BORDER_MODE@@@Z
    virtual void GetBlurParams(unsigned int, float *, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CPassthroughEffect@@UEBAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z
    virtual long GetBounds(WindissectOpaque const *, unsigned int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompiledEffectNoRef@CPassthroughEffect@@UEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::ICompiledEffect const * GetCompiledEffectNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantBufferChangeStamp@CPassthroughEffect@@UEBAII@Z
    virtual unsigned int GetConstantBufferChangeStamp(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantBufferInitialValue@CPassthroughEffect@@UEBAPEBXI@Z
    virtual void const * GetConstantBufferInitialValue(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantBufferSize@CPassthroughEffect@@UEBAII@Z
    virtual unsigned int GetConstantBufferSize(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptionNoRef@CPassthroughEffect@@UEBAPEBUIEffectDescription@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::IEffectDescription const * GetDescriptionNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputMapping@CPassthroughEffect@@UEBAIIIPEA_N@Z
    virtual unsigned int GetInputMapping(unsigned int, unsigned int, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ
    CShaderCache * GetShaderCache() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphCount@CPassthroughEffect@@UEBAIXZ
    virtual unsigned int GetSubgraphCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphFlags@CPassthroughEffect@@UEBA?AW4Enum@CompiledEffectSubgraphFlags@Composition@UI@Windows@@I@Z
    virtual int GetSubgraphFlags(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphInputCount@CPassthroughEffect@@UEBAII@Z
    virtual unsigned int GetSubgraphInputCount(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphShaderLinkingBody@CPassthroughEffect@@UEBA?AUShaderLinkingBody@@I@Z
    virtual ShaderLinkingBody GetSubgraphShaderLinkingBody(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceTransform@CPassthroughEffect@@UEBAAEBUD2D_MATRIX_3X2_F@@I@Z
    virtual D2D_MATRIX_3X2_F const & GetSurfaceTransform(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNoOpSubgraph@CPassthroughEffect@@UEBA_NI@Z
    virtual bool IsNoOpSubgraph(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSamplerDataExtRequired@CPassthroughEffect@@UEBA_NII@Z
    virtual bool IsSamplerDataExtRequired(unsigned int, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUVClampingRequired@CPassthroughEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@Z
    virtual bool IsUVClampingRequired(unsigned int, unsigned int, int *, int *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPassthroughEffect@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatableProperty@CPassthroughEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBXPEA_NPEAI@Z
    virtual long SetAnimatableProperty(unsigned int, int, void const *, bool *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompiledEffect@CPassthroughEffect@@UEAAJPEBUICompiledEffect@Composition@UI@Windows@@@Z
    virtual long SetCompiledEffect(::Windows::UI::Composition::ICompiledEffect const *);
};
