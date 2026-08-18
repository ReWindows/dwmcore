#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CGradientSource {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z
    bool FindExistingGradient(CD3DDevice *, bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z
    long Generate(CD3DDevice *, WindissectOpaque const &, WindissectOpaque, bool, bool, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ
    virtual void NotifyAtlasEntryInvalidated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CGradientSource@@MEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGradientSource@@MEAA@XZ
    virtual ~CGradientSource();
};
