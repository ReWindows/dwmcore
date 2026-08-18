#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 35 member(s).
class CAnimation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimation@@QEAA@PEAVCComposition@@@Z
    CAnimation(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChannelHandle@CAnimation@@UEAAIXZ
    virtual unsigned int GetChannelHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ
    virtual CChannelContext * GetChannelNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z
    virtual bool GetHandoffData(int *, float *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z
    virtual DwmAnimationPrimitive const * GetPrimitive(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitivesCount@CAnimation@@UEAA_KXZ
    virtual uint64_t GetPrimitivesCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQPCFrequency@CAnimation@@UEAA_KXZ
    virtual uint64_t GetQPCFrequency();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPrimitives@CAnimation@@QEAA_NXZ
    bool HasPrimitives();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimate@CAnimation@@UEAA_NXZ
    virtual bool IsAnimate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_ADDTIMEEVENTS@@PEBXI@Z
    long ProcessAddTimeEvents(CResourceTable *, tagMILCMD_ANIMATION_ADDTIMEEVENTS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z
    long ProcessAppend(CResourceTable *, tagMILCMD_ANIMATION_APPEND const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessClearTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_CLEARTIMEEVENTS@@@Z
    long ProcessClearTimeEvents(CResourceTable *, tagMILCMD_ANIMATION_CLEARTIMEEVENTS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z
    long ProcessSetCallbackId(CResourceTable *, tagMILCMD_ANIMATION_SETCALLBACKID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETHANDOFF@@@Z
    long ProcessSetHandoff(CResourceTable *, tagMILCMD_ANIMATION_SETHANDOFF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetInstance@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETINSTANCE@@@Z
    long ProcessSetInstance(CResourceTable *, tagMILCMD_ANIMATION_SETINSTANCE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetLegacyTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETLEGACYTRIGGER@@@Z
    long ProcessSetLegacyTrigger(CResourceTable *, tagMILCMD_ANIMATION_SETLEGACYTRIGGER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPAUSED@@@Z
    long ProcessSetPaused(CResourceTable *, tagMILCMD_ANIMATION_SETPAUSED const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES@@@Z
    long ProcessSetPrimitives(CResourceTable *, tagMILCMD_ANIMATION_SETPRIMITIVES const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETSEEK@@@Z
    long ProcessSetSeek(CResourceTable *, tagMILCMD_ANIMATION_SETSEEK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateBeginTime@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_UPDATEBEGINTIME@@@Z
    long ProcessUpdateBeginTime(CResourceTable *, tagMILCMD_ANIMATION_UPDATEBEGINTIME const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnimation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimateValues@CAnimation@@UEAA_NXZ
    virtual bool UpdateAnimateValues();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimation@@UEAA@XZ
    virtual ~CAnimation();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasEnded@CAnimation@@MEAA_NXZ
    virtual bool HasEnded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z
    virtual long OnAddBinding(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndSendHandoffPrevValueNotification@CAnimation@@AEAAXXZ
    void CheckAndSendHandoffPrevValueNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAnimation@CAnimation@@AEAAXXZ
    void EndAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationTime@CAnimation@@AEBA_J_K_N_J0@Z
    int64_t GetAnimationTime(uint64_t, bool, int64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNotify@CAnimation@@AEBA_NXZ
    bool ShouldNotify() const;
};
