#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CSecondaryD2DBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z
    static long Create(CD2DResourceManager *, D2D_SIZE_U, ID3D11Texture2D *, D3D11_TEXTURE2D_DESC const &, D2D1_BITMAP_PROPERTIES1const &, int, DisplayId, CSecondaryD2DBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CSecondaryD2DBitmap@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockState@CSecondaryD2DBitmap@@UEAAJW4WICBitmapLockFlags@@@Z
    virtual long UnlockState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z
    virtual long Update(WindissectOpaque const &, ID2DBitmapCacheSource *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSecondaryD2DBitmap@@UEAA@XZ
    virtual ~CSecondaryD2DBitmap();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z
    CSecondaryD2DBitmap(CD2DResourceManager *, D2D_SIZE_U, ID3D11Texture2D *, D3D11_TEXTURE2D_DESC const &, D2D1_BITMAP_PROPERTIES1const &, int, DisplayId);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z
    long CreateScaledLock(WindissectOpaque const &, ID2DBitmapCacheSource *, IBitmapLock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z
    long FormatConvertLock(IBitmapLock *, IBitmapLock * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z
    WindissectOpaque GetPrefilteredRect(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ
    virtual long Initialize();
};
