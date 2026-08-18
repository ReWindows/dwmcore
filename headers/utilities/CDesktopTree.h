#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 20 member(s).
class CDesktopTree {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z
    virtual void AddCVIToPreRenderList(CVIRenderList &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z
    long AddNewComposeTopContent(IBitmapResource *, CShape const &, CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcOcclusion@CDesktopTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z
    virtual long CalcOcclusion(WindissectOpaque const &, COcclusionContext *, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ
    long CalcOcclusionAndCollectOverlayCandidates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ
    long CleanTreeAndLockForRead();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiftedOverlayHost@CDesktopTree@@UEBAPEAVILiftedOverlayHost@@XZ
    virtual ILiftedOverlayHost * GetLiftedOverlayHost() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ
    COcclusionContext const * GetSharedOcclusionContext() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementDrawListGenerationCount@CDesktopTree@@UEBAXXZ
    virtual void IncrementDrawListGenerationCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktop@CDesktopTree@@UEBA_NXZ
    virtual bool IsDesktop() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z
    bool NeedsCursorPositionUpdates(CCursorVisual const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z
    long SetRoot(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void UpdateCVIRenderTargets(RenderTargetInfo const &, WindissectOpaque const &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopTree@@UEAA@XZ
    virtual ~CDesktopTree();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z
    CDesktopTree(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z
    static long Create(CComposition *, CVisual *, _LUID, CDesktopTree * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDesktopTree@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientInfo@CDesktopTree@@MEAAXXZ
    virtual void UpdateClientInfo();
};
