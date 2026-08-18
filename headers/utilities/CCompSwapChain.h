#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 28 member(s).
class CCompSwapChain {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompSwapChain@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ
    virtual long CopyFrontToBackBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CCompSwapChain@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackBuffer@CCompSwapChain@@UEBAPEAVIDeviceTarget@@XZ
    virtual IDeviceTarget * GetBackBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferCount@CCompSwapChain@@UEBAIXZ
    virtual unsigned int GetBufferCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CCompSwapChain@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CCompSwapChain@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CCompSwapChain@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z
    virtual long GetPresentStatistics(DXGI_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CCompSwapChain@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryResource@CCompSwapChain@@UEBA_NXZ
    virtual bool IsPrimaryResource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CCompSwapChain@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z
    virtual void NotifyRenderedRect(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CCompSwapChain@@QEAAJII@Z
    long Present(unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompSwapChain@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CCompSwapChain@@QEAAXW4DXGI_ALPHA_MODE@@@Z
    void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z
    long SetSize(D2D_SIZE_U const &, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CCompSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCompSwapChain@@IEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ
    long ResetBackBuffer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompSwapChain@@MEAA@XZ
    virtual ~CCompSwapChain();
};
