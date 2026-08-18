#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class DataSourcePropertySet {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataSourcePropertySet@@QEAA@XZ
    DataSourcePropertySet();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z
    long GetPropertyValue(unsigned int, CExpressionValue *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataSourcePropertySet@@QEAA@XZ
    ~DataSourcePropertySet();
};
