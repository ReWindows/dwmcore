#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CDesktopTreeData {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CDesktopTreeData@@MEAAXXZ
    virtual void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z
    virtual void Initialize(CVisualTree *, CVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktop@CDesktopTreeData@@MEBA_NXZ
    virtual bool IsDesktop() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Link@CDesktopTreeData@@MEAAXXZ
    virtual void Link();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z
    virtual bool SetWorldTransform(CMILMatrix const &, bool, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnLink@CDesktopTreeData@@MEAAXXZ
    virtual void UnLink();
};
