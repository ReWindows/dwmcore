#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
namespace CCachedVisualImage {
class CCachedTarget {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z
    CCachedTarget(CCachedVisualImage *, IRenderTargetBitmap *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ
    RenderTargetInfo GetRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ
    bool IsHDR() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ
    bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ
    bool IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ
    void MarkDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z
    long Update(WindissectOpaque const &, int, RenderTargetInfo const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCachedTarget@CCachedVisualImage@@QEAA@XZ
    ~CCachedTarget();
};
} // namespace CCachedVisualImage
