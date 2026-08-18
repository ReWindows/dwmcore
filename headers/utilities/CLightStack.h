#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CLightStack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CLightStack@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z
    unsigned int GetActiveLightCount(CVisual *, CVisualTree const *, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z
    long GetDestLightsArray(CVisual *, CVisualTree const *, bool, bool, WindissectOpaque &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLighting@CLightStack@@QEBA_NXZ
    bool HasLighting() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@CLightStack@@QEAAJXZ
    long Pop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z
    long PopLightsFromVisual(CVisual const *, CVisualTree const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z
    long Push(CCompositionLight *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z
    long PushLightsFromVisual(CVisual const *, CVisualTree const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z
    long RetrieveCurrentLightBufferForContextNoRef(CDrawingContext *, CMILMatrix const *, CHwLightCollectionBuffer * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLightStack@@QEAA@XZ
    ~CLightStack();
};
