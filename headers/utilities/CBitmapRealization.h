#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 29 member(s).
class CBitmapRealization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z
    virtual void AddDirtyRegion(CRegion const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapRealization@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferAttributes@CBitmapRealization@@UEBAXPEAUREMOTE_COMPSURFACE_ATTRIBUTES@@@Z
    virtual void GetBufferAttributes(REMOTE_COMPSURFACE_ATTRIBUTES *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CBitmapRealization@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CBitmapRealization@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullDirty@CBitmapRealization@@UEAAXXZ
    virtual void MarkFullDirty();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RecordUse(CDrawingContext *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapRealization@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapRealization@@UEAA@XZ
    virtual ~CBitmapRealization();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z
    CBitmapRealization(int, _LUID, CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, CDecodeBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z
    static DisplayId CalcDisplayRestriction(bool, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcImageTransform@CBitmapRealization@@IEBA_NPEAVCMILMatrix@@@Z
    bool CalcImageTransform(CMILMatrix *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque const & CalcSourceRect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotation@CBitmapRealization@@MEBA?AW4DXGI_MODE_ROTATION@@XZ
    virtual int GetRotation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool GetScaledLetterboxingMargins(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextureSize@CBitmapRealization@@MEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetTextureSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z
    void InvalidateDecodeBitmap(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidUseAsSwapChain@CBitmapRealization@@MEBA_NXZ
    virtual bool IsValidUseAsSwapChain() const;
};
