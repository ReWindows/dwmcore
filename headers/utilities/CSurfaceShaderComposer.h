#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CSurfaceShaderComposer {
public:
    class SurfaceShader;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z
    static long Create(CD3DDevice *, CSurfaceShaderComposer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z
    long GetCompositingPixelShaderNoRef(int, WindissectOpaque, int, ID3D11PixelShader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z
    long GetSurfacePixelShaderNoRef(int, ID3D11PixelShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z
    long RunShader(ID3D11ShaderResourceView * *, unsigned int, D3D11_VIEWPORT const &, int, WindissectOpaque const &, bool, ID3D11RenderTargetView *, ID3D11PixelShader *, tagRECT const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z
    long RunShader(void const *, unsigned int, ID3D11ShaderResourceView * *, unsigned int, D3D11_VIEWPORT const &, int, WindissectOpaque const &, bool, ID3D11RenderTargetView *, ID3D11PixelShader *, tagRECT const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z
    long SetScratchConstantBuffer(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z
    long UpdateSDRBoostConstantBuffer(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSurfaceShaderComposer@@QEAA@XZ
    ~CSurfaceShaderComposer();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDevice@@PEAVCCompositingShaderCache@@@Z
    CSurfaceShaderComposer(ID3D11VertexShader *, ID3D11InputLayout *, ID3D11Buffer *, ID3DDeviceContextState *, CD3DDevice *, CCompositingShaderCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z
    long EnsureSurfaceShader(int);
};
