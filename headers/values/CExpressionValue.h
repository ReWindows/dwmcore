#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CExpressionValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z
    long ApplyMaskToValue(SubchannelMaskInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z
    void CopyFrom(CExpressionValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z
    long CopyIntoFloatArray(unsigned int, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CExpressionValue@@QEBAPEBXXZ
    void const * GetValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValue@CExpressionValue@@QEBA_NXZ
    bool HasValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z
    void SetPathValue(CPathData const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    void SetValue(int, void const *);
};
