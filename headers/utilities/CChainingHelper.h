#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CChainingHelper {
public:
    class RequestedConfigForAxis;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CChainingHelper@@QEAA@PEAVCInteraction@@@Z
    CChainingHelper(CInteraction *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z
    void ChainToParent(int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ
    void ClearAllConfigurations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z
    void RestoreSupportedInteractionsWithBoundaries(int, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInertia@CChainingHelper@@QEAAXW4ScrollAxis@@@Z
    void StartInertia(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ
    void UpdateConfigurationIfDirty();
};
