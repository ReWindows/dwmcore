#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CSharedCircularQueue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSharedCircularQueue@@SAJV?$span@$$CBE$0?0@gsl@@IPEAPEAV1@@Z
    static long Create(WindissectOpaque, unsigned int, CSharedCircularQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopAll@CSharedCircularQueue@@QEBAXV?$span@E$0?0@gsl@@IPEAI1@Z
    void PopAll(WindissectOpaque, unsigned int, unsigned int *, unsigned int *) const;
};
