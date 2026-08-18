#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 18 member(s).
class CD3DSurface {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CD3DSurface@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z
    static long Create(CD3DResourceManager *, DWM_TEXTURE2D_DESC const &, D3D11_SUBRESOURCE_DATA *, CD3DSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z
    static long CreateViewOfTexture(CD3DResourceManager *, ID3D11Texture2D *, unsigned int *, unsigned int, CD3DSurface * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z
    long GetDXGIResource(IDXGIResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CD3DSurface@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CD3DSurface@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CD3DSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CD3DSurface@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceSize@CD3DSurface@@MEBAIXZ
    virtual unsigned int GetResourceSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CD3DSurface@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z
    long Init(CD3DResourceManager *, unsigned int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD3DResources@CD3DSurface@@MEAAXXZ
    virtual void ReleaseD3DResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3DSurface@@MEAA@XZ
    virtual ~CD3DSurface();
};
