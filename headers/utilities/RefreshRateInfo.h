#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class RefreshRateInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestedVBlankDurationHns@RefreshRateInfo@@QEBAIXZ
    unsigned int GetRequestedVBlankDurationHns() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ
    uint64_t GetVBlankDuration() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefreshRateInfo@@QEAA@AEBUDXGI_OUTPUT_DWM_DESC@@@Z
    RefreshRateInfo(DXGI_OUTPUT_DWM_DESC const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefreshRateInfo@@QEAA@URational@Numerics@Foundation@Windows@@00I@Z
    RefreshRateInfo(WindissectOpaque, WindissectOpaque, WindissectOpaque, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVBlankDuration@RefreshRateInfo@@QEAA_NI_K@Z
    bool SetVBlankDuration(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@RefreshRateInfo@@QEAA_NAEBV1@@Z
    bool Update(RefreshRateInfo const &);
};
