#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CManipulationTransform {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CManipulationTransform@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z
    static void CalculateMatrixFromDelta(D2DVector3const &, D2DVector3const &, D2DVector3const &, D2DMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CManipulationTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z
    long ProcessSetComponents(CResourceTable *, tagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTracingCookie@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETTRACINGCOOKIE@@@Z
    long ProcessSetTracingCookie(CResourceTable *, tagMILCMD_MANIPULATIONTRANSFORM_SETTRACINGCOOKIE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_MANIPULATIONTRANSFORM const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CManipulationTransform@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CManipulationTransform@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CManipulationTransform@@IEAA@PEAVCComposition@@@Z
    CManipulationTransform(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z
    virtual void GetRealization(D2D_SIZE_F const *, CMILMatrix *);
};
