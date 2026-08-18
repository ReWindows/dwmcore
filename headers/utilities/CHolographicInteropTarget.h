#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 62 member(s).
class CHolographicInteropTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicInteropTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CHolographicInteropTarget@@UEAAJ_N@Z
    virtual long CheckOcclusionState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z
    static long Create(CComposition *, _LUID *, CHolographicInteropTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFullDirty@CHolographicInteropTarget@@UEAAXXZ
    virtual void ForceFullDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopTree@CHolographicInteropTarget@@UEBAPEAVCDesktopTree@@XZ
    virtual CDesktopTree * GetDesktopTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastMonitorTime@CHolographicInteropTarget@@UEAA_NPEAVMonitorTime@@0_N@Z
    virtual bool GetLastMonitorTime(MonitorTime *, MonitorTime *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNominalRefreshRate@CHolographicInteropTarget@@UEBA?AUDXGI_RATIONAL@@XZ
    virtual DXGI_RATIONAL GetNominalRefreshRate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CHolographicInteropTarget@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CHolographicInteropTarget@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetInfo@CHolographicInteropTarget@@UEBA?AVRenderTargetInfo@@XZ
    virtual RenderTargetInfo GetRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CHolographicInteropTarget@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStats@CHolographicInteropTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z
    virtual bool GetStats(uint64_t, tagCOMPOSITION_TARGET_STATS_2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetId@CHolographicInteropTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ
    virtual tagCOMPOSITION_TARGET_ID const & GetTargetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVBlankDuration@CHolographicInteropTarget@@UEBA_KXZ
    virtual uint64_t GetVBlankDuration() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CHolographicInteropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z
    long Initialize(_LUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOccluded@CHolographicInteropTarget@@UEBA_NXZ
    virtual bool IsOccluded() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CHolographicInteropTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryMonitor@CHolographicInteropTarget@@UEBA_NXZ
    virtual bool IsPrimaryMonitor() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicInteropTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicInteropTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAndPresent@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RenderAndPresent(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSyncRefreshCountWaitTarget@CHolographicInteropTarget@@UEAAJIPEAPEAX@Z
    virtual long SetSyncRefreshCountWaitTarget(unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z
    virtual long WaitForVBlank(void *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z
    CHolographicInteropTarget(CComposition *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicInteropTarget@@MEAA@XZ
    virtual ~CHolographicInteropTarget();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z
    long RenderDirtyRegion(CHolographicInteropTexture *, unsigned int, unsigned int, IRenderTargetBitmap *, CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z
    long RenderTexture(CDrawingContext *, CHolographicInteropTexture *, unsigned int, unsigned int);
};
