#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CScanPipeline {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z
    long InitializeForFormatConversion(PixelFormatInfo const &, PixelFormatInfo const &, unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z
    void Run(void *, void const *, unsigned int, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScanPipeline@@UEAA@XZ
    virtual ~CScanPipeline();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPipeline@CScanPipeline@@MEAAXXZ
    virtual void ResetPipeline();
};
