#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
class CScalar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CScalar@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChannelHandle@CScalar@@UEAAIXZ
    virtual unsigned int GetChannelHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChannelNoRef@CScalar@@UEAAPEAVCChannelContext@@XZ
    virtual CChannelContext * GetChannelNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimate@CScalar@@UEAA_NXZ
    virtual bool IsAnimate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CScalar@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCALAR_SETVALUE@@@Z
    long ProcessSetValue(CResourceTable *, tagMILCMD_SCALAR_SETVALUE const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CScalar@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CScalar@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimateValues@CScalar@@UEAA_NXZ
    virtual bool UpdateAnimateValues();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z
    virtual long OnAddBinding(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScalar@@MEAA@XZ
    virtual ~CScalar();
};
