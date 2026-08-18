#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 51 member(s).
class CManipulationContext {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CManipulationContext@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z
    static void BuildInteractionChainAndUpdateTree(CDesktopTree *, CInteraction *, unsigned int, int, bool, CInteractionChain *, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z
    CManipulationContext(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z
    static void CleanTreeState(CInteraction *, CManipulationContext *, CComposition *, bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z
    static CInteraction * GetClosestInteractionAncestor(CVisual const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContactLeaf@CManipulationContext@@UEBAPEAUIInteractionResource@@I@Z
    virtual IInteractionResource * GetContactLeaf(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFallbackTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ
    virtual TargetingInfo GetCurrentFallbackTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ
    virtual TargetingInfo GetCurrentTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z
    CInteraction * GetHoverTarget(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionDropTarget@CManipulationContext@@UEBAPEAUIInteractionResource@@XZ
    virtual IInteractionResource * GetInteractionDropTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionFirstChild@CManipulationContext@@UEBAPEAUIInteractionResource@@AEBU2@@Z
    virtual IInteractionResource * GetInteractionFirstChild(IInteractionResource const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionNextSibling@CManipulationContext@@UEBAPEAUIInteractionResource@@AEBU2@@Z
    virtual IInteractionResource * GetInteractionNextSibling(IInteractionResource const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionNumContacts@CManipulationContext@@UEBAIPEBUIInteractionResource@@W4InputType@@@Z
    virtual unsigned int GetInteractionNumContacts(IInteractionResource const *, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionParent@CManipulationContext@@UEBAPEAUIInteractionResource@@AEBU2@@Z
    virtual IInteractionResource * GetInteractionParent(IInteractionResource const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionTreeRoot@CManipulationContext@@UEBAPEAUIInteractionResource@@XZ
    virtual IInteractionResource * GetInteractionTreeRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z
    virtual long GetLastPointerTarget(unsigned int, TargetingInfo *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPalmRejectionEnabled@CManipulationContext@@UEBAHXZ
    virtual int GetPalmRejectionEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSingleTarget@CManipulationContext@@UEBAHXZ
    virtual int HasSingleTarget() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CManipulationContext@@QEAAJ_NK@Z
    long Initialize(bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z
    static void InvalidateMCs(MCCollections *, CVisual *, CInteraction *, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z
    void OnContactDepart(unsigned int, int, CInteraction *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z
    void OnContactHoverDepart(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z
    long OnHoverContact(CInteraction *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z
    long OnNewContact(CInteractionChain *, unsigned int, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z
    static void OnVisualPropertyChange(CVisual *, CDesktopTree *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CManipulationContext@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentFallbackTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z
    virtual void SetCurrentFallbackTarget(TargetingInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z
    virtual void SetCurrentTarget(TargetingInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z
    virtual long SetLastPointerTarget(unsigned int, TargetingInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z
    static unsigned int TotalContactsCapturedUnderVisual(MCCollections const *, CVisual *, CInteraction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z
    static bool VisualHasAnyChildFlagged(CVisual *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManipulationContext@@UEAA@XZ
    virtual ~CManipulationContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z
    static bool CheckForSingleTarget(CInteraction const *, InputSinks const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z
    void CleanStaleFork(int, CInteraction *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z
    static CManipulationContext * FindManipulationContext(MCCollections const *, CInteraction const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z
    static CInteraction * GetMCRoot(CInteraction const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z
    static CVisual const * GetVisualEffectiveParentImpl(CVisual const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z
    static bool IsInteractionDescendantOfVisual(CInteraction const *, CVisual const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z
    static void RemoveInteractionLeafFromTree(CInteraction *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z
    void RevalidateMC(MCCollections *, int *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z
    void RevalidateMCTree(MCCollections *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevalidateMCTrees@CManipulationContext@@CAXPEAUMCCollections@@@Z
    static void RevalidateMCTrees(MCCollections *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevalidateMCsAndLists@CManipulationContext@@CAXPEAUMCCollections@@PEAH@Z
    static void RevalidateMCsAndLists(MCCollections *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z
    static void RevalidationCleanup(int, MCCollections *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z
    static bool VisualHasActiveInteraction(CVisual *, unsigned int);
};
