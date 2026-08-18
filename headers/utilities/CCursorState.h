#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 32 member(s).
class CCursorState {
public:
    class MonitorData;
    class PaddedBitmap;
    class ShapeData;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCursorState@@QEAA@XZ
    CCursorState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearShape@CCursorState@@UEAAXXZ
    virtual void ClearShape();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearVisual@CCursorState@@QEAAXXZ
    void ClearVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionResources@CCursorState@@QEAAXXZ
    void EnsureCompositionResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N2AEBVCMILMatrix@@@Z
    bool EnsureMonitorData(_LUID, unsigned int, WindissectOpaque const &, bool, bool, CMILMatrix const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSnappedShapeRect@CCursorState@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetSnappedShapeRect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrailPointOpacity@CCursorState@@QEBAMAEBUTrailPoint@1@_K@Z
    float GetTrailPointOpacity(WindissectOpaque const &, uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleShape@CCursorState@@QEBA_NXZ
    bool HasVisibleShape() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z
    bool ProcessStateChanges(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCrosshairProperties@CCursorState@@UEAAXK@Z
    virtual void SetCrosshairProperties(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCrosshairEnabled@CCursorState@@UEAAX_N@Z
    virtual void SetIsCrosshairEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsShadowEnabled@CCursorState@@UEAAX_N@Z
    virtual void SetIsShadowEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsTrailEnabled@CCursorState@@UEAAX_N@Z
    virtual void SetIsTrailEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CCursorState@@UEAAXMMW4_HWCURSOR_UPDATE_TYPE@@@Z
    virtual void SetPosition(float, float, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@CCursorState@@UEAAXM@Z
    virtual void SetRotationAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z
    virtual long SetShape(void *, unsigned int, unsigned int, unsigned int, unsigned int, bool, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSynchronizedPosition@CCursorState@@QEAAXMM@Z
    void SetSynchronizedPosition(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrailLength@CCursorState@@UEAAJH@Z
    virtual long SetTrailLength(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpdateEvent@CCursorState@@QEAAXPEAX@Z
    void SetUpdateEvent(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCursorState@@UEAA@XZ
    virtual ~CCursorState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CCursorState@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureShapeRectAndTransform@CCursorState@@AEAAX_N@Z
    void EnsureShapeRectAndTransform(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceSoftwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z
    void ForceSoftwareShape(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorData@CCursorState@@AEBAPEAVMonitorData@1@U_LUID@@I@Z
    WindissectOpaque * GetMonitorData(_LUID, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z
    void HideHardwareShape(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputThread_UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@W4_HWCURSOR_UPDATE_TYPE@@@Z
    bool InputThread_UpdateHardwareCursor(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleCompositionPass@CCursorState@@AEAAXXZ
    void ScheduleCompositionPass();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHardwareShapeAndPosition@CCursorState@@AEAA_NPEAVMonitorData@1@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@1W4_HWCURSOR_UPDATE_TYPE@@_N@Z
    bool SetHardwareShapeAndPosition(WindissectOpaque *, WindissectOpaque const &, WindissectOpaque const &, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortShapeCache@CCursorState@@AEAAXAEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z
    void SortShapeCache(D2D_SIZE_U const &, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHardwareCursor@CCursorState@@AEAA?AW4CursorVisibility@@PEAVMonitorData@1@_N1@Z
    int UpdateHardwareCursor(WindissectOpaque *, bool, bool);
};
