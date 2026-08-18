#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 65 member(s).
class COverlayContext {
public:
    class CVisitedContent;
    class OverlayPlaneInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z
    bool BeginOverlayCandidateCollection(CRegion const *, CRegion *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z
    COverlayContext(IOverlayMonitorTarget *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@111AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N@Z
    long CheckAndRecordOverlayCandidate(CVisual *, WindissectOpaque const &, CCompositionSurfaceInfo *, ISwapChainRealization *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, CCornerRects const &, CMILMatrix const &, int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z
    static long ComputeOverlayConfiguration(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z
    bool DeriveOverlayRotationParameters(CMILMatrix const &, int *, unsigned int *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ
    bool DirectFlipEarlyWakeupReady() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z
    void EndOverlayCandidateCollection(COcclusionContext const *, CVisualTree const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z
    CCompositionSurfaceInfo * FindMajorityScreenContent(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ
    CMILMatrix const & GetDeviceTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ
    int GetEffectiveDirectFlipMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z
    void GetInverseDesktopMPOTransform(CMILMatrix *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ
    CMonitorTransform const & GetMonitorTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetVirtualModeClip() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ
    bool HasRevokablePlanes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCursorScaledByHardware@COverlayContext@@QEBA_NXZ
    bool IsCursorScaledByHardware() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSoftwareCursor@COverlayContext@@QEBA_NPEBVCCursorVisual@@@Z
    bool IsSoftwareCursor(CCursorVisual const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    void NotifyOverlayInvertedContent(CVisual const *, _LUID, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwapChainCreated@COverlayContext@@QEAAXXZ
    void OnSwapChainCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverlaysEnabled@COverlayContext@@QEBA_NXZ
    bool OverlaysEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentNeeded@COverlayContext@@QEBA_NXZ
    bool PresentNeeded() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@COverlayContext@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@_N@Z
    void SetHardwareCursor(CCursorVisual *, CMILMatrix const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z
    long SyncLock(IOverlaySwapChain *, unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMPOCaps@COverlayContext@@QEAAJXZ
    long UpdateMPOCaps();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COverlayContext@@QEAA@XZ
    ~COverlayContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreSupportedStretchFactors@COverlayContext@@AEBA_NAEBUtagRECT@@0AEBUDXGI_MULTIPLANE_OVERLAY_GROUP_CAPS@@_N@Z
    bool AreSupportedStretchFactors(tagRECT const &, tagRECT const &, DXGI_MULTIPLANE_OVERLAY_GROUP_CAPS const &, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDesktopClip@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    bool CalcDesktopClip(WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcOverlaySize@COverlayContext@@AEBA?AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z
    int CalcOverlaySize(DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z
    bool CanFastDisableDesktopPlane(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForHardwareCursorScalingChanges@COverlayContext@@AEAAXXZ
    void CheckForHardwareCursorScalingChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z
    static bool CheckMultiPlaneOverlaySupport(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDirectFlip@COverlayContext@@AEAAXXZ
    void ClearDirectFlip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHardwareCursor@COverlayContext@@AEAAXXZ
    void ClearHardwareCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z
    static void ComparePlaneAttributes(DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES const &, DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES const &, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z
    static long ComputeOverlayConfigurationForAdapter(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ
    void DbgSaveOverlayStateInfoAfter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ
    void DbgSaveOverlayStateInfoBefore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayCursorUpdateForMPO@COverlayContext@@AEBA_NXZ
    bool DelayCursorUpdateForMPO() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z
    void DeriveDesktopPlaneAttributes(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z
    long EnsureIndependentFlipState(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z
    static int FindLowestPriorityOverlayCandidateIndex(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z
    int FindOverlayCandidateIndex(CVisual const *, CCompositionSurfaceInfo const *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindOverlayPlaneIndex@COverlayContext@@AEBAHPEBVCVisual@@U_LUID@@@Z
    int FindOverlayPlaneIndex(CVisual const *, _LUID) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z
    static void GetContextCandidates(COverlayContext *, WindissectOpaque const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCursorBounds@COverlayContext@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetCursorBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCursorVisibility@COverlayContext@@AEBA?AW4CursorVisibility@@XZ
    int GetCursorVisibility() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasOverlappingCornerRects@COverlayContext@@CA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z
    static bool HasOverlappingCornerRects(WindissectOpaque *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ
    bool HaveOverlayCandidatesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z
    static bool InitCheckCandidatesList(WindissectOpaque const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z
    bool IsCandidateDirectFlipCompatible(CCompositionSurfaceInfo *, ISwapChainRealization *, DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES const &, unsigned int, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_NI5@Z
    bool IsCandidateOverlayCompatible(CVisual *, CCompositionSurfaceInfo const *, ISwapChainRealization *, DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES &, int, bool, unsigned int, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCandidateSupportedSingleton@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAVOverlayPlaneInfo@1@@Z
    static bool IsCandidateSupportedSingleton(WindissectOpaque const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCustomPresentDurationSupported@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z
    bool IsCustomPresentDurationSupported(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z
    bool IsDirectFlipSupportedOnTarget(CCompositionSurfaceInfo *, ISwapChainRealization *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z
    static bool IsHigherProprity(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z
    bool IsIntelWorkaroundNeeded(tagRECT const &, tagRECT const &, tagRECT const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayCompatibleScale@COverlayContext@@AEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_N@Z
    bool IsOverlayCompatibleScale(DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *, int, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z
    bool IsPanelFitterCompatibleScale(DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ
    bool LegacyPresentRequired() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z
    void PushCandidates(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ
    void ReleaseObsoletePlaneAssignments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ
    long TransferCandidatesToPlaneAssignments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z
    static bool TrimCheckCandidatesList(WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ
    void const * UpdateHDRMetaData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHardwareCursor@COverlayContext@@AEAAX_N@Z
    void UpdateHardwareCursor(bool);
};
