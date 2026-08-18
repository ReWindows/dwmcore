#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 41 member(s).
class CHolographicFrameProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTexture@CHolographicFrameProcessor@@UEAAXXZ
    virtual void ActivateTexture();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicFrameProcessor@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPresent@CHolographicFrameProcessor@@UEAAJ_KPEAUIFlipPropertySet@@@Z
    virtual long BeginPresent(uint64_t, IFlipPropertySet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentAdded@CHolographicFrameProcessor@@UEAAJPEAUIFlipPropertySet@@PEAPEAUIFlipContentCallback@@@Z
    virtual long ContentAdded(IFlipPropertySet *, IFlipContentCallback * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentUpdated@CHolographicFrameProcessor@@UEAAJPEAUIFlipPropertySet@@PEAUIUnknown@@@Z
    virtual long ContentUpdated(IFlipPropertySet *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z
    static long Create(CComposition *, unsigned int, void *, int, unsigned int, unsigned int, CHolographicFrameProcessor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CHolographicFrameProcessor@@UEAAJXZ
    virtual long Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndPresent@CHolographicFrameProcessor@@UEAAJXZ
    virtual long EndPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindId@CHolographicFrameProcessor@@UEAAIXZ
    virtual unsigned int GetBindId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferCount@CHolographicFrameProcessor@@UEAAIXZ
    virtual unsigned int GetBufferCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDXGIFormat@CHolographicFrameProcessor@@UEAA?AW4DXGI_FORMAT@@XZ
    virtual int GetDXGIFormat();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRects@CHolographicFrameProcessor@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z
    virtual void GetDirtyRects(unsigned int, unsigned int, unsigned int *, tagRECT *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessId@CHolographicFrameProcessor@@UEAAIXZ
    virtual unsigned int GetProcessId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedHandle@CHolographicFrameProcessor@@UEAAJIIPEAPEAX@Z
    virtual long GetSharedHandle(unsigned int, unsigned int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CHolographicFrameProcessor@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextureOffset@CHolographicFrameProcessor@@UEAAXPEAH0@Z
    virtual void GetTextureOffset(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatePresentHandle@CHolographicFrameProcessor@@UEAAPEAXXZ
    virtual void * GetUpdatePresentHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithD3DDevice@CHolographicFrameProcessor@@UEAAJPEAUID3D11Device1@@@Z
    virtual long InitializeWithD3DDevice(ID3D11Device1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCaptureTransport@CHolographicFrameProcessor@@UEAA_NXZ
    virtual bool IsCaptureTransport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PoolBufferAdded@CHolographicFrameProcessor@@UEAAJAEBU_LUID@@PEAXPEAUIFlipPropertySet@@PEAPEAUIUnknown@@@Z
    virtual long PoolBufferAdded(_LUID const &, void *, IFlipPropertySet *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PoolBufferRemoved@CHolographicFrameProcessor@@UEAAJPEAUIUnknown@@@Z
    virtual long PoolBufferRemoved(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicFrameProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicFrameProcessor@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CHolographicFrameProcessor@@UEAAXXZ
    virtual void Remove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Removed@CHolographicFrameProcessor@@UEAAJXZ
    virtual long Removed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CHolographicFrameProcessor@@UEAAJII@Z
    virtual long SetSize(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpdateCallback@CHolographicFrameProcessor@@UEAAJPEAUIHolographicWin32kInteropTextureCallback@@@Z
    virtual long SetUpdateCallback(IHolographicWin32kInteropTextureCallback *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CHolographicFrameProcessor@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicFrameProcessor@@MEAA@XZ
    virtual ~CHolographicFrameProcessor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z
    long Initialize(CComposition *, unsigned int, void *, int, unsigned int, unsigned int);
};
