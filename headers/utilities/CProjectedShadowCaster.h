#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 28 member(s).
class CProjectedShadowCaster {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProjectedShadowCaster@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProjectedShadowCaster@@QEAA@PEAVCComposition@@@Z
    CProjectedShadowCaster(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z
    WindissectOpaque CalculateCasterBounds(CVisualTree const *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForVisualTree@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@@Z
    bool CheckForVisualTree(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z
    WindissectOpaque const & GetCasterBounds(CVisualTree const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ
    _D3DCOLORVALUE GetColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z
    float GetEffectiveAlpha(CVisualTree const *, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ
    CBrush * GetEffectiveMaskBrush() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ
    void InvalidateMaskContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ
    bool IsEmptyMaskContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CProjectedShadowCaster@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ
    bool IsRectangular() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL@@@Z
    long ProcessSetAncestorClipVisual(CResourceTable *, tagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH@@@Z
    long ProcessSetBrush(CResourceTable *, tagMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETCASTINGVISUAL@@@Z
    long ProcessSetCastingVisual(CResourceTable *, tagMILCMD_PROJECTEDSHADOWCASTER_SETCASTINGVISUAL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETMASK@@@Z
    long ProcessSetMask(CResourceTable *, tagMILCMD_PROJECTEDSHADOWCASTER_SETMASK const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProjectedShadowCaster@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProjectedShadowCaster@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisualPropertyDataFromTree@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z
    void RemoveVisualPropertyDataFromTree(CVisualTree const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ
    void RequestRedraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z
    void SetCastingVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z
    long UpdateMaskIntermediate(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z
    void UpdateVisualProperty(CVisualTree const *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectedShadowCaster@@MEAA@XZ
    virtual ~CProjectedShadowCaster();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z
    float ComputeEffectiveAlpha(CVisualTree const *, bool *) const;
};
