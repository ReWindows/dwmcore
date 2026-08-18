#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 45 member(s).
class CProjectedShadowScene {
public:
    class ReceiverEntry;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProjectedShadowScene@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z
    CProjectedShadowScene(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z
    void DiscardCachesForCaster(CProjectedShadowCaster *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z
    void DiscardCachesForReceiver(CProjectedShadowReceiver *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z
    long DrawShadows(CDrawingContext *, CProjectedShadowReceiver *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CProjectedShadowScene@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ
    bool IsEmptyProjection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CProjectedShadowScene@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z
    long ProcessAddCasters(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z
    long ProcessAddReceivers(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS@@@Z
    long ProcessClearCasters(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z
    long ProcessClearReceivers(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBlurRadiusMultiplier@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETBLURRADIUSMULTIPLIER@@@Z
    long ProcessSetBlurRadiusMultiplier(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_SETBLURRADIUSMULTIPLIER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE@@@Z
    long ProcessSetLightSource(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMaxBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMAXBLURRADIUS@@@Z
    long ProcessSetMaxBlurRadius(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_SETMAXBLURRADIUS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMaxOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY@@@Z
    long ProcessSetMaxOpacity(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMinBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMINBLURRADIUS@@@Z
    long ProcessSetMinBlurRadius(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_SETMINBLURRADIUS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMinOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMINOPACITY@@@Z
    long ProcessSetMinOpacity(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_SETMINOPACITY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF@@@Z
    long ProcessSetOpacityFalloff(CResourceTable *, tagMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProjectedShadowScene@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProjectedShadowScene@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ
    void RequestRedrawAll();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectedShadowScene@@UEAA@XZ
    virtual ~CProjectedShadowScene();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z
    float CalculateBlurRadius(float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z
    float CalculateOpacity(float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCasters@CProjectedShadowScene@@AEAAXXZ
    void ClearCasters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ
    void ClearReceivers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z
    WindissectOpaque * FindCasterEntry(CProjectedShadowCaster const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z
    WindissectOpaque * FindReceiverEntry(CProjectedShadowReceiver const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z
    bool IsCasterInBetweenLightAndReceiver(CVisualTree const *, WindissectOpaque const *, WindissectOpaque const *, float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z
    bool IsShadowInFrontOfReceiver(CDrawingContext const *, WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z
    static bool IsValidVisual(CVisualTree const *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z
    long PrepareShadows(CDrawingContext *, CProjectedShadowReceiver *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z
    void SetBlurRadiusMultiplier(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z
    void SetMaxBlurRadius(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z
    void SetMaxOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z
    void SetMinBlurRadius(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z
    void SetMinOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z
    void SetOpacityFalloff(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z
    long UpdateCasterEntry(CVisualTree const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z
    long UpdateReceiverEntry(CDrawingContext *, WindissectOpaque *);
};
