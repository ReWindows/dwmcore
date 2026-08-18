#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 21 member(s).
class CGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long GetBoundsSafe(D2D_SIZE_F const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z
    long GetShapeData(D2D_SIZE_F const *, CShapePtr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameGeometry@CGeometry@@UEBA_NPEBV1@@Z
    virtual bool IsSameGeometry(CGeometry const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedForCpuClipping@CGeometry@@UEBA_NPEA_N@Z
    virtual bool IsSupportedForCpuClipping(bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRANSFORM@@@Z
    long ProcessSetTransform(CResourceTable *, tagMILCMD_GEOMETRY_SETTRANSFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTrimEnd@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRIMEND@@@Z
    long ProcessSetTrimEnd(CResourceTable *, tagMILCMD_GEOMETRY_SETTRIMEND const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTrimOffset@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRIMOFFSET@@@Z
    long ProcessSetTrimOffset(CResourceTable *, tagMILCMD_GEOMETRY_SETTRIMOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTrimStart@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRIMSTART@@@Z
    long ProcessSetTrimStart(CResourceTable *, tagMILCMD_GEOMETRY_SETTRIMSTART const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool TryGetAxisAlignedRectangle(D2D_SIZE_F const *, WindissectOpaque *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGeometry@@IEAA@PEAVCComposition@@@Z
    CGeometry(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z
    virtual void GetShapeTransformRealization(D2D_SIZE_F const *, D2D_MATRIX_3X2_F *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTransform@CGeometry@@MEBA_NXZ
    virtual bool HasTransform() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGeometry@@MEAA@XZ
    virtual ~CGeometry();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z
    long GetShapeDataWorker(D2D_SIZE_F const *, CShapePtr *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z
    long GetTrimmedShapeData(CShapePtr const &, CShapePtr *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetTrimInvalidatingAnimatedProperty(WindissectOpaque const *, void const *);
};
