#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CColorGradientStop {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CColorGradientStop@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CColorGradientStop@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CColorGradientStop@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColor@CColorGradientStop@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORGRADIENTSTOP_SETCOLOR@@@Z
    long ProcessSetColor(CResourceTable *, tagMILCMD_COLORGRADIENTSTOP_SETCOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOffset@CColorGradientStop@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORGRADIENTSTOP_SETOFFSET@@@Z
    long ProcessSetOffset(CResourceTable *, tagMILCMD_COLORGRADIENTSTOP_SETOFFSET const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CColorGradientStop@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CColorGradientStop@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CColorGradientStop@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatedProperty@CColorGradientStop@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetAnimatedProperty(WindissectOpaque const *, void const *);
};
