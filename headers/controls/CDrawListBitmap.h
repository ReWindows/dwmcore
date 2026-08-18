#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CDrawListBitmap {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z
    CDrawListBitmap(IBitmapResource *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z
    CDrawListBitmap(IBitmapRealization *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawListBitmap@@QEAA@AEBV0@@Z
    CDrawListBitmap(CDrawListBitmap const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawListBitmap@@QEAA@XZ
    CDrawListBitmap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z
    long GetShaderResourceView(RenderTargetInfo const &, ID3D11ShaderResourceView * *, PixelFormatInfo *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ
    D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchingColorSpace@CDrawListBitmap@@QEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    bool IsMatchingColorSpace(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CDrawListBitmap@@QEBA_NXZ
    bool IsOpaque() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ
    bool IsWhitePixelInTopLeft() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawListBitmap@@QEAA@XZ
    ~CDrawListBitmap();
};
