#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CSecondaryCrossAdapterDirectBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z
    static long Create(CD2DResourceManager *, D2D_SIZE_U, ID3D11Texture2D *, D3D11_TEXTURE2D_DESC const &, D2D1_BITMAP_PROPERTIES1const &, int, DisplayId, CSecondaryD2DBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CSecondaryCrossAdapterDirectBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z
    virtual long Update(WindissectOpaque const &, ID2DBitmapCacheSource *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSecondaryCrossAdapterDirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z
    CSecondaryCrossAdapterDirectBitmap(CD2DResourceManager *, D2D_SIZE_U, ID3D11Texture2D *, D3D11_TEXTURE2D_DESC const &, D2D1_BITMAP_PROPERTIES1const &, int, DisplayId);
};
