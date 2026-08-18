#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 21 member(s).
class BamoDataProviderProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDataProviderProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberOfReaders@BamoDataProviderProxy@@UEAAIXZ
    virtual unsigned int GetNumberOfReaders();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@BamoDataProviderProxy@@UEAAAEBU_LUID@@XZ
    virtual _LUID const & GetUniqueId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z
    virtual long OnAddDataSourceError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ
    virtual long OnAllReadersDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotify@BamoDataProviderProxy@@UEAAJ_KW4DataProviderNotificationEventArg@@@Z
    virtual long OnNotify(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z
    virtual long OnReaderConnected(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReaderDisconnected@BamoDataProviderProxy@@UEAAJ_K@Z
    virtual long OnReaderDisconnected(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z
    virtual long OnRemoveDataSourceError(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDataProviderProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDataProviderProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z
    virtual void SetNumberOfReaders(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniqueIdChanged@BamoDataProviderProxy@@MEAAJXZ
    virtual long OnUniqueIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniqueIdChanging@BamoDataProviderProxy@@MEAAJAEBU_LUID@@@Z
    virtual long OnUniqueIdChanging(_LUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDataProviderProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoDataProviderProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoDataProviderProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoDataProviderProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
