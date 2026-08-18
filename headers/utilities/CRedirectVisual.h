#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CRedirectVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBounds@CRedirectVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetContentBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonEmptyContent@CRedirectVisual@@UEBA_NXZ
    virtual bool HasNonEmptyContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z
    long ProcessSetRedirectedVisual(CResourceTable *, tagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CRedirectVisual@@MEAAJPEAVCContent@@@Z
    virtual long SetContent(CContent *);
};
