#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 54 member(s).
class CD2DBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CD2DBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z
    virtual long CopyPixels(WindissectOpaque const &, unsigned int, unsigned int, unsigned char *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCrossAdapterSharedHandle@CD2DBitmap@@UEAAJPEAPEAX@Z
    virtual long CreateCrossAdapterSharedHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSubResourceBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z
    long CreateSubResourceBitmap(unsigned int, CD2DBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetBitmap(ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIResource@CD2DBitmap@@QEAAPEAUIDXGIResource@@XZ
    IDXGIResource * GetDXGIResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CD2DBitmap@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CD2DBitmap@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@CD2DBitmap@@UEBAXPEAUD2D1_BITMAP_PROPERTIES1@@@Z
    virtual void GetProperties(D2D1_BITMAP_PROPERTIES1*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ
    virtual ID3D11ShaderResourceView * GetShaderResourceView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CD2DBitmap@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTexture2D@CD2DBitmap@@UEAAPEAUID3D11Texture2D@@XZ
    virtual ID3D11Texture2D * GetTexture2D();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCrossAdapter@CD2DBitmap@@UEBA_NPEAU_LUID@@@Z
    virtual bool IsCrossAdapter(_LUID *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CD2DBitmap@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CD2DBitmap@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z
    virtual void LockAndRead(ID2DContextOwner const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z
    virtual long LockForRead(WindissectOpaque const &, IBitmapLock * *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CD2DBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CD2DBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CD2DBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@CD2DBitmap@@UEAAXVDisplayId@@@Z
    virtual void SetDisplayId(DisplayId);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ
    virtual bool SupportsFastLock() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockState@CD2DBitmap@@UEAAJW4WICBitmapLockFlags@@@Z
    virtual long UnlockState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DBitmap@@UEAA@XZ
    virtual ~CD2DBitmap();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z
    CD2DBitmap(CD2DResourceManager *, bool, ID3D11Texture2D *, D3D11_TEXTURE2D_DESC const &, D2D1_BITMAP_PROPERTIES1const &, int, DisplayId, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBitmap@CD2DBitmap@@IEAAJXZ
    long EnsureBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ
    long EnsureIgnoreAlphaBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ
    long EnsureShaderResourceView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DResources@CD2DBitmap@@MEAAXXZ
    virtual void ReleaseD2DResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z
    bool TryFastWarpLock(unsigned char * *, unsigned int *, unsigned int *, IUnknown * *) const;
};
