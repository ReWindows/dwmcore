#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 35 member(s).
class CCompositionSpotLight {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z
    virtual bool AffectsVisual(CVisualTree const *, CVisual *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z
    CCompositionSpotLight(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoordinateSpaceVisualNoRef@CCompositionSpotLight@@UEBAPEAVCVisual@@XZ
    virtual CVisual * GetCoordinateSpaceVisualNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirection@CCompositionSpotLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetDirection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z
    virtual long GetLightInfo(CDrawingContext const *, CMILMatrix const *, LightInfo *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightType@CCompositionSpotLight@@UEBA?AW4LightType@@XZ
    virtual int GetLightType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CCompositionSpotLight@@UEBAAEBUfloat3@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z
    virtual long GetSceneLightRealization(CMILMatrix const &, ISpectreLightNode * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ
    virtual bool IsBlackLight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCompositionSpotLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z
    virtual bool IsValid(CVisualTree const *, CVisual const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAttenuation0@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0@@@Z
    long ProcessSetAttenuation0(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAttenuation1@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1@@@Z
    long ProcessSetAttenuation1(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION1const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAttenuation2@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2@@@Z
    long ProcessSetAttenuation2(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z
    long ProcessSetCoordinateSpace(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetDirection@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTION@@@Z
    long ProcessSetDirection(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInnerConeAngle@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE@@@Z
    long ProcessSetInnerConeAngle(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInnerConeColor@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR@@@Z
    long ProcessSetInnerConeColor(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInnerConeIntensity@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEINTENSITY@@@Z
    long ProcessSetInnerConeIntensity(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEINTENSITY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMaxAttenuationCutoff@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETMAXATTENUATIONCUTOFF@@@Z
    long ProcessSetMaxAttenuationCutoff(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETMAXATTENUATIONCUTOFF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMinAttenuationCutoff@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETMINATTENUATIONCUTOFF@@@Z
    long ProcessSetMinAttenuationCutoff(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETMINATTENUATIONCUTOFF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOffset@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET@@@Z
    long ProcessSetOffset(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOuterConeAngle@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE@@@Z
    long ProcessSetOuterConeAngle(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOuterConeColor@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR@@@Z
    long ProcessSetOuterConeColor(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOuterConeIntensity@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEINTENSITY@@@Z
    long ProcessSetOuterConeIntensity(CResourceTable *, tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEINTENSITY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveExcludedTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z
    virtual void RemoveExcludedTargetVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z
    virtual void RemoveTarget(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z
    virtual void RemoveTargetVisual(CVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetInnerConeAngle(WindissectOpaque const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetOuterConeAngle(WindissectOpaque const *, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionSpotLight@@EEAA@XZ
    virtual ~CCompositionSpotLight();
};
