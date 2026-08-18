#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CViewBox {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CViewBox@@QEAA@PEAVCComposition@@@Z
    CViewBox(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CViewBox@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z
    virtual void GetRealization(D2D_SIZE_F const &, D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CViewBox@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCurrentPropertyValues@CViewBox@@UEBAJI@Z
    virtual long NotifyCurrentPropertyValues(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetHorizontalAlignment@CViewBox@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIEWBOX_SETHORIZONTALALIGNMENT@@@Z
    long ProcessSetHorizontalAlignment(CResourceTable *, tagMILCMD_VIEWBOX_SETHORIZONTALALIGNMENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOffset@CViewBox@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIEWBOX_SETOFFSET@@@Z
    long ProcessSetOffset(CResourceTable *, tagMILCMD_VIEWBOX_SETOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSize@CViewBox@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIEWBOX_SETSIZE@@@Z
    long ProcessSetSize(CResourceTable *, tagMILCMD_VIEWBOX_SETSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStretch@CViewBox@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIEWBOX_SETSTRETCH@@@Z
    long ProcessSetStretch(CResourceTable *, tagMILCMD_VIEWBOX_SETSTRETCH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetVerticalAlignment@CViewBox@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIEWBOX_SETVERTICALALIGNMENT@@@Z
    long ProcessSetVerticalAlignment(CResourceTable *, tagMILCMD_VIEWBOX_SETVERTICALALIGNMENT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CViewBox@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatedProperty@CViewBox@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetAnimatedProperty(WindissectOpaque const *, void const *);
};
