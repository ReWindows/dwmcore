#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 36 member(s).
class CHolographicClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z
    static long Create(CHolographicInteropTaskQueue *, CHolographicInteropTaskQueue * *, CHolographicClient * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameUpdate@CHolographicClient@@UEAAJIII@Z
    virtual long FrameUpdate(unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExclusiveSurfaceUpdateEvent@CHolographicClient@@UEAAPEAXXZ
    virtual void * GetExclusiveSurfaceUpdateEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkEvent@CHolographicClient@@UEAAPEAXXZ
    virtual void * GetWorkEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostPresent@CHolographicClient@@UEAAJXZ
    virtual long PostPresent();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInStandby@CHolographicClient@@UEAAX_N@Z
    virtual void SetInStandby(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z
    virtual void SetRenderingAdapter(_LUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextureUpdatesPaused@CHolographicClient@@UEAAX_N@Z
    virtual void SetTextureUpdatesPaused(bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z
    CHolographicClient(CHolographicInteropTaskQueue *, CHolographicInteropTaskQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CHolographicClient@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicClient@@MEAA@XZ
    virtual ~CHolographicClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoTextureUpdates@CHolographicClient@@AEAAXXZ
    void DoTextureUpdates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ
    long EnsureHolographicCompositor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHolographicClient@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessAddDisplay(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessAddExclusiveView(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessAddTexture(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessAddViewer(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAttachExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessAttachExclusiveSwapChain(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z
    void ProcessMessage(unsigned int, IUnknown *, void *, void *, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessReleaseExclusiveSwapChain(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessRemoveDisplay(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessRemoveExclusiveModeProxy(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessRemoveExclusiveView(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessRemoveTexture(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z
    void ProcessRemoveViewer(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTextureUpdateSync@CHolographicClient@@AEAAXIPEAX0_K@Z
    void ProcessTextureUpdateSync(unsigned int, void *, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeResources@CHolographicClient@@AEAAXXZ
    void UninitializeResources();
};
