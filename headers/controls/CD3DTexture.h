#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CD3DTexture {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z
    long GetDXGIResource(IDXGIResource * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CD3DTexture@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DBitmaps@CD3DTexture@@QEAAXXZ
    void ReleaseD2DBitmaps();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z
    long Init(CD3DResourceManager *, ID3D11Texture2D *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z
    long InitResource(CD3DResourceManager *, ID3D11Texture2D *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3DTexture@@MEAA@XZ
    virtual ~CD3DTexture();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ
    virtual void ReleaseD3DResources();
};
