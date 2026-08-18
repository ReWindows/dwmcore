#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 18 member(s).
namespace BamoImpl {
class BamoDataProviderProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z
    long AddDataSource(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoDataProviderProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z
    long OnAddDataSourceError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ
    long OnAllReadersDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoDataProviderProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z
    long OnNotify(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z
    long OnReaderConnected(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReaderDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z
    long OnReaderDisconnected(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z
    long OnRemoveDataSourceError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z
    long RemoveDataSource(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUniqueId@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z
    long UpdateUniqueId(bool, _LUID const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ
    void UpdateNumberOfReadersRemoteCache();
};
} // namespace BamoImpl
