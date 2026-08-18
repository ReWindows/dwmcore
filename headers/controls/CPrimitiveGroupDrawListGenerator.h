#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CPrimitiveGroupDrawListGenerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ
    bool CanUseWarpExtension() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z
    static long Create(ID2D1PrivateCompositorBuffer *, ID2D1PrivateCompositorBuffer *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, CPrimitiveGroupDrawListGenerator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z
    long GenerateDrawList(CDrawingContext *, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ
    CRegion const * GetContentRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z
    WindissectOpaque GetIteratorForState(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z
    static bool ShouldUseTexCoordClamp(D2D_RECT_F const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ
    long RealizeBitmaps();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ
    virtual ~CPrimitiveGroupDrawListGenerator();
};
