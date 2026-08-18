#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
namespace gsl {
class details {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?default_terminate_handler@details@gsl@@YAXXZ
    void default_terminate_handler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?handler@?1??get_terminate_handler@details@gsl@@YAAEAP6AXXZXZ@4P6AXXZEA
    WindissectOpaque *get_terminate_handler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?terminate@details@gsl@@YAXXZ
    void terminate();
};
} // namespace gsl
