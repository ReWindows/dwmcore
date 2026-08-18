#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CSuperWetSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z
    long EnsureVailPerFrameDataHostReaderQueue(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBeginStroke@CSuperWetSource@@UEAA_NXZ
    virtual bool IsBeginStroke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessVailPerFrameDataBuffer@CSuperWetSource@@QEAAJPEAVCCrossContainerGuestReadWriteSharedSection@@II@Z
    long ProcessVailPerFrameDataBuffer(CCrossContainerGuestReadWriteSharedSection *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z
    long SendMessageToHostForCreation(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z
    long SendMessageToHostForDestruction(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSuperWetSource@@UEAA@XZ
    virtual ~CSuperWetSource();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z
    CSuperWetSource(CComposition *);
};
