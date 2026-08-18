#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CBitmapLockUnaligned {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z
    long HrInit(CBitmap *, unsigned int, unsigned int, PixelFormatInfo const &, unsigned int, unsigned int, void *, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReferenceBits@CBitmapLockUnaligned@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long TryReferenceBits(IUnknown * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapLockUnaligned@@UEAA@XZ
    virtual ~CBitmapLockUnaligned();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ
    void UnlockUnaligned();
};
