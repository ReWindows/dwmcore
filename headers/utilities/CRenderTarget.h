#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 19 member(s).
class CRenderTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ
    void AddToRenderTargetManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CRenderTarget@@UEAAJ_N@Z
    virtual long CheckOcclusionState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CRenderTarget@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTree@CRenderTarget@@UEBAPEBVCVisualTree@@XZ
    virtual CVisualTree const * GetVisualTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z
    virtual long ProcessSetRoot(CResourceTable *, tagMILCMD_RENDERTARGET_SETROOT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateRefreshRate@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z
    virtual long ProcessUpdateRefreshRate(CResourceTable *, tagMILCMD_RENDERTARGET_UPDATEREFRESHRATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ
    void RemoveFromRenderTargetManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresDirtyRectCollection@CRenderTarget@@UEBA_NXZ
    virtual bool RequiresDirtyRectCollection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z
    long SetRootVisual(CVisual *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z
    CRenderTarget(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CRenderTarget@@MEAAXXZ
    virtual void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClearMode@CRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ
    virtual int GetClearMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRenderTarget@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ
    void ReleaseVisualTree();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z
    void SetVisualTree(CVisualTree *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderTarget@@MEAA@XZ
    virtual ~CRenderTarget();
};
