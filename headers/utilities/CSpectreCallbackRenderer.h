#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CSpectreCallbackRenderer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSpectreCallbackRenderer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@PEAPEAV1@@Z
    static long Create(ISpectreWorld *, D2D_MATRIX_4X4_F const &, D2D_VECTOR_3F const &, float, float, WindissectOpaque, CSpectreCallbackRenderer * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSpectreCallbackRenderer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSpectreCallbackRenderer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CSpectreCallbackRenderer@@UEAAJXZ
    virtual long Render();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSpectreCallbackRenderer@@UEAA@XZ
    virtual ~CSpectreCallbackRenderer();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@@Z
    CSpectreCallbackRenderer(ISpectreWorld *, D2D_MATRIX_4X4_F const &, D2D_VECTOR_3F const &, float, float, WindissectOpaque);
};
