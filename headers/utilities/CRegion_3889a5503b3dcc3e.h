#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class CRegion {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z
    void AddRectangle(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z
    void AddRectangle(MilRectU const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z
    void AddRectangles(tagRECT const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRegion@@QEAA@AEBUMilRectU@@@Z
    CRegion(MilRectU const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CRegion@@QEAAXAEBV1@@Z
    void Copy(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z
    long CreateHRGN(HRGN__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersect@CRegion@@QEAAXAEBV1@@Z
    void Intersect(CRegion const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z
    void SetHRGN(HRGN__* const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z
    void SetRectangle(MilRectU const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtract@CRegion@@QEAAXAEBV1@@Z
    void Subtract(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z
    long TryAddRectangle(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z
    long TryAddRectangles(tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Union@CRegion@@QEAAXAEBV1@@Z
    void Union(CRegion const &);
};
