#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CDecodeBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z
    long CopyRegion(CRegion const &, ID3D11Texture2D *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDecodeBitmap@@SAJPEAPEAV1@@Z
    static long Create(CDecodeBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z
    long EnsureTargetBitmap(D2D_SIZE_U const &, PixelFormatInfo const &, RenderTargetInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z
    virtual long VideoProcessorBlt(ID3D11Texture2D *, unsigned int, int, tagRECT const &, int, DXGI_HDR_METADATA_HDR10*, tagRECT const &);
};
