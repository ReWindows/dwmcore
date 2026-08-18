#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 16 member(s).
class CPropertyChangeResource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPropertyIdSet@CPropertyChangeResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYCHANGERESOURCE_SETPROPERTYIDSET@@@Z
    long ProcessSetPropertyIdSet(CResourceTable *, tagMILCMD_PROPERTYCHANGERESOURCE_SETPROPERTYIDSET const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z
    long NotifyBooleanPropertyChanged(unsigned int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z
    long NotifyColorPropertyChanged(unsigned int, _D3DCOLORVALUE const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCurrentPropertyValues@CPropertyChangeResource@@MEBAJI@Z
    virtual long NotifyCurrentPropertyValues(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z
    long NotifyCurrentPropertyValuesImpl(unsigned int, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z
    long NotifyMatrix3x2PropertyChanged(unsigned int, D2D_MATRIX_3X2_F const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z
    long NotifyMatrix4x4PropertyChanged(unsigned int, D2DMatrix const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long NotifyPropertyChanged(WindissectOpaque const *, void const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z
    long NotifyQuaternionPropertyChanged(unsigned int, D2DQuaternion const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z
    long NotifyScalarPropertyChanged(unsigned int, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z
    long NotifyVector2PropertyChanged(unsigned int, D2DVector2const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z
    long NotifyVector3PropertyChanged(unsigned int, D2DVector3const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z
    long NotifyVector4PropertyChanged(unsigned int, D2DVector4const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetAnimatedProperty(WindissectOpaque const *, void const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z
    bool ShouldNotify(unsigned int) const;
};
