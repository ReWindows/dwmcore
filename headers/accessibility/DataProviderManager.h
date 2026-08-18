#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class DataProviderManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z
    void AddReaderToReadyList(CDataSourceReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z
    void CheckAndRegisterReadyReaders(BamoDataProviderProxy *, BamoDataSourceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z
    static long Create(IMessageSession *, DataProviderManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z
    BamoDataSourceProxy * GetDataSourceProxy(uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z
    long GetPropertyValue(CDataSourceReader *, uint64_t, uint64_t, unsigned int, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostExpressionsUpdated@DataProviderManager@@QEAAXXZ
    void PostExpressionsUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z
    long RegisterDataProvider(BamoDataProviderRegistrarStub *, BamoDataProviderProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z
    long RemoveDataProvider(DataProviderProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z
    void TryNotify(CResource *, uint64_t, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRegisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@PEA_N@Z
    long TryRegisterReaderForDataSource(uint64_t, uint64_t, CDataSourceReader *, bool *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z
    DataProviderManager(IMessageSession *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DataProviderManager@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeServer@DataProviderManager@@AEAAJXZ
    long InitializeServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ
    void RemoveProcessedReadersFromReadyList();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataProviderManager@@EEAA@XZ
    virtual ~DataProviderManager();
};
