#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 35 member(s).
class CHolographicInteropTexture {
public:
    class RenderBuffer;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTexture@CHolographicInteropTexture@@UEAAXXZ
    virtual void ActivateTexture();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicInteropTexture@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z
    long EnsureRenderBuffers(CD3DDevice *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindId@CHolographicInteropTexture@@UEAAIXZ
    virtual unsigned int GetBindId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferCount@CHolographicInteropTexture@@UEAAIXZ
    virtual unsigned int GetBufferCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z
    virtual void GetDirtyRects(unsigned int, unsigned int, unsigned int *, tagRECT *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessId@CHolographicInteropTexture@@UEAAIXZ
    virtual unsigned int GetProcessId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedHandle@CHolographicInteropTexture@@UEAAJIIPEAPEAX@Z
    virtual long GetSharedHandle(unsigned int, unsigned int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextureOffset@CHolographicInteropTexture@@UEAAXPEAH0@Z
    virtual void GetTextureOffset(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTree@CHolographicInteropTexture@@UEBAPEBVCVisualTree@@XZ
    virtual CVisualTree const * GetVisualTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CHolographicInteropTexture@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void NotifyRenderedRect(unsigned int, unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetFlags@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETFLAGS@@@Z
    long ProcessSetFlags(CResourceTable *, tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETFLAGS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z
    long ProcessSetPosition(CResourceTable *, tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z
    long ProcessSetRoot(CResourceTable *, tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicInteropTexture@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicInteropTexture@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ
    void ReleaseResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresDirtyRectCollection@CHolographicInteropTexture@@UEBA_NXZ
    virtual bool RequiresDirtyRectCollection() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDirtyRegion@CHolographicInteropTexture@@QEAAXXZ
    void UpdateDirtyRegion();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z
    CHolographicInteropTexture(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CHolographicInteropTexture@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicInteropTexture@@MEAA@XZ
    virtual ~CHolographicInteropTexture();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ
    void ReleaseVisualTree();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z
    long SetRootVisual(CVisual *);
};
