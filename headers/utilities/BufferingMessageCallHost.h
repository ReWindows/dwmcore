#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
namespace Microsoft::BamoImpl {
class BufferingMessageCallHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIIPEAPEAX@Z
    virtual long AllocateBuffer(uint64_t *, unsigned int, unsigned int, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z
    BufferingMessageCallHost(IMessageCallSendHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z
    virtual long CancelBuffer(uint64_t *, unsigned int, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalid@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEAUMsgCallState@@@Z
    virtual long NotifyInvalid(MsgCallState *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z
    virtual long SubmitBuffer(uint64_t *, unsigned int, void *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ
    virtual ~BufferingMessageCallHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BufferingMessageCallHost@BamoImpl@Microsoft@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z
    bool TryFindBufferStream(uint64_t, ::Microsoft::BamoImpl::BufferStream * *);
};
} // namespace Microsoft::BamoImpl
