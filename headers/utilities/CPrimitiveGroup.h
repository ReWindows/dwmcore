#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 45 member(s).
class CPrimitiveGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPrimitiveGroup@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long GenerateDrawList(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegion@CPrimitiveGroup@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z
    virtual bool GetDirtyRegion(D2D_SIZE_F const &, CRectanglesShape *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAntialiasedContent@CPrimitiveGroup@@UEBA_NXZ
    virtual bool HasAntialiasedContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSinglePrimitive@CPrimitiveGroup@@UEBA_NXZ
    virtual bool HasSinglePrimitive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ
    virtual bool IsEmptyDrawing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z
    long ProcessAddColorResources(CResourceTable *, tagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z
    long ProcessAddPrimitives(CResourceTable *, tagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z
    long ProcessAddSurfaceResources(CResourceTable *, tagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z
    long ProcessClearColorResources(CResourceTable *, tagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z
    long ProcessClearSurfaceResources(CResourceTable *, tagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z
    long ProcessSetBoundsRect(CResourceTable *, tagMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z
    long ProcessSetDirtyRect(CResourceTable *, tagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT const *, void const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPrimitiveGroup@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z
    CPrimitiveGroup(CComposition *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrimitiveGroup@@MEAA@XZ
    virtual ~CPrimitiveGroup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z
    static void AddFilledPolygonToD2DSink(ID2D1GeometrySink *, D2D_POINT_2F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ
    long BuildHeatMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ
    void ClearPrimitiveContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ
    long CreateHitTestRegions() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z
    long CreateNewGenerator(CPrimitiveGroupDrawListGenerator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z
    long CreateNewGeneratorForHeatMap(CPrimitiveGroupDrawListGenerator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ
    long EnsureDrawListGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ
    long EnsureHitTestRegions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool GetLargestOpaqueRect(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ
    void ProcessHeatMapChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ
    void ReleaseColorResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ
    void ReleaseHeatMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z
    void ReleasePrimitiveCaches(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ
    void ReleaseSurfaceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ
    void ResolveSharedMemoryBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceInvalidBatches@CPrimitiveGroup@@AEBAXPEBX_K@Z
    void TraceInvalidBatches(void const *, uint64_t) const;
};
