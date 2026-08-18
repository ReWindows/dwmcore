#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 36 member(s).
class CWICBitmapWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWICBitmapWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWICBitmapWrapper@@QEAA@XZ
    CWICBitmapWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CWICBitmapWrapper@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z
    virtual long CopyPixels(WindissectOpaque const &, unsigned int, unsigned int, unsigned char *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z
    static long Create(IWICBitmapSource *, ID2DBitmapCacheSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CWICBitmapWrapper@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CWICBitmapWrapper@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CWICBitmapWrapper@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CWICBitmapWrapper@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CWICBitmapWrapper@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z
    virtual long Lock(WICRect const *, int, IBitmapLock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockForRead@CWICBitmapWrapper@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z
    virtual long LockForRead(WindissectOpaque const &, IBitmapLock * *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWICBitmapWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWICBitmapWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCopyBuffers@CWICBitmapWrapper@@UEAAJXZ
    virtual long ReleaseCopyBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsFastLock@CWICBitmapWrapper@@UEBA_NXZ
    virtual bool SupportsFastLock() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWICBitmapWrapper@@UEAA@XZ
    virtual ~CWICBitmapWrapper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CWICBitmapWrapper@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z
    long HrInit(IWICBitmapSource *);
};
