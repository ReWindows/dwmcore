#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CGlobalMit {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z
    static long Create(CComposition *, CGlobalMit * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCursorUpdate@CGlobalMit@@UEAAXXZ
    virtual void RequestCursorUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetMmcss@CGlobalMit@@UEAAJXZ
    virtual long ResetMmcss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_HitTestRequest@CGlobalMit@@SAHPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z
    static int s_HitTestRequest(_InputHitTestRequest *, _InputHitTestResult *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlobalMit@@UEAA@XZ
    virtual ~CGlobalMit();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z
    CGlobalMit(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMmcssTask@CGlobalMit@@MEAAJXZ
    virtual long InitializeMmcssTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CGlobalMit@@MEAAKXZ
    virtual unsigned long Run();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompletionHandler@CGlobalMit@@CAJPEAX00@Z
    static long CompletionHandler(void *, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitRunLoop@CGlobalMit@@AEAAXXZ
    void ExitRunLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCoreMessagingIocp@CGlobalMit@@CAXPEAX@Z
    static void InitializeCoreMessagingIocp(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMmcssResetEvent@CGlobalMit@@CAJPEAXK0@Z
    static long OnMmcssResetEvent(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResetEvent@CGlobalMit@@CAJPEAXK0@Z
    static long OnResetEvent(void *, unsigned long, void *);
};
