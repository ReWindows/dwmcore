#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 25 member(s).
class CVisualSurface {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisualSurface@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualSurface@@QEAA@PEAVCComposition@@@Z
    CVisualSurface(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z
    long GetCVIForRealizationSize(unsigned int, D2D_VECTOR_2F const &, D2D_VECTOR_2F *, CCachedVisualImage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z
    long GetExplicitRealizationSizeCVI(D2D_VECTOR_2F *, CCachedVisualImage * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CVisualSurface@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceSize@CVisualSurface@@QEBAAEBUD2D_VECTOR_2F@@XZ
    D2D_VECTOR_2F const & GetSourceSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSomethingToDraw@CVisualSurface@@QEBA_NXZ
    bool HasSomethingToDraw() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CVisualSurface@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z
    long ProcessFreeze(CResourceTable *, tagMILCMD_VISUALSURFACE_FREEZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z
    long ProcessSetRealizationSize(CResourceTable *, tagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSourceOffset@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSOURCEOFFSET@@@Z
    long ProcessSetSourceOffset(CResourceTable *, tagMILCMD_VISUALSURFACE_SETSOURCEOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSourceSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSOURCESIZE@@@Z
    long ProcessSetSourceSize(CResourceTable *, tagMILCMD_VISUALSURFACE_SETSOURCESIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSourceVisual@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSOURCEVISUAL@@@Z
    long ProcessSetSourceVisual(CResourceTable *, tagMILCMD_VISUALSURFACE_SETSOURCEVISUAL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetStretchMode@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSTRETCHMODE@@@Z
    long ProcessSetStretchMode(CResourceTable *, tagMILCMD_VISUALSURFACE_SETSTRETCHMODE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisualSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisualSurface@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CVisualSurface@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualSurface@@UEAA@XZ
    virtual ~CVisualSurface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllRenderTargets@CVisualSurface@@AEAAXXZ
    void ClearAllRenderTargets();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z
    long GetOrCreateCVIForRealizationSize(D2D_VECTOR_2F const &, CCachedVisualImage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceOffset@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetSourceOffset(WindissectOpaque const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetSourceSize(WindissectOpaque const *, void const *);
};
