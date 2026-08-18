#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 26 member(s).
class CGDISectionBitmapRealization {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGDISectionBitmapRealization@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z
    static long Create(void *, D2D_SIZE_U const &, unsigned int, int, int, unsigned char * *, IGDIBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CGDISectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGDISectionBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGDISectionBitmapRealization@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMargins@CGDISectionBitmapRealization@@UEAAXAEBU_MARGINS@@@Z
    virtual void SetMargins(_MARGINS const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z
    CGDISectionBitmapRealization(CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, CSM_SYSMEM_SECTION_INFO const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CGDISectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
