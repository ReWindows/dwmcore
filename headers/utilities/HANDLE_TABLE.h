#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class HANDLE_TABLE {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z
    long AssignEntry(unsigned int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z
    long GetNewEntry(unsigned long, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z
    long ResizeToFit(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z
    int ValidEntry(unsigned int) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@HANDLE_TABLE@@AEAAJI@Z
    long Resize(unsigned int);
};
