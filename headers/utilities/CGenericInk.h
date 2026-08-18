#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 33 member(s).
class CGenericInk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOcclusionInformation@CGenericInk@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z
    virtual long AddOcclusionInformation(COcclusionContext *, D2D_SIZE_F const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGenericInk@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGenericInk@@QEAA@PEAVCComposition@@@Z
    CGenericInk(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z
    virtual void ComputeBackgroundBlendInfo(bool *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z
    long CreateResource(CD3DDevice *, CD2DGenericInk * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z
    virtual long CreateScribble(CD3DDevice *, DCompWetInkStrokeRenderState const &, CComputeScribble * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z
    virtual long Draw(CDrawingContext *, D2D_SIZE_F const &, CDrawListCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z
    virtual long EnqueueComputeScribbleOnHost(uint64_t, CComputeScribble *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long GetBounds(D2D_SIZE_F const &, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z
    long GetDirectInkWetStroke(CD3DDevice *, IDCompositionDirectInkWetStrokePartner * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirtyRegion@CGenericInk@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z
    virtual bool GetDirtyRegion(D2D_SIZE_F const &, CRectanglesShape *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointTransformSpace@CGenericInk@@UEBA?AW4InkPointTransformSpace@@XZ
    virtual int GetPointTransformSpace() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z
    virtual long HitTest(D2D_SIZE_F const &, D2D_POINT_2F const &, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CGenericInk@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CGenericInk@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z
    virtual bool IsSuperWetCompatible(CD3DDevice *, DCompWetInkStrokeRenderState const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivated@CGenericInk@@UEAAXXZ
    virtual void OnActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeactivated@CGenericInk@@UEAAXXZ
    virtual void OnDeactivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z
    long ProcessPropertiesUpdate(CResourceTable *, tagMILCMD_GENERICINK_PROPERTIESUPDATE const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRoutingInfo@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_ROUTINGINFO@@@Z
    long ProcessRoutingInfo(CResourceTable *, tagMILCMD_GENERICINK_ROUTINGINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z
    long ProcessSegmentUpdate(CResourceTable *, tagMILCMD_GENERICINK_SEGMENTUPDATE const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z
    long ProcessTipPointBuffer(CResourceTable *, tagMILCMD_GENERICINK_TIPPOINTBUFFER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessVailPerFrameDataBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_VAILPERFRAMEDATABUFFER@@@Z
    long ProcessVailPerFrameDataBuffer(CResourceTable *, tagMILCMD_GENERICINK_VAILPERFRAMEDATABUFFER const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGenericInk@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGenericInk@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureConsistentSegmentSize@CGenericInk@@AEAAJI@Z
    long EnsureConsistentSegmentSize(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z
    long SetContextMsgRoutingInfo(CD3DDevice *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGenericInk@@EEAA@XZ
    virtual ~CGenericInk();
};
