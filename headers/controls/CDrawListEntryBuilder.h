#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 20 member(s).
class CDrawListEntryBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z
    void Begin(DrawListEntryBuilderSetupParams const &, CRenderingEffect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z
    static long BuildPrimitiveFromReconstructableDrawList(CReconstructableDrawListEntry const *, CDrawListPrimitive * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawListEntryBuilder@@QEAA@XZ
    CDrawListEntryBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CDrawListEntryBuilder@@QEAAJXZ
    long End();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z
    long Insert(PrimitiveGeometryDesc const &, PrimitiveVertexAttributesDesc const *, D2D_MATRIX_3X2_F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IAEBV?$span@$$CBH$0?0@gsl@@@Z
    long Insert(PrimitiveVertexAttributesDesc const &, D2D_POINT_3F const *, D2D_POINT_2F const *, unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z
    long Render(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CDrawListEntryBuilder@@QEAAXXZ
    void Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawListEntryBuilder@@QEAA@XZ
    ~CDrawListEntryBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z
    long AppendCpuClipAntialiasEntry(WindissectOpaque const &, PrimitiveVertexAttributesDesc const *, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z
    void AppendHWGeometry(WindissectOpaque const &, PrimitiveVertexAttributesDesc const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z
    long AppendHWPrimitive(PrimitiveGeometryDesc const &, PrimitiveVertexAttributesDesc const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z
    long AppendReconstructableEntry(D2D_RECT_F const &, int, bool, bool, PrimitiveVertexAttributesDesc const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z
    void ComputeColorAndUV(PrimitiveVertexAttributesDesc const *, WindissectOpaque, WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z
    long ExtractBuiltHWPrimitiveEntry(unsigned int, CPrimitiveColor *, _D3DCOLORVALUE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z
    long InsertHW(PrimitiveGeometryDesc const &, PrimitiveVertexAttributesDesc const *, WindissectOpaque const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z
    long InsertWARP(PrimitiveGeometryDesc const &, PrimitiveVertexAttributesDesc const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z
    long InsertWorker(PrimitiveGeometryDesc const &, PrimitiveVertexAttributesDesc const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z
    long PartitionPrimitive(unsigned int, D2D_RECT_F const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z
    static bool PartitionPrimitiveWithRoundedRectangleClip(unsigned int, D2D_RECT_F const &, int, CRoundedRectangleGeometryData const &, WindissectOpaque *);
};
