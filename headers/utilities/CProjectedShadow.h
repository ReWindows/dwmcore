#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 36 member(s).
class CProjectedShadow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CProjectedShadow@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProjectedShadow@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z
    CProjectedShadow(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CProjectedShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAntialiasedContent@CProjectedShadow@@UEBA_NXZ
    virtual bool HasAntialiasedContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CProjectedShadow@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z
    long Initialize(CProjectedShadowScene *, CProjectedShadowCaster *, CProjectedShadowReceiver *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyDrawing@CProjectedShadow@@UEBA_NXZ
    virtual bool IsEmptyDrawing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CProjectedShadow@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProjectedShadow@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProjectedShadow@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z
    void SetBlurRadius(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z
    void SetShadowOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z
    void SetTransforms(CMILMatrix const &, CMILMatrix const &, CMILMatrix const &);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectedShadow@@MEAA@XZ
    virtual ~CProjectedShadow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long AdjustNineGridBrush(CDrawingContext *, CNineGridBrush *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z
    long AdjustSurfaceBrush(CDrawingContext *, CSurfaceBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z
    WindissectOpaque CalculateBounds(float, CVisualTree const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ
    bool CanUseFastShadow() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z
    _D3DCOLORVALUE ComputeShadowColor(CDrawingContext *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z
    int ComputeShadowPath(CDrawingContext *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z
    long CreateCrossFadeGraph(CBrush *, CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z
    long GenerateApproxBlur(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    static long GenerateApproxBlurIntermediate(CDrawingContext *, float, IBitmapResource * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z
    long GenerateNineGridBrush(CDrawingContext *, IBitmapResource *, WindissectOpaque const &, CNineGridBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z
    long GenerateSurfaceBrush(CDrawingContext *, IBitmapResource *, WindissectOpaque const &, CSurfaceBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z
    float GetBlurForBoundary(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z
    long GetCasterShadowInputBrush(CDrawingContext *, CDrawListBrush * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ
    bool IsShadowAxisAlignedRectToReceiver() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z
    long UpdateShadowIntermediates(CDrawingContext *);
};
