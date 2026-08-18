#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 23 member(s).
class CSecondarySysmemBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSecondarySysmemBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z
    virtual long CopyPixels(WindissectOpaque const &, unsigned int, unsigned int, unsigned char *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSecondarySysmemBitmap@@SAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAV1@@Z
    static long Create(D2D_SIZE_U const &, PixelFormatInfo const &, CSecondarySysmemBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CSecondarySysmemBitmap@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CSecondarySysmemBitmap@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CSecondarySysmemBitmap@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CSecondarySysmemBitmap@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CSecondarySysmemBitmap@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z
    virtual long LockForRead(WindissectOpaque const &, IBitmapLock * *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSecondarySysmemBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSecondarySysmemBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsFastLock@CSecondarySysmemBitmap@@UEBA_NXZ
    virtual bool SupportsFastLock() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockState@CSecondarySysmemBitmap@@UEAAJW4WICBitmapLockFlags@@@Z
    virtual long UnlockState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z
    long Update(WindissectOpaque const &, ID2DBitmapCacheSource *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z
    CSecondarySysmemBitmap(D2D_SIZE_U const &, PixelFormatInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSecondarySysmemBitmap@@MEAA@XZ
    virtual ~CSecondarySysmemBitmap();
};
