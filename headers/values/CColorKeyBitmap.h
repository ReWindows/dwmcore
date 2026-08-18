#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 23 member(s).
class CColorKeyBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CColorKeyBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z
    virtual long CopyPixels(WindissectOpaque const &, unsigned int, unsigned int, unsigned char *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z
    static long Create(IBitmapRealization *, CColorKey const &, CColorKeyBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CColorKeyBitmap@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelColor@CColorKeyBitmap@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z
    virtual _D3DCOLORVALUE GetPixelColor(D2D_POINT_2U const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CColorKeyBitmap@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CColorKeyBitmap@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CColorKeyBitmap@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CColorKeyBitmap@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z
    virtual long LockForRead(WindissectOpaque const &, IBitmapLock * *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CColorKeyBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CColorKeyBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsFastLock@CColorKeyBitmap@@UEBA_NXZ
    virtual bool SupportsFastLock() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z
    long ApplyColorKeyToBuffer(WICRect const &, unsigned int, unsigned int, unsigned char *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z
    long InitColorKey(PixelFormatInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z
    long Initialize(IBitmapRealization *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CColorKeyBitmap@@MEAA@XZ
    virtual ~CColorKeyBitmap();
};
