#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CTrimPathOperation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTrimPathOperation@@QEAA@XZ
    CTrimPathOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z
    long Trim(CPathData const *, float, float, float, CPathData * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z
    void AppendSegment(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z
    bool InterpolateBezier(float, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z
    WindissectOpaque * InterpolateSegment(WindissectOpaque const &, float, float, D2D_POINT_2F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z
    bool ProcessSegment(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ
    bool ShouldSplitCurrentSegment() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z
    void SplitSegment(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z
    void TrimToEndAt(WindissectOpaque const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z
    void TrimToStartAt(WindissectOpaque const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z
    void UpdateCurrentEndPoint(WindissectOpaque const &);
};
