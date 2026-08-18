#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CInputManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CInputManager@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInputThreadMmcss@CInputManager@@UEAAJXZ
    virtual long ResetInputThreadMmcss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z
    long UpdateEdgyInput(EdgyCompositionConfigurationUpdateEx const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z
    static int s_HitTestRequest(tagDITCALLBACKSTRUCT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z
    static int s_HoverHittestRequest(_HOVER_INPUT_INFO const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputManager@@IEAA@PEAVCComposition@@@Z
    CInputManager(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ
    long EnsureRenderThreadCanReceiveInputThreadMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@IEAAJXZ
    long EnsureRenderThreadCanSendInputThreadMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z
    static long s_OnReceiveInputThreadMessage(void *, void const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputManager@@MEAA@XZ
    virtual ~CInputManager();
};
