#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CLegacySurfaceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z
    long AddCaptureBitsResponse(CaptureBitsResponse *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z
    long AddIntervalOneDxBltEventId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRetryDeviceBitmap@CLegacySurfaceManager@@QEAAXPEAVCGdiSpriteBitmap@@@Z
    void AddRetryDeviceBitmap(CGdiSpriteBitmap *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRetryDeviceBitmaps@CLegacySurfaceManager@@QEBA_NXZ
    bool HasRetryDeviceBitmaps() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCaptureBitsResponsePending@CLegacySurfaceManager@@QEBA_NXZ
    bool IsCaptureBitsResponsePending() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ
    long ProcessPostPresentResponseItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ
    bool ReleaseCaptureBitsResponse();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLegacySurfaceManager@@UEAA@XZ
    virtual ~CLegacySurfaceManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z
    long AddUnclaimedToken(_D3DKMT_PRESENTHISTORYTOKEN const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLegacySurfaceManager@@IEAA@XZ
    CLegacySurfaceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z
    long ProcessToken(_D3DKMT_PRESENTHISTORYTOKEN const *, unsigned int *, bool *);
};
