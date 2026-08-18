#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CAtlasTexture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateEntry@CAtlasTexture@@QEAAXPEAVCAtlasEntry@@@Z
    void AllocateEntry(CAtlasEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z
    void CopyFrom(CAtlasTexture const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z
    static long Create(CD3DDevice *, unsigned int, CAtlasTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ
    D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z
    bool IsFreeEntryInRow(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z
    bool IsInUseEntryInRow(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ
    void PurgeAndNotify();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z
    void UpdateGradientStrip(CAtlasEntry const *, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAtlasTexture@@QEAA@XZ
    ~CAtlasTexture();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyResources@CAtlasTexture@@AEAAXXZ
    void DestroyResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ
    void GenerateWhitePixel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z
    void GetDeviceTexture(IDeviceTexture * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z
    long Initialize(CD3DDevice *, unsigned int);
};
