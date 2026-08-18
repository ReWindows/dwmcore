#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
namespace DwmDbg {
class DbgString {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z
    DbgString(CMILMatrix const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z
    DbgString(D2D_RECT_F const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DbgString@DwmDbg@@QEAA@QEBDZZ
    DbgString(char const * const, ...);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DbgString@DwmDbg@@QEAA@AEBJ@Z
    DbgString(long const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DbgString@DwmDbg@@QEAA@XZ
    ~DbgString();
};
} // namespace DwmDbg
