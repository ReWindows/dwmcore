#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CCaptureController {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCaptureController@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z
    void AddRenderTarget(CCaptureRenderTarget *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCaptureController@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCaptureController@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z
    void RemoveRenderTarget(CCaptureRenderTarget *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentSizeChanged@CCaptureController@@IEAAXXZ
    void OnContentSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ
    void OnDefaultSDRBoostChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootVisualChanged@CCaptureController@@IEAAXXZ
    void OnRootVisualChanged();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCaptureController@@EEAA@XZ
    virtual ~CCaptureController();
};
