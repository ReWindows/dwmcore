#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 30 member(s).
class CGDIBitmapRealization {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGDIBitmapRealization@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z
    static long Create(void *, _LUID, IGDIBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CGDIBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGDIBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGDIBitmapRealization@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMargins@CGDIBitmapRealization@@UEAAXAEBU_MARGINS@@@Z
    virtual void SetMargins(_MARGINS const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z
    CGDIBitmapRealization(CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CGDIBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
