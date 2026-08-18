#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CInteractionContextTransformHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractionContextTransformHelper@@QEAA@XZ
    CInteractionContextTransformHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z
    void CalculatePrediction(INTERACTION_CONTEXT_OUTPUT const &, MANIPULATION_TRANSFORM const *, tagRECT const *, unsigned int, float, float, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@PEAUINTERACTION_VELOCITY@@1121@Z
    static void HimetricToScreen(tagRECT const &, tagRECT const &, INTERACTION_UPDATE *, INTERACTION_VELOCITY *, INTERACTION_UPDATE *, INTERACTION_UPDATE *, INTERACTION_VELOCITY *, INTERACTION_UPDATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_VELOCITY@@1@Z
    static long TransformCoordinateSpace(tagRECT const *, tagRECT const *, INTERACTION_VELOCITY *, INTERACTION_VELOCITY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_UPDATE@@1@Z
    static long TransformCoordinateSpace(tagRECT const *, tagRECT const *, INTERACTION_UPDATE *, INTERACTION_UPDATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z
    static void TransformDirection(::D2D1::Matrix3x2F const &, float, float, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z
    long TransformInput(tagPOINTER_INFO const &, bool, tagPOINTER_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1K_NPEAU2@@Z
    void TransformOutput(INTERACTION_CHANGESET const &, tagRECT const &, tagRECT const &, unsigned long, bool, INTERACTION_CHANGESET *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K_NPEAU2@@Z
    void TransformOutput(InteractionOutput const &, tagRECT const &, tagRECT const &, unsigned long, bool, InteractionOutput *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z
    void UnTransformOutput(InteractionOutput const &, unsigned long, bool, InteractionOutput *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z
    long UpdateTransform(::D2D1::Matrix3x2F const &, bool *);
};
