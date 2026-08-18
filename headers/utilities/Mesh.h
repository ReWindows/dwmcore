#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class Mesh {
public:
    class VertexAAOffsetsResource;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcEdgeDirections@Mesh@@SAXPEBUD2D_POINT_2F@@_KPEAUVertexAAOffsetDesc@1@M@Z
    static void CalcEdgeDirections(D2D_POINT_2F const *, uint64_t, WindissectOpaque *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z
    static void CalcGeometryCounts(WindissectOpaque const &, uint64_t *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z
    static void CalcVertexAAOffsets(WindissectOpaque const &, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z
    static void GenerateGeometry(WindissectOpaque const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVertexAAOffsetsForAntialiasRectangle@Mesh@@SA?AV?$span@$$CBUVertexAAOffsetDesc@Mesh@@$0?0@gsl@@XZ
    static WindissectOpaque GetVertexAAOffsetsForAntialiasRectangle();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z
    static void GenerateGeometryForRectangle(WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z
    static void GenerateGeometryWorker(WindissectOpaque const &, WindissectOpaque *);
};
