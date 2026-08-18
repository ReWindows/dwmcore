#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CCpuClipAntialiasSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z
    void CalcBoundingRect(int, WindissectOpaque const &, D2D_RECT_F *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCpuClipAntialiasSink@@SAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@PEAPEAV1@@Z
    static long Create(unsigned short, WindissectOpaque const *, CShape const *, CMILMatrix const &, CCpuClipAntialiasSink * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z
    void CreateUVData(int, WindissectOpaque const &, uint64_t, unsigned int, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAntialiasTemplateGeometry@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUTemplateGeometryDesc@1@@Z
    void GetAntialiasTemplateGeometry(int, WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCpuClipAntialiasSink@@UEAA@XZ
    virtual ~CCpuClipAntialiasSink();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCpuClipAntialiasSink@@AEAA@XZ
    CCpuClipAntialiasSink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z
    long Initialize(unsigned short, WindissectOpaque const *, CShape const *, CMILMatrix const &);
};
