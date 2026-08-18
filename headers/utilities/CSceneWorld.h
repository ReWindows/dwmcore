#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CSceneWorld {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtySceneObject@CSceneWorld@@QEAAXPEAVCSceneObject@@@Z
    void AddDirtySceneObject(CSceneObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CSceneWorld@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSceneWorld@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z
    CSceneWorld(CComposition *, CSceneVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CSceneWorld@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CSceneWorld@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyDrawing@CSceneWorld@@UEBA_NXZ
    virtual bool IsEmptyDrawing() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSceneWorld@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSceneWorld@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSceneWorld@@MEAA@XZ
    virtual ~CSceneWorld();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneFrameTick@CSceneWorld@@EEAAJPEAUISpectreRenderer@@_K@Z
    virtual long OnSceneFrameTick(ISpectreRenderer *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneLost(ISpectreRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneReady(ISpectreRenderer *);
};
