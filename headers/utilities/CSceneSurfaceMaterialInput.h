#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class CSceneSurfaceMaterialInput {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSceneSurfaceMaterialInput@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z
    CSceneSurfaceMaterialInput(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSceneSurfaceMaterialInput@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CSceneSurfaceMaterialInput@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBitmapInterpolationMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETBITMAPINTERPOLATIONMODE@@@Z
    long ProcessSetBitmapInterpolationMode(CResourceTable *, tagMILCMD_SCENESURFACEMATERIALINPUT_SETBITMAPINTERPOLATIONMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE@@@Z
    long ProcessSetSurface(CResourceTable *, tagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetWrappingUMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGUMODE@@@Z
    long ProcessSetWrappingUMode(CResourceTable *, tagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGUMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetWrappingVMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGVMODE@@@Z
    long ProcessSetWrappingVMode(CResourceTable *, tagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGVMODE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSceneSurfaceMaterialInput@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSceneSurfaceMaterialInput@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void SetSurfaceContentRect(WindissectOpaque const &);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSceneSurfaceMaterialInput@@MEAA@XZ
    virtual ~CSceneSurfaceMaterialInput();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneFrameTick@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@_K@Z
    virtual long OnSceneFrameTick(ISpectreRenderer *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneLost@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneLost(ISpectreRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSceneReady@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@@Z
    virtual long OnSceneReady(ISpectreRenderer *);
};
