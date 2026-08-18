#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CGeometry2DGroup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGeometry2DGroup@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometryBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z
    virtual void GetGeometryBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexCount@CGeometry2DGroup@@UEAAIXZ
    virtual unsigned int GetIndexCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CGeometry2DGroup@@UEAAPEAVCResource@@XZ
    virtual CResource * GetResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVertexCount@CGeometry2DGroup@@UEAAIXZ
    virtual unsigned int GetVertexCount();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGeometry2DGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGeometry2DGroup@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGeometry2DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z
    CGeometry2DGroup(CComposition *, CChannelContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndicesCore@CGeometry2DGroup@@MEAAJIPEAII@Z
    virtual long GetIndicesCore(unsigned int, unsigned int *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticesCore@CGeometry2DGroup@@MEAAJPEAUMilVertexXYZDUV2@@I@Z
    virtual long GetVerticesCore(MilVertexXYZDUV2*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CGeometry2DGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGeometry2DGroup@@MEAA@XZ
    virtual ~CGeometry2DGroup();
};
