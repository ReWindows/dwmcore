#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class CMessageConversationHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAUIDwmMessageConversationHost@@@Z
    static long Create(IMessageSession *, IDwmMessageConversationHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachClient@CMessageConversationHost@@UEAAXI@Z
    virtual void DetachClient(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@CMessageConversationHost@@UEAAXXZ
    virtual void Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushCallbackId@CMessageConversationHost@@UEAAJII@Z
    virtual long FlushCallbackId(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallSendHostNoRef@CMessageConversationHost@@UEBAPEAUIMessageCallSendHost@@W4DWMCoreCallbacks_InterfaceId@@@Z
    virtual IMessageCallSendHost * GetMessageCallSendHostNoRef(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIDFreed@CMessageConversationHost@@UEAAJIIPEAX@Z
    virtual long OnIDFreed(unsigned int, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMessage@CMessageConversationHost@@UEAAJIIPEBX0I@Z
    virtual long OnItemMessage(unsigned int, unsigned int, void const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@CMessageConversationHost@@UEAAJIIIPEAPEAX@Z
    virtual long OnPeerConnected(unsigned int, unsigned int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@CMessageConversationHost@@UEAAJIPEBX_N@Z
    virtual long OnPeerDisconnected(unsigned int, void const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPortConnectionFailed@CMessageConversationHost@@UEAAJJIII@Z
    virtual long OnPortConnectionFailed(long, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAttachClient@CMessageConversationHost@@UEAA_N_KIPEAI@Z
    virtual bool TryAttachClient(uint64_t, unsigned int, unsigned int *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMessageConversationHost@@IEAA@PEAUIMessageSession@@@Z
    CMessageConversationHost(IMessageSession *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CMessageConversationHost@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMessageConversationHost@@IEAAJXZ
    long Initialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSystemServer@CMessageConversationHost@@AEAAJPEAI@Z
    long InitializeSystemServer(unsigned int *);
};
