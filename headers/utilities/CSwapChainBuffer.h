#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 22 member(s).
class CSwapChainBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z
    virtual void AddInvalidRegion(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z
    virtual void AddTransientRegion(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z
    virtual void AddValidRegion(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z
    virtual long EnsureComputeScribbleResources(CD3DDevice *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComputeScribbleData@CSwapChainBuffer@@UEAAPEAVCComputeScribbleFramebuffer@@XZ
    virtual CComputeScribbleFramebuffer * GetComputeScribbleData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInvalidRegion@CSwapChainBuffer@@UEBAAEBVCRegion@@XZ
    virtual CRegion const & GetInvalidRegion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalIndex@CSwapChainBuffer@@UEBAIXZ
    virtual unsigned int GetPhysicalIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScanoutPresentCount@CSwapChainBuffer@@UEBAIXZ
    virtual unsigned int GetScanoutPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CSwapChainBuffer@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceLuid@CSwapChainBuffer@@UEBA?AU_LUID@@XZ
    virtual _LUID GetSurfaceLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransientRegion@CSwapChainBuffer@@UEBAAEBVCRegion@@XZ
    virtual CRegion const & GetTransientRegion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPendingScribble@CSwapChainBuffer@@UEBA_NXZ
    virtual bool HasPendingScribble() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@CSwapChainBuffer@@UEBA_NXZ
    virtual bool IsPinned() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullInvalid@CSwapChainBuffer@@UEAAXXZ
    virtual void MarkFullInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullValid@CSwapChainBuffer@@UEAAXXZ
    virtual void MarkFullValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPinned@CSwapChainBuffer@@UEAAXXZ
    virtual void NotifyPinned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnPinned@CSwapChainBuffer@@UEAAXXZ
    virtual void NotifyUnPinned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseComputeScribbleData@CSwapChainBuffer@@UEAAXXZ
    virtual void ReleaseComputeScribbleData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetireTransientRegion@CSwapChainBuffer@@UEAAXXZ
    virtual void RetireTransientRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScanoutPresentCount@CSwapChainBuffer@@UEAAXI@Z
    virtual void SetScanoutPresentCount(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSwapChainBuffer@@UEAA@XZ
    virtual ~CSwapChainBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CSwapChainBuffer@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
