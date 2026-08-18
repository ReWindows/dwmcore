#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CKernelTransport {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFrame@CKernelTransport@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z
    virtual long BeginFrame(COMPOSITION_FRAME_INFO const &, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeginFrame@CKernelTransport@@UEBA_NXZ
    virtual bool CanBeginFrame() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmFrame@CKernelTransport@@UEAAJAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z
    virtual long ConfirmFrame(tagCOMPOSITION_CONFIRM_FRAME_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z
    static long Create(int, CTransport * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z
    virtual long DispatchBatches(CComposition *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkEvent@CKernelTransport@@UEAAPEAXXZ
    virtual void * GetWorkEvent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKernelTransport@@UEAA@XZ
    virtual ~CKernelTransport();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKernelTransport@@AEAA@XZ
    CKernelTransport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CKernelTransport@@AEAAJH@Z
    long Initialize(int);
};
