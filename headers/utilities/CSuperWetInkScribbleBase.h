#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 10 member(s).
class CSuperWetInkScribbleBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetryInfo@0@@Z
    CSuperWetInkScribbleBase(IDCompositionDirectInkSuperWetStrokePartner *, unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long DrawFallback(CDrawingContext *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstTipPointId@CSuperWetInkScribbleBase@@UEBAIXZ
    virtual unsigned int GetFirstTipPointId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPredictionInfo@CSuperWetInkScribbleBase@@UEAAXMPEAUtagRECT@@PEAM@Z
    virtual void GetPredictionInfo(float, tagRECT *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerializedSuperWetStroke@CSuperWetInkScribbleBase@@UEBAJV?$span@E$0?0@gsl@@@Z
    virtual long GetSerializedSuperWetStroke(WindissectOpaque) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerializedSuperWetStrokeSize@CSuperWetInkScribbleBase@@UEBAIXZ
    virtual unsigned int GetSerializedSuperWetStrokeSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWetInkFallbackSupported@CSuperWetInkScribbleBase@@UEBA_NXZ
    virtual bool IsWetInkFallbackSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scribble@CSuperWetInkScribbleBase@@UEAAJPEAUID3D12GraphicsCommandList@@PEAUID3D12Resource@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAW4D3D12_RESOURCE_STATES@@PEAUComputeScribbleLatencyData@@PEAUtagRECT@@@Z
    virtual long Scribble(ID3D12GraphicsCommandList *, ID3D12Resource *, IDCompositionDirectInkSuperWetRenderer *, int *, ComputeScribbleLatencyData *, tagRECT *);
};
