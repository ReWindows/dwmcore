#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CLegacyStereoRenderTarget {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComputeScribbleSupported@CLegacyStereoRenderTarget@@UEBA_NXZ
    virtual bool IsComputeScribbleSupported() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLegacyStereoRenderTarget@@UEAA@XZ
    virtual ~CLegacyStereoRenderTarget();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z
    CLegacyStereoRenderTarget(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ
    virtual long EnsureSwapChain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClearMode@CLegacyStereoRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ
    virtual int GetClearMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CLegacyStereoRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ
    virtual void ReleaseSwapChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z
    virtual long RenderDirtyRegion(CDrawingContext *, CComposeTop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseLegacyPresent@CLegacyStereoRenderTarget@@MEBA_NXZ
    virtual bool UseLegacyPresent() const;
};
