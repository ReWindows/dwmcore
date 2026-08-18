#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 17 member(s).
class CRectangleGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CRectangleGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ
    bool IsRoundedRectangleGeometry() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z
    virtual bool IsSameGeometry(CGeometry const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedForCpuClipping@CRectangleGeometry@@UEBA_NPEA_N@Z
    virtual bool IsSupportedForCpuClipping(bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBottomInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET@@@Z
    long ProcessSetBottomInset(CResourceTable *, tagMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetLeftInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET@@@Z
    long ProcessSetLeftInset(CResourceTable *, tagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetOffset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETOFFSET@@@Z
    long ProcessSetOffset(CResourceTable *, tagMILCMD_RECTANGLEGEOMETRY_SETOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z
    long ProcessSetRectangle(CResourceTable *, tagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRightInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET@@@Z
    long ProcessSetRightInset(CResourceTable *, tagMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSize@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETSIZE@@@Z
    long ProcessSetSize(CResourceTable *, tagMILCMD_RECTANGLEGEOMETRY_SETSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTopInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETTOPINSET@@@Z
    long ProcessSetTopInset(CResourceTable *, tagMILCMD_RECTANGLEGEOMETRY_SETTOPINSET const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z
    virtual long GetShapeDataCore(D2D_SIZE_F const *, CShapePtr *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCurrentPropertyValues@CRectangleGeometry@@MEBAJI@Z
    virtual long NotifyCurrentPropertyValues(unsigned int) const;
};
