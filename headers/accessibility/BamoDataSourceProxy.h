#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 18 member(s).
class BamoDataSourceProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDataSourceProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestrictToProcessIds@BamoDataSourceProxy@@UEAAPEAVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy * GetRestrictToProcessIds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ
    virtual _LUID const & GetUniqueId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFirstDataRead@BamoDataSourceProxy@@UEAAJ_K@Z
    virtual long OnFirstDataRead(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z
    virtual long OnSetPropertyValueError(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDataSourceProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDataSourceProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRestrictToProcessIdsChanged@BamoDataSourceProxy@@MEAAJXZ
    virtual long OnRestrictToProcessIdsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRestrictToProcessIdsChanging@BamoDataSourceProxy@@MEAAJPEAVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnRestrictToProcessIdsChanging(::Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniqueIdChanged@BamoDataSourceProxy@@MEAAJXZ
    virtual long OnUniqueIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniqueIdChanging@BamoDataSourceProxy@@MEAAJAEBU_LUID@@@Z
    virtual long OnUniqueIdChanging(_LUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDataSourceProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoDataSourceProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoDataSourceProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoDataSourceProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
