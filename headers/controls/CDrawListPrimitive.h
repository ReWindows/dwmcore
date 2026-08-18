#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CDrawListPrimitive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z
    static long Create(WindissectOpaque const &, WindissectOpaque const &, unsigned int, WindissectOpaque, D2D_VECTOR_2F const &, bool, CDrawListPrimitive * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z
    void Initialize(WindissectOpaque const &, WindissectOpaque const &, unsigned int, unsigned short const *, unsigned int, D2D_VECTOR_2F const &, bool);
};
