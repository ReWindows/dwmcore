#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class CVisualGroup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisualGroup@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z
    long AppendVisuals(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideVisuals@CVisualGroup@@QEAAXXZ
    void HideVisuals();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisualGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisualGroup@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreVisuals@CVisualGroup@@QEAAXXZ
    void RestoreVisuals();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z
    long SetVisuals(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualGroup@@UEAA@XZ
    virtual ~CVisualGroup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z
    long AddVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z
    void RemoveVisual(CVisual const *);
};
