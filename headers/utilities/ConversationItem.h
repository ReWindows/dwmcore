#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
namespace Microsoft::BamoImpl {
class ConversationItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsPrincipal@ConversationItem@BamoImpl@Microsoft@@UEAAPEAVBamoPrincipalImpl@23@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * AsPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsProxy@ConversationItem@BamoImpl@Microsoft@@UEAAPEAVBamoProxyImpl@23@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * AsProxy();
};
} // namespace Microsoft::BamoImpl
