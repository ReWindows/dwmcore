#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
namespace Microsoft::Bamo::Lib::dataprovider_AutoBamos {
class BamoList_uint_Proxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ
    ::dataprovider_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@EEBAPEAVBamoProxyImpl@BamoImpl@5@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Microsoft::Bamo::Lib::dataprovider_AutoBamos
