#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CVirtualMonitorCaptureRenderTarget {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CVirtualMonitorCaptureRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CVirtualMonitorCaptureRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z
    long ProcessBindData(CResourceTable *, tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBoundsInMonitor@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BOUNDSINMONITOR@@@Z
    long ProcessBoundsInMonitor(CResourceTable *, tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BOUNDSINMONITOR const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z
    CVirtualMonitorCaptureRenderTarget(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z
    long CreateTextures(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransformAndTreeBounds@CVirtualMonitorCaptureRenderTarget@@MEAAXXZ
    virtual void UpdateTransformAndTreeBounds();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ
    virtual ~CVirtualMonitorCaptureRenderTarget();
};
