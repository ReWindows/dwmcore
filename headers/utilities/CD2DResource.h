#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CD2DResource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CD2DResource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CD2DResource@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CD2DResource@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CD2DResource@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryResource@CD2DResource@@UEBA_NXZ
    virtual bool IsPrimaryResource() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CD2DResource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CD2DResource@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z
    CD2DResource(CD2DResourceManager *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CD2DResource@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInvalid@CD2DResource@@IEAAXXZ
    void MarkInvalid();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DResource@@MEAA@XZ
    virtual ~CD2DResource();
};
