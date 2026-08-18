#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 30 member(s).
class CCompressedSourceBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompressedSourceBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z
    virtual long CopyPixels(WICRect const *, unsigned int, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z
    static long Create(IWICImagingFactory *, void const *, unsigned long, double, double, IWICBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z
    virtual long Lock(WICRect const *, int, IBitmapLock * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompressedSourceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompressedSourceBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCopyBuffers@CCompressedSourceBitmap@@UEAAJXZ
    virtual long ReleaseCopyBuffers();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompressedSourceBitmap@@UEAA@XZ
    virtual ~CCompressedSourceBitmap();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@@Z
    CCompressedSourceBitmap(IWICImagingFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ
    long EnsureUncompressedBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ
    long EnsureWICBitmapFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CCompressedSourceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXI@Z
    long HrInitFromCompressedBytes(void const *, unsigned int);
};
