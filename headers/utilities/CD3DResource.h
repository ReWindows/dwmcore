#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CD3DResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceNotifier@CD3DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z
    virtual void AddResourceNotifier(IDeviceResourceNotify *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CD3DResource@@UEBA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CD3DResource@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueDeviceResource@CD3DResource@@UEBAPEBVIDeviceResource@@XZ
    virtual IDeviceResource const * GetUniqueDeviceResource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryResource@CD3DResource@@UEBA_NXZ
    virtual bool IsPrimaryResource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CD3DResource@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z
    virtual void RemoveResourceNotifier(IDeviceResourceNotify const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD3DResource@@IEAA@_N@Z
    CD3DResource(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CD3DResource@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CD3DResource@@IEAAXXZ
    void Invalidate();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3DResource@@MEAA@XZ
    virtual ~CD3DResource();
};
