#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 28 member(s).
class CRenderData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRenderData@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSinglePrimitive@CRenderData@@UEBA_NXZ
    virtual bool HasSinglePrimitive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CRenderData@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyDrawing@CRenderData@@UEBA_NXZ
    virtual bool IsEmptyDrawing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CRenderData@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_RENDERDATA const *, void const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRenderData@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRenderData@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderData@@IEAA@PEAVCComposition@@@Z
    CRenderData(CComposition *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderData@@MEAA@XZ
    virtual ~CRenderData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcBounds@CRenderData@@AEAAJXZ
    long CalcBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPrimitives@CRenderData@@AEAAJXZ
    long CheckPrimitives();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyRenderData@CRenderData@@AEAAXXZ
    void DestroyRenderData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z
    long Draw(IDrawingContext *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z
    long DrawCommandAsLegacy(IDrawingContext *, int, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z
    static long DrawImageResource_FillMode(CDrawingContext *, CDrawListEntryBuilder *, CImageSource *, D2D_RECT_F const *, D2D_RECT_F const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImageResource_TileMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@MAEBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    static long DrawImageResource_TileMode(CDrawingContext *, CDrawListEntryBuilder *, CImageSource *, float, D2D_POINT_2F const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect@@@Z
    static long DrawMesh2D(CDrawListEntryBuilder *, CMeshGeometry2D const *, CRenderingEffect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawSolidColorRectangle@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z
    static long DrawSolidColorRectangle(CDrawingContext *, CDrawListEntryBuilder *, D2D_RECT_F const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z
    static long FlushDrawListCache(CDrawingContext *, CDrawListCache *, CDrawListEntryBuilder *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z
    long GetHandles(CResourceTable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z
    long TryDrawCommandAsDrawList(CDrawingContext *, CDrawListCache *, CDrawListEntryBuilder *, unsigned int, WindissectOpaque, bool *);
};
