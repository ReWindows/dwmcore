#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CResourceTable {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z
    CResourceTable(unsigned int, CProcessAttribution *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteHandle@CResourceTable@@QEAAJI@Z
    long DeleteHandle(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z
    CResource * GetResource(unsigned int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z
    CResource * GetResourceWithoutType(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z
    bool ReleaseHandleTableEntries(CComposition *, CChannelContext *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceTable@@UEAA@XZ
    virtual ~CResourceTable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakLinksForCyclicResources@CResourceTable@@AEAAXXZ
    void BreakLinksForCyclicResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z
    void CountResource(int);
};
