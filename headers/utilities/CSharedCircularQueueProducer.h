#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CSharedCircularQueueProducer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSharedCircularQueueProducer@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@@Z
    static long Create(WindissectOpaque, unsigned int, CSharedCircularQueueProducer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enqueue@CSharedCircularQueueProducer@@QEAAXV?$span@$$CBE$0?0@gsl@@@Z
    void Enqueue(WindissectOpaque);
};
