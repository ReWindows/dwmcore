#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CSpriteVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetContentBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ
    virtual bool HasAntialiasedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContent@CSpriteVisual@@UEBA_NXZ
    virtual bool HasContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ
    virtual bool HasNonEmptyContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z
    long ProcessSetBrush(CResourceTable *, tagMILCMD_SPRITEVISUAL_SETBRUSH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z
    long ProcessSetShadow(CResourceTable *, tagMILCMD_SPRITEVISUAL_SETSHADOW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z
    virtual long RenderContent(CDrawingContext *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceProperty@CSpriteVisual@@UEAAJIPEAVCResource@@@Z
    virtual long SetReferenceProperty(unsigned int, CResource *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSpriteVisual@@UEAA@XZ
    virtual ~CSpriteVisual();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ
    CDropShadow * GetDropShadow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ
    virtual bool HasSingleD2DBitmapOrPrimitiveGroupInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z
    virtual long SetContent(CContent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z
    void SetDropShadow(CDropShadow *);
};
