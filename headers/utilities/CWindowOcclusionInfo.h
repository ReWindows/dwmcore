#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CWindowOcclusionInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z
    int GetSpriteBitmapZ(CVisualTree const *) const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZ@CWindowOcclusionInfo@@MEAAXH@Z
    virtual void SetZ(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateZFromValidParent@CWindowOcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z
    virtual void UpdateZFromValidParent(CVisualTree const *, uint64_t);
};
