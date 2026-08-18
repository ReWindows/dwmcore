#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CResampleLayer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CResampleLayer@@UEBA?AW4LayerType@CLayer@@XZ
    virtual int GetType() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResampleLayer@@UEAA@XZ
    virtual ~CResampleLayer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDeviceTransformDelta@CResampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z
    virtual long CalcDeviceTransformDelta(CDrawingContext *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z
    long RenderLanczos(CSurfaceShaderComposer *, ID3D11RenderTargetView *, bool, D3D11_VIEWPORT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RenderLayer(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z
    long RenderXBR(CSurfaceShaderComposer *, ID3D11RenderTargetView *, bool, D3D11_VIEWPORT const &);
};
