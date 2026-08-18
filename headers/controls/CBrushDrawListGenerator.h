#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CBrushDrawListGenerator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z
    CBrushDrawListGenerator(CDrawingContext *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z
    CBrushDrawListGenerator(CDrawingContext *, D2D_SIZE_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z
    long GenerateDrawList(WindissectOpaque const &, CDrawListEntryBuilder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z
    long GenerateIntermediateSurfaceBrush(WindissectOpaque const &, CSurfaceDrawListBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CBrushDrawListGenerator@@QEAAXXZ
    void Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrushDrawListGenerator@@QEAA@XZ
    ~CBrushDrawListGenerator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z
    static long ComputeBrushClamp(WindissectOpaque, unsigned long, Matrix3x3const &, CShape * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z
    long GenerateDrawListPrimitive(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z
    static long GenerateDrawListWorker(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z
    static void ProcessBrushClampEdges_Rectangle(WindissectOpaque, D2D_RECT_F const &, int *);
};
