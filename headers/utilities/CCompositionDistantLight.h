#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 19 member(s).
class CCompositionDistantLight {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z
    CCompositionDistantLight(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoordinateSpaceVisualNoRef@CCompositionDistantLight@@UEBAPEAVCVisual@@XZ
    virtual CVisual * GetCoordinateSpaceVisualNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirection@CCompositionDistantLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetDirection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z
    virtual long GetLightInfo(CDrawingContext const *, CMILMatrix const *, LightInfo *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightType@CCompositionDistantLight@@UEBA?AW4LightType@@XZ
    virtual int GetLightType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CCompositionDistantLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSceneLightRealization@CCompositionDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z
    virtual long GetSceneLightRealization(CMILMatrix const &, ISpectreLightNode * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlackLight@CCompositionDistantLight@@UEBA_NXZ
    virtual bool IsBlackLight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCompositionDistantLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z
    virtual bool IsValid(CVisualTree const *, CVisual const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColor@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR@@@Z
    long ProcessSetColor(CResourceTable *, tagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z
    long ProcessSetCoordinateSpace(CResourceTable *, tagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetDirection@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETDIRECTION@@@Z
    long ProcessSetDirection(CResourceTable *, tagMILCMD_COMPOSITIONDISTANTLIGHT_SETDIRECTION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetIntensity@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETINTENSITY@@@Z
    long ProcessSetIntensity(CResourceTable *, tagMILCMD_COMPOSITIONDISTANTLIGHT_SETINTENSITY const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionDistantLight@@EEAA@XZ
    virtual ~CCompositionDistantLight();
};
