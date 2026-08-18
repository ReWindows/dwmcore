#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 1 member(s).
class BamoImpl {
public:
    class BamoDataProviderProxyImpl;
    class BamoDataProviderRegistrarPrincipalImpl;
    class BamoDataProviderRegistrarStubImpl;
    class BamoDataSourceProxyImpl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDataProviderProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z
    void CreateDataProviderProxy(WindissectOpaque *, ::dataprovider_AutoBamos::BamoPeer *, ::Microsoft::Bamo::BamoProxy * *);
};
