#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CDrawListEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeVertexColor@CDrawListEntry@@QEBA?AU_D3DCOLORVALUE@@M@Z
    _D3DCOLORVALUE ComputeVertexColor(float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CDrawListEntry@@UEBA?AW4DrawListEntryType@@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z
    long Render(CDrawingContext *, CMILMatrix const &, float, int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawListEntry@@MEAA@XZ
    virtual ~CDrawListEntry();
};
