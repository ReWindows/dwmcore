#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 20 member(s).
namespace BamoImpl {
class BamoDataSourceProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoDataSourceProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFirstDataRead@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_K@Z
    long OnFirstDataRead(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoDataSourceProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z
    long OnSetPropertyValueError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoDataSourceProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoDataSourceProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBooleanValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI_N@Z
    long SetBooleanValue(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z
    long SetColorValue(unsigned int, float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z
    long SetQuaternionValue(unsigned int, float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIM@Z
    long SetScalarValue(unsigned int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector2Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMM@Z
    long SetVector2Value(unsigned int, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z
    long SetVector3Value(unsigned int, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z
    long SetVector4Value(unsigned int, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRestrictToProcessIds@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateRestrictToProcessIds(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z
    long UpdateUniqueId(bool, _LUID const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoDataSourceProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoDataSourceProxyImpl();
};
} // namespace BamoImpl
