#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CLinearGradientLegacyMilBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLinearGradientLegacyMilBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@@Z
    long Draw(CDrawingContext *, CDrawListEntryBuilder *, D2D_RECT_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ
    long EnsureDrawlistBrush();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLinearGradientLegacyMilBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLinearGradientLegacyMilBrush@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLinearGradientLegacyMilBrush@@MEAA@XZ
    virtual ~CLinearGradientLegacyMilBrush();
};
