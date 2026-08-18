#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 39 member(s).
class CBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmap@@QEAA@XZ
    CBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPalette@CBitmap@@UEAAJPEAUIWICPalette@@@Z
    virtual long CopyPalette(IWICPalette *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z
    virtual long CopyPixels(WICRect const *, unsigned int, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z
    static long CopyPixelsHelper(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char *, unsigned int, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z
    virtual long GetPixelFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CBitmap@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolution@CBitmap@@UEAAJPEAN0@Z
    virtual long GetResolution(double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CBitmap@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceState@CBitmap@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ
    virtual int GetSourceState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrInit@CBitmap@@UEAAJPEAVIBitmapSource@@@Z
    virtual long HrInit(IBitmapSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z
    virtual long Lock(WICRect const *, unsigned long, IWICBitmapLock * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CBitmap@@UEAAJW4DXGI_ALPHA_MODE@@@Z
    virtual long SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CBitmap@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual long SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPalette@CBitmap@@UEAAJPEAUIWICPalette@@@Z
    virtual long SetPalette(IWICPalette *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResolution@CBitmap@@UEAAJNN@Z
    virtual long SetResolution(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z
    virtual long UnlockState(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    long HrCheckPixelRect(WICRect const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z
    long HrInitDataFromIBitmapSource(IBitmapSource *, WICRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z
    long HrLock(unsigned int, unsigned int, PixelFormatInfo const &, unsigned int, unsigned int, void *, int, IBitmapLock * *, bool, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z
    long HrLockUnaligned(unsigned int, unsigned int, PixelFormatInfo const &, unsigned int, unsigned int, unsigned int, unsigned int, void *, int, IBitmapLock * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmap@@MEAA@XZ
    virtual ~CBitmap();
};
