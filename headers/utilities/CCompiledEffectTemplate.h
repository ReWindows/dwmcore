#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CCompiledEffectTemplate {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompiledEffect const * GetCompiledEffectNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCompiledEffectTemplate@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ
    long OnCompilationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_COMPILEDEFFECTTEMPLATE const *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompiledEffectTemplate@@MEAA@XZ
    virtual ~CCompiledEffectTemplate();
};
