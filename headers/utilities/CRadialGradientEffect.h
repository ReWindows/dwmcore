#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 29 member(s).
class CRadialGradientEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRadialGradientEffect@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CRadialGradientEffect@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEBV2@IPEAV2@2@Z
    virtual long CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const *, unsigned int, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z
    static long Create(bool, CRadialGradientEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillConstantBuffer@CRadialGradientEffect@@UEBAXIIPEAX@Z
    virtual void FillConstantBuffer(unsigned int, unsigned int, void *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlurParams@CRadialGradientEffect@@UEBAXIPEAMPEAW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAW4D2D1_BORDER_MODE@@@Z
    virtual void GetBlurParams(unsigned int, float *, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CRadialGradientEffect@@UEBAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z
    virtual long GetBounds(WindissectOpaque const *, unsigned int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompiledEffectNoRef@CRadialGradientEffect@@UEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::ICompiledEffect const * GetCompiledEffectNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantBufferChangeStamp@CRadialGradientEffect@@UEBAII@Z
    virtual unsigned int GetConstantBufferChangeStamp(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantBufferInitialValue@CRadialGradientEffect@@UEBAPEBXI@Z
    virtual void const * GetConstantBufferInitialValue(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantBufferSize@CRadialGradientEffect@@UEBAII@Z
    virtual unsigned int GetConstantBufferSize(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptionNoRef@CRadialGradientEffect@@UEBAPEBUIEffectDescription@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::IEffectDescription const * GetDescriptionNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputMapping@CRadialGradientEffect@@UEBAIIIPEA_N@Z
    virtual unsigned int GetInputMapping(unsigned int, unsigned int, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ
    CShaderCache * GetShaderCache() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphCount@CRadialGradientEffect@@UEBAIXZ
    virtual unsigned int GetSubgraphCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphFlags@CRadialGradientEffect@@UEBA?AW4Enum@CompiledEffectSubgraphFlags@Composition@UI@Windows@@I@Z
    virtual int GetSubgraphFlags(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphInputCount@CRadialGradientEffect@@UEBAII@Z
    virtual unsigned int GetSubgraphInputCount(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubgraphShaderLinkingBody@CRadialGradientEffect@@UEBA?AUShaderLinkingBody@@I@Z
    virtual ShaderLinkingBody GetSubgraphShaderLinkingBody(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceTransform@CRadialGradientEffect@@UEBAAEBUD2D_MATRIX_3X2_F@@I@Z
    virtual D2D_MATRIX_3X2_F const & GetSurfaceTransform(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNoOpSubgraph@CRadialGradientEffect@@UEBA_NI@Z
    virtual bool IsNoOpSubgraph(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSamplerDataExtRequired@CRadialGradientEffect@@UEBA_NII@Z
    virtual bool IsSamplerDataExtRequired(unsigned int, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUVClampingRequired@CRadialGradientEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@Z
    virtual bool IsUVClampingRequired(unsigned int, unsigned int, int *, int *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRadialGradientEffect@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatableProperty@CRadialGradientEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBXPEA_NPEAI@Z
    virtual long SetAnimatableProperty(unsigned int, int, void const *, bool *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompiledEffect@CRadialGradientEffect@@UEAAJPEBUICompiledEffect@Composition@UI@Windows@@@Z
    virtual long SetCompiledEffect(::Windows::UI::Composition::ICompiledEffect const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z
    void SetNonCenteredShaderConstants(D2D_POINT_2F const &, float, float);
};
