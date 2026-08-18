#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 36 member(s).
class CEffectBrush {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEffectBrush@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@4@Z
    bool CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(WindissectOpaque const &, D2D_SIZE_F const &, CMILMatrix const &, WindissectOpaque const &, bool, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropFlags@CEffectBrush@@UEBA?AW4ContentBackdropFlags@@XZ
    virtual int GetBackdropFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z
    long GetBounds(WindissectOpaque const &, D2D_SIZE_F const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z
    virtual long GetBrushParameters(CBrushDrawListGenerator *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z
    CBrush * GetInput(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z
    long GetSourceInputBoundsUnion(WindissectOpaque const &, D2D_SIZE_F const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ
    bool HasBlurEffectNode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCompositionSurface@CEffectBrush@@UEBA_NXZ
    virtual bool HasCompositionSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderingIntermediate@CEffectBrush@@UEBA_NXZ
    virtual bool HasRenderingIntermediate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChainContent@CEffectBrush@@UEBA_NXZ
    virtual bool HasSwapChainContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaqueRect@CEffectBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z
    virtual bool IsOpaqueRect(D2D_SIZE_F const &, D2D_RECT_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z
    virtual bool IsReadyToDraw(CDrawingContext *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETINPUT@@@Z
    long ProcessSetInput(CResourceTable *, tagMILCMD_EFFECTBRUSH_SETINPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z
    long ProcessSetPropertySet(CResourceTable *, tagMILCMD_EFFECTBRUSH_SETPROPERTYSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z
    long ProcessSetTemplate(CResourceTable *, tagMILCMD_EFFECTBRUSH_SETTEMPLATE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEffectBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEffectBrush@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ
    virtual bool ShouldSnapToPixels() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z
    virtual long EnsureBrushGraph(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEffectBrush@@MEAA@XZ
    virtual ~CEffectBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateIsOpaque@CEffectBrush@@AEBA_NXZ
    bool CalculateIsOpaque() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z
    long GetSourceInputBounds(WindissectOpaque const &, D2D_SIZE_F const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidTemplate@CEffectBrush@@AEBA_NXZ
    bool HasValidTemplate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z
    static bool IsValidInputResource(CResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long OnPropertyValueChanged(unsigned int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@CEffectBrush@@AEAAXXZ
    void ReleaseResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ
    long TryCreateEffectInstance();
};
