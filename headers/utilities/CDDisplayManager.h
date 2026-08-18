#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CDDisplayManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDDisplayDeviceAndTarget@CDDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDisplayDevice@Core@Display@Devices@Windows@@PEAPEAUIDisplayTarget@4567@@Z
    long CreateDDisplayDeviceAndTarget(_LUID, unsigned int, ::Windows::Devices::Display::Core::IDisplayDevice * *, ::Windows::Devices::Display::Core::IDisplayTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z
    long CreateDDisplaySwapchainForSource(CD3DDevice *, RenderTargetInfo const &, unsigned int, PixelFormatInfo const &, D2D_SIZE_U const &, unsigned int, void *, CDDisplaySwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetadata@Core@Display@Devices@Windows@@@Z
    long CreateHdrMetadata(int, void const *, ::Windows::Devices::Display::Core::IDisplayHdrMetadata * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimaryDescription@CDDisplayManager@@QEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z
    long CreatePrimaryDescription(PixelFormatInfo const &, D2D_SIZE_U const &, unsigned int, ::Windows::Devices::Display::Core::IDisplayPrimaryDescription * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@PEAPEAVCDDisplaySwapChainBuffer@@@Z
    long CreateSwapChainBuffer(CD3DDevice *, D2D_SIZE_U const &, unsigned int, int, int, DisplayId, float, DDisplayTargetResources const &, ::Windows::Devices::Display::Core::IDisplayPrimaryDescription *, CDDisplaySwapChainBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ
    long EnsureDDisplayManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z
    long GetExistingInteropDevice(_LUID, IDisplayDeviceInterop * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAVRefreshRateInfo@@@Z
    long GetRateInfoForTarget(::Windows::Devices::Display::Core::IDisplayTarget *, RefreshRateInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z
    void NotifyRealizationBitmapReleased(::Windows::Devices::Display::Core::IDisplaySurface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDDisplayManager@@QEAA@XZ
    ~CDDisplayManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z
    long CreateTaskPool(CD3DDevice *, DDisplayTargetResources const &, DDisplayTaskPoolResources *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDevice@CDDisplayManager@@AEAAJAEBU_LUID@@PEAUIDisplayAdapter@Core@Display@Devices@Windows@@PEAPEAUIDisplayDevice@4567@@Z
    long EnsureDevice(_LUID const &, ::Windows::Devices::Display::Core::IDisplayAdapter *, ::Windows::Devices::Display::Core::IDisplayDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z
    long GetDisplayDeviceAndTarget(_LUID, void *, unsigned int, DDisplayTargetResources *);
};
