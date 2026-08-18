#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class DataProviderProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataProviderProxy@@QEAA@XZ
    DataProviderProxy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z
    BamoDataSourceProxy * GetDataSource(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z
    long RemoveSourceEntry(BamoDataSourceProxy *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataProviderProxy@@UEAA@XZ
    virtual ~DataProviderProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z
    virtual long AddDataSource(BamoDataSourceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@DataProviderProxy@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z
    virtual long RemoveDataSource(BamoDataSourceProxy *);
};
