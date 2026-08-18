#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CBlurredBackdropCache {
public:
    class CachedBlur;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@PEBX@Z
    bool InvalidateCachedBlur(CBackdropVisualImage const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z
    bool LookupCachedBlur(CBackdropVisualImage const *, RenderTargetInfo const &, EffectInput *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z
    void UpdateCachedBlur(CBackdropVisualImage *, void const *, EffectInput const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBlurredBackdropCache@@QEAA@XZ
    ~CBlurredBackdropCache();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z
    static bool IsUsableOnTargetWithHDRBoost(CDrawListBitmap const &, RenderTargetInfo const &, bool);
};
