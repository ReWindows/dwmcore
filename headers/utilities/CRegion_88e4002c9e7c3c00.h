#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
namespace FastRegion {
class CRegion {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ
    WindissectOpaque BeginIterator() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z
    CRegion(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z
    long Copy(::FastRegion::CRegion const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z
    bool GetBoundingRect(tagRECT &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ
    unsigned int GetRectangleCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z
    void SetRectangle(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z
    long Union(::FastRegion::CRegion const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z
    long CopyData(::FastRegion::Internal::CRgnData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeMemory@CRegion@FastRegion@@IEAAXXZ
    void FreeMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z
    long SaveResult(::FastRegion::Internal::CWorkBuffer *);
};
} // namespace FastRegion
