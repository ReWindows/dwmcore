#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CVisualTreeData {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CVisualTreeData@@MEAAXXZ
    virtual void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z
    virtual void Initialize(CVisualTree *, CVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktop@CVisualTreeData@@MEBA_NXZ
    virtual bool IsDesktop() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Link@CVisualTreeData@@MEAAXXZ
    virtual void Link();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnLink@CVisualTreeData@@MEAAXXZ
    virtual void UnLink();
};
