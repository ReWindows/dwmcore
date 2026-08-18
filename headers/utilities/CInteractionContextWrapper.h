#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 31 member(s).
class CInteractionContextWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z
    virtual long ApplySetupInfo(SetupInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BufferOutput@CInteractionContextWrapper@@UEAAX_N@Z
    virtual void BufferOutput(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractionContextWrapper@@QEAA@XZ
    CInteractionContextWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartBufferedOutputPointer@CInteractionContextWrapper@@UEAA_NI@Z
    virtual bool DepartBufferedOutputPointer(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z
    virtual unsigned int GetBufferedOutputRaw(uint64_t, uint64_t, InteractionOutput *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferedOutputTransformed@CInteractionContextWrapper@@UEAAI_K0AEBVCMILMatrix@@PEAUInteractionOutput@@@Z
    virtual unsigned int GetBufferedOutputTransformed(uint64_t, uint64_t, CMILMatrix const &, InteractionOutput *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalMotion@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ
    virtual InteractionMotion GetGlobalMotion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawOutput@CInteractionContextWrapper@@UEAA?AUInteractionOutput@@XZ
    virtual InteractionOutput GetRawOutput();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z
    virtual long GetTransformedOutput(CMILMatrix const &, InteractionOutput *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBufferedOutput@CInteractionContextWrapper@@UEBA_NI@Z
    virtual bool HasBufferedOutput(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBufferingOutput@CInteractionContextWrapper@@UEBA_NXZ
    virtual bool IsBufferingOutput() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@AEBVCMILMatrix@@I@Z
    virtual long ProcessInput(tagPOINTER_INFO const &, tagPOINTER_INFO_UNION const &, CMILMatrix const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ
    virtual void ResetBufferedOutput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ
    virtual void ResetOutput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ
    virtual long StopInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseIndirectTransform@CInteractionContextWrapper@@UEAAX_N@Z
    virtual void UseIndirectTransform(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    long AddBufferedOutput(unsigned int, unsigned int, uint64_t, INTERACTION_CONTEXT_OUTPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z
    void BoundBufferedOutput(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z
    long ConfigureInteractionContext(HINTERACTIONCONTEXT__*, SetupInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ
    long EnsureInteractionContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z
    CBufferedOutputPointer * FindBufferedOutputPointer(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    void InteractionContextCallback(INTERACTION_CONTEXT_OUTPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z
    void ResetCachedInteractionOutput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z
    long TransformOutput(CMILMatrix const &, InteractionOutput const &, InteractionOutput *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long UpdateMouseWheelParameters(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z
    void _UpdateInteractionOutput(INTERACTION_CONTEXT_OUTPUT const *, InteractionOutput *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    static void s_InteractionContextCallback(void *, INTERACTION_CONTEXT_OUTPUT const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractionContextWrapper@@EEAA@XZ
    virtual ~CInteractionContextWrapper();
};
