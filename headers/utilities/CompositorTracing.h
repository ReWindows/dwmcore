#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 19 member(s).
class CompositorTracing {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ
    void DwmHolographicCompositionAdd_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ
    void DwmHolographicCompositionRemove_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXIAEBU_GUID@@@Z
    void DwmHolographicDisplayAdd_(unsigned int, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z
    void DwmHolographicDisplayRemove_(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z
    void DwmHolographicDisplayUpdate_(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z
    void DwmHolographicInteropTextureAdd_(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicInteropTextureRemove_@CompositorTracing@@QEAAXI@Z
    void DwmHolographicInteropTextureRemove_(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicInteropTextureSizeChanged_@CompositorTracing@@QEAAXIII@Z
    void DwmHolographicInteropTextureSizeChanged_(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z
    void DwmHolographicSuspendRequest_(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z
    void DwmHolographicViewerAdd_(unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicViewerRemove_@CompositorTracing@@QEAAXI@Z
    void DwmHolographicViewerRemove_(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmHolographicViewerUpdate_@CompositorTracing@@QEAAXI@Z
    void DwmHolographicViewerUpdate_(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HolographicClientCreated_@CompositorTracing@@QEAAXXZ
    void HolographicClientCreated_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z
    void HolographicInteropTargetCreated_(_LUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@CompositorTracing@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@CompositorTracing@@KAPEAV1@XZ
    static CompositorTracing * Instance();
};
