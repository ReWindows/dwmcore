#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class KeyframeValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z
    static void CreateConstantKeyframeValue(CExpressionValue const *, KeyframeValue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z
    static void CreateExpressionKeyframeValue(int, CKeyframeAnimation *, unsigned int, KeyframeValue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z
    static void CreateStartingValueKeyframeValue(int, CKeyframeAnimation *, KeyframeValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z
    long GetValue(CExpressionValueStack *, CExpressionValue *) const;
};
