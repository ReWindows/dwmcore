#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CShapeVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CShapeVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z
    long ProcessSetShapes(CResourceTable *, tagMILCMD_SHAPEVISUAL_SETSHAPES const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z
    long ProcessSetViewBox(CResourceTable *, tagMILCMD_SHAPEVISUAL_SETVIEWBOX const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CShapeVisual@@MEBA_NXZ
    virtual bool HasSingleD2DBitmapOrPrimitiveGroupInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CShapeVisual@@MEAAJPEAVCContent@@@Z
    virtual long SetContent(CContent *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z
    long EnsureShapeTree(CShapeTree * *);
};
