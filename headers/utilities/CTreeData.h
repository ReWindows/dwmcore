#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CTreeData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z
    COcclusionInfo * GetOcclusionInfo(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuperWetInkClip@CTreeData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    WindissectOpaque GetSuperWetInkClip() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTreeData@@UEAA@XZ
    virtual ~CTreeData();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTreeData@@IEAA@XZ
    CTreeData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ
    void CleanUpStaleBackdropVisualImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CTreeData@@MEAAXXZ
    virtual void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z
    CBackdropVisualImage * GetBackdropVisualImage(CVisualTreePath const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z
    void GetWorldTransform(CMILMatrix *, bool *, CMILMatrix *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z
    virtual void Initialize(CVisualTree *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateWorldTransform@CTreeData@@IEAAXXZ
    void InvalidateWorldTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z
    void SetBackdropVisualImage(CVisualTreePath const &, CBackdropVisualImage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z
    virtual bool SetWorldTransform(CMILMatrix const &, bool, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorldTransformChangedInCurrentFrame@CTreeData@@IEBA_NXZ
    bool WorldTransformChangedInCurrentFrame() const;
};
