#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CContainerVectorShape {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContainerVectorShape@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildAt@CContainerVectorShape@@UEBAPEAVCVectorShape@@I@Z
    virtual CVectorShape * GetChildAt(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCount@CContainerVectorShape@@UEBAIXZ
    virtual unsigned int GetChildrenCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CContainerVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z
    long ProcessSetShapes(CResourceTable *, tagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES const *, void const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContainerVectorShape@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContainerVectorShape@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z
    long SetShapes(CResourceTable *, WindissectOpaque, bool);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContainerVectorShape@@MEAA@XZ
    virtual ~CContainerVectorShape();
};
