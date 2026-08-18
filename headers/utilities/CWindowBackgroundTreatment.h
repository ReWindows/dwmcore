#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 23 member(s).
class CWindowBackgroundTreatment {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowBackgroundTreatment@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ
    bool AreWorldBoundsUnchangedForPreCompute() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWindowBackgroundTreatment@@SAJPEAVCComposition@@PEAVCBrush@@PEAPEAV1@@Z
    static long Create(CComposition *, CBrush *, CWindowBackgroundTreatment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z
    long GenerateBitmapForEffectInput(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropBrushNoRef@CWindowBackgroundTreatment@@QEBAPEBVCBackdropBrush@@PEA_N@Z
    CBackdropBrush const * GetBackdropBrushNoRef(bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CWindowBackgroundTreatment@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque const & GetBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEBVCVisual@@PEBV2@@Z
    static CVisual const * GetWindowBackgroundTreatmentVisual(CVisual const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidBounds@CWindowBackgroundTreatment@@QEBA_NXZ
    bool HasValidBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z
    bool HasValidRenderingRealization(RenderTargetInfo const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ
    bool HasValidSource() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateBitmapContent@CWindowBackgroundTreatment@@QEAAXXZ
    void InvalidateBitmapContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CWindowBackgroundTreatment@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CWindowBackgroundTreatment@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWindowBackgroundTreatment@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowBackgroundTreatment@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCacheInvalidationRequired@CWindowBackgroundTreatment@@QEAAX_N@Z
    void SetCacheInvalidationRequired(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z
    void SetWorldTransform(CMILMatrix const &, int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z
    CWindowBackgroundTreatment(CComposition *, CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ
    void UpdateBackdropFlags();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowBackgroundTreatment@@EEAA@XZ
    virtual ~CWindowBackgroundTreatment();
};
