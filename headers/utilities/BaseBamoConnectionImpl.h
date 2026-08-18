#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 30 member(s).
namespace Microsoft::BamoImpl {
class BaseBamoConnectionImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AckProxyReference@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z
    long AckProxyReference(::Microsoft::BamoImpl::BaseBamoPeerImpl *, unsigned int, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ
    bool CurrentThreadHasLock() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ
    void DisableLockDrops();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z
    long DisposeProxy(::Microsoft::BamoImpl::BaseBamoPeerImpl *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ
    void EnableLockDrops();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ
    void EnterLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z
    void FreePrincipalItem(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z
    long Join(IMessageSession *, IMessagePort *, MsgScopeID, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJXZ
    long Leave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ
    void LeaveLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z
    long OnPeerConnected(unsigned int, unsigned int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z
    long OnPeerDisconnected(unsigned int, void *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z
    long ProxyDisposed(::Microsoft::BamoImpl::BaseBamoPeerImpl *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z
    long RequestDisposeProxy(::Microsoft::BamoImpl::BaseBamoPeerImpl *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z
    long SetBootstrapProxy(::Microsoft::BamoImpl::BaseBamoPeerImpl *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z
    long TrackError(long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z
    ::Microsoft::BamoImpl::ConversationItem * TryGetItem(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z
    ::Microsoft::BamoImpl::BamoPrincipalImpl * TryGetPrincipal(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z
    ::Microsoft::BamoImpl::BamoProxyImpl * TryGetProxy(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ
    void VerifyLockHeldIfOffThread() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z
    BaseBamoConnectionImpl(::Microsoft::Bamo::BaseBamoConnection *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ
    virtual ~BaseBamoConnectionImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectProxyAtShutdown@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAXIIPEBX@Z
    static long DisconnectProxyAtShutdown(void *, unsigned int, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z
    static long FreePrincipalItemsCallback(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z
    bool IsPendingRemovalFromItemTable(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z
    void RemoveItemIdFromConversation(unsigned int);
};
} // namespace Microsoft::BamoImpl
