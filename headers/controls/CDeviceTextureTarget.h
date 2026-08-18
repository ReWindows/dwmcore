#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 69 member(s).
class CDeviceTextureTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDeviceTextureTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z
    static long Create(CD2DResourceManager *, ID3D11Texture2D *, D3D11_TEXTURE2D_DESC const &, D2D1_BITMAP_PROPERTIES1const &, int, DisplayId, float, bool, IDeviceTextureTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z
    virtual long CreateSubResourceTextureTarget(unsigned int, IDeviceTextureTarget * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DebugIsActive@CDeviceTextureTarget@@UEBA_NXZ
    virtual bool DebugIsActive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DebugMarkActive@CDeviceTextureTarget@@UEAAX_N@Z
    virtual void DebugMarkActive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceSetDisplayTarget@CDeviceTextureTarget@@UEAAX_N@Z
    virtual void ForceSetDisplayTarget(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceSetHardwareProtection@CDeviceTextureTarget@@UEAAX_N@Z
    virtual void ForceSetHardwareProtection(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ
    virtual RenderTargetInfo GetRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetView@CDeviceTextureTarget@@UEBAPEAUID3D11RenderTargetView@@XZ
    virtual ID3D11RenderTargetView * GetRenderTargetView() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShaderResourceView@CDeviceTextureTarget@@UEAAPEAUID3D11ShaderResourceView@@XZ
    virtual ID3D11ShaderResourceView * GetShaderResourceView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTexture2D@CDeviceTextureTarget@@UEAAPEAUID3D11Texture2D@@XZ
    virtual ID3D11Texture2D * GetTexture2D();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlackedOutForMonitor@CDeviceTextureTarget@@UEBA_NXZ
    virtual bool IsBlackedOutForMonitor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ
    virtual bool IsBlackedOutForReadback() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDisplayTarget@CDeviceTextureTarget@@UEBA_NXZ
    virtual bool IsDisplayTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIntermediate@CDeviceTextureTarget@@UEBA_NXZ
    virtual bool IsIntermediate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CDeviceTextureTarget@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDeviceTextureTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CDeviceTextureTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlackedOutForMonitor@CDeviceTextureTarget@@UEAAX_N@Z
    virtual void SetBlackedOutForMonitor(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlackedOutForReadback@CDeviceTextureTarget@@UEAAX_N@Z
    virtual void SetBlackedOutForReadback(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CDeviceTextureTarget@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@CDeviceTextureTarget@@UEAAXVDisplayId@@@Z
    virtual void SetDisplayId(DisplayId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsIntermediate@CDeviceTextureTarget@@UEAAX_N@Z
    virtual void SetIsIntermediate(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProtected@CDeviceTextureTarget@@UEAAX_N@Z
    virtual void SetProtected(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CDeviceTextureTarget@@UEAAXM@Z
    virtual void SetSDRBoost(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStereoContext@CDeviceTextureTarget@@UEAAXW4StereoContext@@@Z
    virtual void SetStereoContext(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceTextureTarget@@UEAA@XZ
    virtual ~CDeviceTextureTarget();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NI@Z
    CDeviceTextureTarget(CD2DResourceManager *, ID3D11Texture2D *, D3D11_TEXTURE2D_DESC const &, D2D1_BITMAP_PROPERTIES1const &, int, DisplayId, float, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDeviceTextureTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDeviceTextureTarget@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DResources@CDeviceTextureTarget@@MEAAXXZ
    virtual void ReleaseD2DResources();
};
