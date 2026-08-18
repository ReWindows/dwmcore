#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
namespace BamoImpl::dataprovider_AutoBamos {
class BamoPeerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoDataProviderProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoDataSourceProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_Microsoft_Bamo_Lib_dataprovider_AutoBamos_BamoList_uint_Proxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_Microsoft_Bamo_Lib_dataprovider_AutoBamos_BamoList_uint_Proxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendAckProxyReference@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI_N@Z
    virtual void SendAckProxyReference(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCheckProtocol@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z
    virtual void SendCheckProtocol(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendDisposeProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI_N@Z
    virtual void SendDisposeProxy(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendProxyDisposed@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendProxyDisposed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRequestDisposeProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendRequestDisposeProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSetBootstrapProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendSetBootstrapProxy(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogResumeOutboundMessages@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@EEBAXII@Z
    virtual void LogResumeOutboundMessages(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSuspendOutboundMessages@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@EEBAXII@Z
    virtual void LogSuspendOutboundMessages(unsigned int, unsigned int) const;
};
} // namespace BamoImpl::dataprovider_AutoBamos
