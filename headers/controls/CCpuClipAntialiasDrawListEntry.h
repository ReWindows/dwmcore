#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CCpuClipAntialiasDrawListEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z
    void FillLightingData(WindissectOpaque const &, bool, CMILMatrix const &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillVertexUVs@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@AEBV?$StridedSpan@UUVxN@CCpuClipAntialiasSink@@@@_K@Z
    void FillVertexUVs(WindissectOpaque const &, WindissectOpaque const &, uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CCpuClipAntialiasDrawListEntry@@UEBA?AW4DrawListEntryType@@XZ
    virtual int GetType() const;
};
