#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CSecondaryCrossAdapterIndirectBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z
    static long Create(CD2DResourceManager *, D2D_SIZE_U, ID3D11Texture2D *, ID3D11Texture2D *, D3D11_TEXTURE2D_DESC const &, D2D1_BITMAP_PROPERTIES1const &, int, DisplayId, CSecondaryD2DBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CSecondaryCrossAdapterIndirectBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z
    virtual long Update(WindissectOpaque const &, ID2DBitmapCacheSource *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSecondaryCrossAdapterIndirectBitmap@@UEAA@XZ
    virtual ~CSecondaryCrossAdapterIndirectBitmap();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSecondaryCrossAdapterIndirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z
    CSecondaryCrossAdapterIndirectBitmap(CD2DResourceManager *, D2D_SIZE_U, ID3D11Texture2D *, ID3D11Texture2D *, D3D11_TEXTURE2D_DESC const &, D2D1_BITMAP_PROPERTIES1const &, int, DisplayId);
};
