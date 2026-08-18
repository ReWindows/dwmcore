#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
namespace dataprovider_AutoBamos {
class BamoPeer {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPeer@dataprovider_AutoBamos@@EEBAPEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BaseBamoPeerImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetBootstrapProxy@BamoPeer@dataprovider_AutoBamos@@EEBAXI@Z
    virtual void LogSetBootstrapProxy(unsigned int) const;
};
} // namespace dataprovider_AutoBamos
