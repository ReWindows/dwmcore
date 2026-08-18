#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 19 member(s).
class DataSourceProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z
    bool DoesResourceHaveAccess(CResource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z
    long GetPropertyValue(CDataSourceReader *, unsigned int, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z
    long RegisterReader(CDataSourceReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z
    long UnregisterReader(CDataSourceReader *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataSourceProxy@@UEAA@XZ
    virtual ~DataSourceProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@DataSourceProxy@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z
    virtual long SetBooleanValue(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z
    virtual long SetColorValue(unsigned int, float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z
    virtual long SetMatrix3x2Value(unsigned int, D2D_MATRIX_3X2_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z
    virtual long SetMatrix4x4Value(unsigned int, _D3DMATRIX const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z
    virtual long SetQuaternionValue(unsigned int, float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z
    virtual long SetScalarValue(unsigned int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z
    virtual long SetVector2Value(unsigned int, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z
    virtual long SetVector3Value(unsigned int, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z
    virtual long SetVector4Value(unsigned int, float, float, float, float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z
    long CheckAndReportError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z
    void InvalidateReadersAnimationSources(unsigned int);
};
