#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CSharedSectionWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharedSectionWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ
    WindissectOpaque GetSharedSectionData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CSharedSectionWrapper@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CSharedSectionWrapper@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSharedSection@CSharedSectionWrapper@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION@@@Z
    long ProcessSetSharedSection(CResourceTable *, tagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSharedSectionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharedSectionWrapper@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharedSectionWrapper@@MEAA@XZ
    virtual ~CSharedSectionWrapper();
};
