#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 35 member(s).
class CPropertySet {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z
    long ProcessSetPropertyValue(CResourceTable *, tagMILCMD_PROPERTYSET_SETPROPERTYVALUE const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTracingCookie@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETTRACINGCOOKIE@@@Z
    long ProcessSetTracingCookie(CResourceTable *, tagMILCMD_PROPERTYSET_SETTRACINGCOOKIE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertySet@@UEAA@XZ
    virtual ~CPropertySet();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z
    virtual long NotifyCurrentPropertyValues(unsigned int) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long NotifyPropertyValue(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z
    long PropertyUpdated(unsigned int, unsigned int, void const *);
};
