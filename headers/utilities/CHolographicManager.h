#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 40 member(s).
class CHolographicManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z
    void AddExclusiveModeProxy(CHolographicExclusiveMode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z
    bool AddExclusiveView(CHolographicExclusiveView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z
    bool AddHolographicComposition(CHolographicComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z
    bool AddHolographicDisplay(CHolographicDisplay *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z
    bool AddHolographicViewer(CHolographicViewer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z
    bool AddInteropTexture(CHolographicInteropTexture *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWin32kInteropTexture@CHolographicManager@@QEAA_NPEAUIHolographicWin32kInteropTexture@@PEAX@Z
    bool AddWin32kInteropTexture(IHolographicWin32kInteropTexture *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z
    bool AttachExclusiveSwapChain(CHolographicExclusiveView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z
    static long Create(CComposition *, CHolographicManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z
    long GetDefaultDesktopTree(CDesktopTree * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteropTextureVisualTree@CHolographicManager@@UEAAJIPEAPEAVCVisualTree@@@Z
    virtual long GetInteropTextureVisualTree(unsigned int, CVisualTree * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatistics@CHolographicManager@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z
    long GetPresentStatistics(DXGI_FRAME_STATISTICS_DWM *, _UNSIGNED_RATIO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderingAdapterLuid@CHolographicManager@@UEAA?AU_LUID@@XZ
    virtual _LUID GetRenderingAdapterLuid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z
    CHolographicInteropTexture * GetTextureAtIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInStandby@CHolographicManager@@QEAA_NXZ
    bool IsInStandby();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostInteropTextureInitialize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z
    void PostInteropTextureInitialize(CHolographicInteropTexture *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostInteropTextureResize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z
    void PostInteropTextureResize(CHolographicInteropTexture *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRender@CHolographicManager@@UEAAXXZ
    virtual void PreRender();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z
    void ReleaseExclusivePresentData(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseInteropTextures@CHolographicManager@@QEAAXXZ
    void ReleaseInteropTextures();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z
    void RemoveExclusiveModeProxy(CHolographicExclusiveMode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z
    void RemoveExclusiveView(CHolographicExclusiveView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z
    void RemoveHolographicDisplay(CHolographicDisplay *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z
    void RemoveHolographicViewer(CHolographicViewer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z
    void RemoveInteropTexture(CHolographicInteropTexture *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleSuspension@CHolographicManager@@UEAAX_N@Z
    virtual void ToggleSuspension(bool);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z
    CHolographicManager(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ
    long EnsureHolographicClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ
    long EnsureInteropRenderTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z
    CHolographicInteropTexture * FindInteropTextureByBindId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeClient@CHolographicManager@@AEAAXXZ
    void InitializeClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ
    void ReleaseInteropRenderTarget();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicManager@@EEAA@XZ
    virtual ~CHolographicManager();
};
