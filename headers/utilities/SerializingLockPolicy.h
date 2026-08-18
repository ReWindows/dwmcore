#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
namespace XWinRT {
class SerializingLockPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z
    static WindissectOpaque Read(::XWinRT::ComLock &, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z
    static WindissectOpaque Write(::XWinRT::ComLock &, long *);
};
} // namespace XWinRT
