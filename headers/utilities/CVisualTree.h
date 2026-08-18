#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 28 member(s).
class CVisualTree {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCVIToPreRenderList@CVisualTree@@UEAAXAEAVCVIRenderList@@@Z
    virtual void AddCVIToPreRenderList(CVIRenderList &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisualTree@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPreCompute@CVisualTree@@QEAAXXZ
    void BeginPreCompute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcOcclusion@CVisualTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z
    virtual long CalcOcclusion(WindissectOpaque const &, COcclusionContext *, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z
    long EnsureVisualTransform(CVisual *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CVisualTree@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque const & GetBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiftedOverlayHost@CVisualTree@@UEBAPEAVILiftedOverlayHost@@XZ
    virtual ILiftedOverlayHost * GetLiftedOverlayHost() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ
    CVisualTree * GetRootVisualTree() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementDrawListGenerationCount@CVisualTree@@UEBAXXZ
    virtual void IncrementDrawListGenerationCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktop@CVisualTree@@UEBA_NXZ
    virtual bool IsDesktop() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CVisualTree@@QEBA_NXZ
    bool IsDirty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CVisualTree@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisualTree@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisualTree@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z
    void RemoveTreeClient(IVisualTreeClient *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualTree@@UEAA@XZ
    virtual ~CVisualTree();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z
    CVisualTree(CComposition *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z
    long Clean(CPreComputeContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z
    static long Create(CComposition *, CVisual *, CVisualTree * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CVisualTree@@MEAAXXZ
    virtual void FinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVisualTree@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientBounds@CVisualTree@@IEAAXXZ
    void UpdateClientBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientInfo@CVisualTree@@MEAAXXZ
    virtual void UpdateClientInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z
    bool _IsInTree(CVisual const *, int) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ
    void ReleaseTreeDatas();
};
