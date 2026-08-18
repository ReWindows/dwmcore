#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CComposeTop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z
    long AddNewContent(IBitmapResource *, CShape const &, CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long FullRender(CDrawingContext *, CMILMatrix const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNewContent@CComposeTop@@QEBA_NXZ
    bool HasNewContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long NewContentRendered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long Render(CDrawingContext *, CMILMatrix const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long SubtractOverdraw(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComposeTop@@QEAA@XZ
    ~CComposeTop();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z
    long AddShapeToLifetime(CShape const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long RenderWorker(CDrawingContext *, CMILMatrix const &, CShape const &, WindissectOpaque *);
};
