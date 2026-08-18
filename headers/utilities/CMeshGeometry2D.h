#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CMeshGeometry2D {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMeshGeometry2D@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z
    virtual void GetGeometryBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexCount@CMeshGeometry2D@@UEAAIXZ
    virtual unsigned int GetIndexCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ
    virtual unsigned int GetVertexCount();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMeshGeometry2D@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMeshGeometry2D@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMeshGeometry2D@@IEAA@PEAVCComposition@@@Z
    CMeshGeometry2D(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndicesCore@CMeshGeometry2D@@MEAAJIPEAII@Z
    virtual long GetIndicesCore(unsigned int, unsigned int *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z
    virtual long GetVerticesCore(MilVertexXYZDUV2*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CMeshGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
};
