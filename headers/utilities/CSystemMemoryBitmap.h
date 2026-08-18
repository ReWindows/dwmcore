#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 38 member(s).
class CSystemMemoryBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSystemMemoryBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSystemMemoryBitmap@@QEAA@XZ
    CSystemMemoryBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z
    virtual long CopyPixels(WindissectOpaque const &, unsigned int, unsigned int, unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CSystemMemoryBitmap@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelColor@CSystemMemoryBitmap@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z
    virtual _D3DCOLORVALUE GetPixelColor(D2D_POINT_2U const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CSystemMemoryBitmap@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CSystemMemoryBitmap@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceState@CSystemMemoryBitmap@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ
    virtual int GetSourceState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z
    long HrInit(unsigned int, unsigned int, PixelFormatInfo const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z
    long HrInit(IBitmapSource *, WICRect *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z
    virtual long HrInit(IBitmapSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CSystemMemoryBitmap@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CSystemMemoryBitmap@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z
    virtual long Lock(WICRect const *, int, IBitmapLock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockForRead@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z
    virtual long LockForRead(WindissectOpaque const &, IBitmapLock * *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSystemMemoryBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSystemMemoryBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsFastLock@CSystemMemoryBitmap@@UEBA_NXZ
    virtual bool SupportsFastLock() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSystemMemoryBitmap@@MEAA@XZ
    virtual ~CSystemMemoryBitmap();
};
