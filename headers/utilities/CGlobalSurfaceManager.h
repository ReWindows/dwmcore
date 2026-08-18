#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 18 member(s).
class CGlobalSurfaceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z
    virtual long AdvanceFrame(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnyOutstandingCaptures@CGlobalSurfaceManager@@UEBA_NXZ
    virtual bool AnyOutstandingCaptures() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z
    static long Create(void * *, void * *, CSurfaceManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRetryDeviceBitmaps@CGlobalSurfaceManager@@UEBA_NXZ
    virtual bool HasRetryDeviceBitmaps() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCaptureBitsResponsePending@CGlobalSurfaceManager@@UEBA_NXZ
    virtual bool IsCaptureBitsResponsePending() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ
    virtual long ProcessSurfaceUpdates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalStartNowEvent@CGlobalSurfaceManager@@UEBA_NXZ
    virtual bool SignalStartNowEvent() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalSurfaceManager@@IEAA@XZ
    CGlobalSurfaceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z
    long Initialize(void * *, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlobalSurfaceManager@@MEAA@XZ
    virtual ~CGlobalSurfaceManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ
    long EnsureAdapterInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ
    long ProcessKernelTokens();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ
    long ProcessLegacyTokens();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TokenThreadMain@CGlobalSurfaceManager@@CAKPEAX@Z
    static unsigned long s_TokenThreadMain(void *);
};
