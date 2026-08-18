#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 23 member(s).
class CLayerVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z
    virtual long CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z
    void CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    virtual long GetBoundsWithEffects(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long GetBoundsWithLayerEffect(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlatteningVisualTree@CLayerVisual@@QEBAPEAVCVisualTree@@XZ
    CVisualTree * GetFlatteningVisualTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long GetMaskBounds(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long GetShadowBounds(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeEffect@CLayerVisual@@UEBAPEAVCTreeEffect@@XZ
    virtual CTreeEffect * GetTreeEffect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    void GetUpdatedDropShadowBounds(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonEmptyContent@CLayerVisual@@UEBA_NXZ
    virtual bool HasNonEmptyContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ
    bool IsAutomaticBoundsToLocalSpaceEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAutomaticBoundsExpansion@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION@@@Z
    long ProcessSetAutomaticBoundsExpansion(CResourceTable *, tagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z
    long ProcessSetEffect(CResourceTable *, tagMILCMD_LAYERVISUAL_SETEFFECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetFlatteningToLocalSpace@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETFLATTENINGTOLOCALSPACE@@@Z
    long ProcessSetFlatteningToLocalSpace(CResourceTable *, tagMILCMD_LAYERVISUAL_SETFLATTENINGTOLOCALSPACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z
    long ProcessSetShadow(CResourceTable *, tagMILCMD_LAYERVISUAL_SETSHADOW const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLayerVisual@@UEAA@XZ
    virtual ~CLayerVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z
    void CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(CMILMatrix const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTreeEffect@CLayerVisual@@AEAAXXZ
    void ClearTreeEffect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ
    void UpdateBackdropBlurFlagForTreeEffect();
};
