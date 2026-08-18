#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CBspNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z
    long BuildPolygonList(CVisual *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBspNode@@QEAA@_N@Z
    CBspNode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z
    long PushPolygon(CPolygon *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSubTree@CBspNode@@QEAAXXZ
    void ReleaseSubTree();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z
    void AddPolygon(CPolygon *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBspNode@@EEAA@XZ
    virtual ~CBspNode();
};
