#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 18 member(s).
class CBitmapResource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapResource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z
    static long Create(CComposition *, IBitmapRealization *, CBitmapResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z
    virtual long GetCurrentRenderingRealization(IBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CBitmapResource@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CBitmapResource@@UEBA_NXZ
    virtual bool IsOpaque() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z
    long ProcessSource(CResourceTable *, tagMILCMD_BITMAPRESOURCE_SOURCE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapResource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapResource@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionMode@CBitmapResource@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void SetCompositionMode(bool, int, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapResource@@UEAA@XZ
    virtual ~CBitmapResource();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z
    CBitmapResource(CComposition *, IBitmapRealization *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CBitmapResource@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@CBitmapResource@@IEAAJPEAUIWICBitmap@@@Z
    long SetSource(IWICBitmap *);
};
