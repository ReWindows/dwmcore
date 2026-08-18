#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CFormatConverter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFormatConverter@@QEAA@XZ
    CFormatConverter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z
    virtual long CopyPixels(WICRect const *, unsigned int, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CFormatConverter@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolution@CFormatConverter@@UEAAJPEAN0@Z
    virtual long GetResolution(double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CFormatConverter@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceState@CFormatConverter@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ
    virtual int GetSourceState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z
    static long HrConvertBitmap(IBitmapSource *, PixelFormatInfo const &, IBitmapSource * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CFormatConverter@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z
    long Initialize(IBitmapSource *, PixelFormatInfo const &, double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFormatConverter@@MEAA@XZ
    virtual ~CFormatConverter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z
    long CopyPixelsHelper(int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char *, unsigned int, unsigned int, unsigned char *);
};
