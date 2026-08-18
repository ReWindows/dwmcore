#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 48 member(s).
class CResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z
    long AddSourceAnimation(CBaseExpression *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlwaysSetProperty@CResource@@UEBA_NXZ
    virtual bool AlwaysSetProperty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterResource@CResource@@QEAA_NXZ
    bool EnterResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwningProcessId@CResource@@UEBAKXZ
    virtual unsigned long GetOwningProcessId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwningProcessSequenceNumber@CResource@@UEBA_KXZ
    virtual uint64_t GetOwningProcessSequenceNumber() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ
    virtual CProcessAttribution * GetProcessAttributionNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CResource@@UEAAJIPEAVCExpressionValue@@@Z
    virtual long GetProperty(unsigned int, CExpressionValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z
    WindissectOpaque * GetSourceAnimationsForProperty(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z
    virtual long GetWeakReference(IUnknownWeakRef * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyListenerOfChange(CResource *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetFloatProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETFLOATPROPERTY@@@Z
    long ProcessSetFloatProperty(CResourceTable *, tagMILCMD_RESOURCE_SETFLOATPROPERTY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetHandleProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETHANDLEPROPERTY@@@Z
    long ProcessSetHandleProperty(CResourceTable *, tagMILCMD_RESOURCE_SETHANDLEPROPERTY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetIntegerProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETINTEGERPROPERTY@@@Z
    long ProcessSetIntegerProperty(CResourceTable *, tagMILCMD_RESOURCE_SETINTEGERPROPERTY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetReferenceProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETREFERENCEPROPERTY@@@Z
    long ProcessSetReferenceProperty(CResourceTable *, tagMILCMD_RESOURCE_SETREFERENCEPROPERTY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z
    long RegisterNotifier(CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z
    void RemoveSourceAnimation(CBaseExpression *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandleProperty@CResource@@UEAAJIPEAX@Z
    virtual long SetHandleProperty(unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIntegerProperty@CResource@@UEAAJI_J@Z
    virtual long SetIntegerProperty(unsigned int, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CResource@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    virtual long SetProperty(unsigned int, int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceProperty@CResource@@UEAAJIPEAV1@@Z
    virtual long SetReferenceProperty(unsigned int, CResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterNotifiers@CResource@@UEAAXXZ
    virtual void UnRegisterNotifiers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z
    static long UnmarshalResourceArray(void const *, unsigned int, unsigned int, int, unsigned int *, CResource * * *, CResourceTable *, bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CResource@@IEAAXXZ
    void Delete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z
    void GetPropertyImpl(WindissectOpaque const *, CExpressionValue *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CResource@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateAnimationSources@CResource@@IEAAXI@Z
    void InvalidateAnimationSources(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    bool ModifyProperty(WindissectOpaque const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CResource@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual int OnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CResource@@IEAAXXZ
    void OnPropertyChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetAnimatedProperty(WindissectOpaque const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z
    long SetPropertyImpl(WindissectOpaque const *, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResource@@MEAA@XZ
    virtual ~CResource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z
    long RegisterNNotifiersInternal(CResource * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z
    void UnRegisterNNotifiersInternal(CResource * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z
    void UnRegisterNotifierInternal(CResource *);
};
