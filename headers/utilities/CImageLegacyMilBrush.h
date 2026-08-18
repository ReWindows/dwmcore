#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CImageLegacyMilBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CImageLegacyMilBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ
    CCachedVisualImage * GetCachedBrushCVINoRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CImageLegacyMilBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ
    bool ReducesToFillImage() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CImageLegacyMilBrush@@UEAAKXZ
    virtual unsigned long Release();
};
