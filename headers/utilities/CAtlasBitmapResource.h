#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 28 member(s).
class CAtlasBitmapResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CAtlasBitmapResource@@UEAAXAEBVCRegion@@@Z
    virtual void AddDirtyRegion(CRegion const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAtlasBitmapResource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z
    static long Create(IAtlasEntryOwner *, CD3DDevice *, CAtlasBitmapResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRenderingRealization@CAtlasBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z
    virtual long GetCurrentRenderingRealization(IBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CAtlasBitmapResource@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CAtlasBitmapResource@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CAtlasBitmapResource@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CAtlasBitmapResource@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CAtlasBitmapResource@@UEBA_NXZ
    virtual bool IsOpaque() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CAtlasBitmapResource@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWhitePixelInTopLeft@CAtlasBitmapResource@@UEBA_NXZ
    virtual bool IsWhitePixelInTopLeft() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullDirty@CAtlasBitmapResource@@UEAAXXZ
    virtual void MarkFullDirty();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAtlasBitmapResource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordUse@CAtlasBitmapResource@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RecordUse(CDrawingContext *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAtlasBitmapResource@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionMode@CAtlasBitmapResource@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void SetCompositionMode(bool, int, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z
    long Update(WindissectOpaque, bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z
    CAtlasBitmapResource(IAtlasEntryOwner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CAtlasBitmapResource@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAtlasBitmapResource@@MEAA@XZ
    virtual ~CAtlasBitmapResource();
};
