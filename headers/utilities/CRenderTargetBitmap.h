#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 44 member(s).
class CRenderTargetBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z
    virtual void AddDirtyRegion(CRegion const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRenderTargetBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z
    static long Create(IDeviceTextureTarget *, IRenderTargetBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CRenderTargetBitmap@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z
    virtual long GetBits(tagRECT const &, IBitmapDest *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmapTarget(ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTarget@CRenderTargetBitmap@@UEAAPEAVIDeviceTextureTarget@@XZ
    virtual IDeviceTextureTarget * GetDeviceTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CRenderTargetBitmap@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ
    virtual RenderTargetInfo GetRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CRenderTargetBitmap@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryResource@CRenderTargetBitmap@@UEBA_NXZ
    virtual bool IsPrimaryResource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CRenderTargetBitmap@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CRenderTargetBitmap@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ
    virtual void MarkFullDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRenderTargetBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RecordUse(CDrawingContext *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRenderTargetBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual void SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z
    virtual void SetDisplayId(DisplayId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z
    virtual void SetSDRBoost(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z
    virtual long VideoProcessorBlt(ID3D11Texture2D *, unsigned int, int, tagRECT const &, int, DXGI_HDR_METADATA_HDR10*, tagRECT const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderTargetBitmap@@IEAA@_N@Z
    CRenderTargetBitmap(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z
    void Initialize(IDeviceTextureTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ
    void ReleaseDeviceTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ
    void ResetBitmapCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z
    long ValidateRenderTargetInfo(RenderTargetInfo const &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderTargetBitmap@@MEAA@XZ
    virtual ~CRenderTargetBitmap();
};
