#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 39 member(s).
class CCompositionLight {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositionLight@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z
    long AddTarget(CVisual *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AffectsVisual@CCompositionLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z
    virtual bool AffectsVisual(CVisualTree const *, CVisual *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z
    CCompositionLight(CComposition *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoordinateSpaceVisualNoRef@CCompositionLight@@UEBAPEAVCVisual@@XZ
    virtual CVisual * GetCoordinateSpaceVisualNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlackLight@CCompositionLight@@UEBA_NXZ
    virtual bool IsBlackLight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CCompositionLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z
    virtual bool IsValid(CVisualTree const *, CVisual const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ
    void IssueLightChangedNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@PEBXI@Z
    long ProcessAddExclusions(CResourceTable *, tagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@PEBXI@Z
    long ProcessAddTargets(CResourceTable *, tagMILCMD_COMPOSITIONLIGHT_ADDTARGETS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessClearExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS@@@Z
    long ProcessClearExclusions(CResourceTable *, tagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessClearTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_CLEARTARGETS@@@Z
    long ProcessClearTargets(CResourceTable *, tagMILCMD_COMPOSITIONLIGHT_CLEARTARGETS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SETENABLED@@@Z
    long ProcessSetEnabled(CResourceTable *, tagMILCMD_COMPOSITIONLIGHT_SETENABLED const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositionLight@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositionLight@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveExcludedTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z
    virtual void RemoveExcludedTargetVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z
    virtual void RemoveTarget(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z
    virtual void RemoveTargetVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z
    long UpdateSceneLightInfo(CDrawingContext const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z
    WindissectOpaque CalcEyePointOrVector(CVisual *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z
    long CalcLocalToDeviceMatrix(CDrawingContext const *, CMILMatrix const *, CVisual *, CMILMatrix *, CMILMatrix *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z
    bool IsBlackColor(_D3DCOLORVALUE const &, float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z
    bool IsValidCoordinateSpace(CVisualTree const *, CVisual const *, CVisual *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z
    void NormalizeVec3(WindissectOpaque &, WindissectOpaque*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetAnimatedProperty(WindissectOpaque const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetDirectionProperty(WindissectOpaque const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@AEBUfloat2@345@PEAULightInfo@@@Z
    void TransformAttenuation(WindissectOpaque &, WindissectOpaque &, LightInfo *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z
    void UpdateRegistrationWithCompositor(CVisual *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionLight@@MEAA@XZ
    virtual ~CCompositionLight();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z
    long AddTargets(CResourceTable *, unsigned int, void const *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneFrameTick@CCompositionLight@@EEAAJPEAUISpectreRenderer@@_K@Z
    virtual long OnSceneFrameTick(ISpectreRenderer *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneLost@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneLost(ISpectreRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneReady@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneReady(ISpectreRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z
    long RemoveAllTargets(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z
    virtual long UpdateLightToWorldForScene(CDrawingContext const *);
};
