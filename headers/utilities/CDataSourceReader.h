#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CDataSourceReader {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDataSourceReader@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateAnimationSources@CDataSourceReader@@QEAAXI@Z
    void InvalidateAnimationSources(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CDataSourceReader@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z
    long ProcessSetLookupId(CResourceTable *, tagMILCMD_DATASOURCEREADER_SETLOOKUPID const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDataSourceReader@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDataSourceReader@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataSourceReader@@UEAA@XZ
    virtual ~CDataSourceReader();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRemovedFromReadyList@CDataSourceReader@@AEAAXXZ
    void EnsureRemovedFromReadyList();
};
