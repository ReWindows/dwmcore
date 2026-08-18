#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 63 member(s).
class CMILMatrix {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMILMatrix@@QEAA@XZ
    CMILMatrix();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z
    CMILMatrix(D2D_MATRIX_3X2_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z
    static CMILMatrix ComputeAdjointIgnoreZ(CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z
    void Decompose2DAffineMatrixIntoScaleAndRest(CMILMatrix *, CMILMatrix *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z
    bool Get2DBoundsUsing2DInverse(WindissectOpaque const &, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DPointUsing2DInverse@CMILMatrix@@QEBA_NAEBUD2D_POINT_2F@@PEAU2@@Z
    bool Get2DPointUsing2DInverse(D2D_POINT_2F const &, D2D_POINT_2F *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z
    void Get2DScaleDimensions(float *, float *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool Get2DScaleDimensionsWithPerspective(float *, float *, WindissectOpaque const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2D1Matrix4x4@CMILMatrix@@QEBA?AUD2D_MATRIX_4X4_F@@XZ
    D2D_MATRIX_4X4_F GetD2D1Matrix4x4() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ
    _D3DMATRIX GetD3DMatrix() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ
    int GetRotation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z
    void InferAffineMatrix(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@@Z
    void InferAffineMatrix(WindissectOpaque const &, D2D_POINT_2F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invert@CMILMatrix@@QEAA_NXZ
    bool Invert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z
    bool Is2DAffineOrNaN(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ
    bool Is2DAxisAlignedIntegerPreserving() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ
    bool Is2DAxisAlignedPreserving() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFacingUser@CMILMatrix@@QEBA_NXZ
    bool IsFacingUser() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z
    static bool IsInvertibleDeterminant(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z
    void Multiply(CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z
    static void Multiply(CMILMatrix const &, CMILMatrix const &, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z
    void PrependTranslate(float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrependTranslate@CMILMatrix@@QEAAXMM@Z
    void PrependTranslate(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate270@CMILMatrix@@QEAAXXZ
    void Rotate270();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate90@CMILMatrix@@QEAAXXZ
    void Rotate90();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundOffsets@CMILMatrix@@QEAAXXZ
    void RoundOffsets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale@CMILMatrix@@QEAAXMMM@Z
    void Scale(float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z
    void Set2DAffineMatrix(WindissectOpaque &, float, WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z
    void Set2DRotation(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z
    void SetRotation(WindissectOpaque &, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z
    void SetScale(float, float, float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToIdentity@CMILMatrix@@QEAAXXZ
    void SetToIdentity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z
    void SetToRotation(float, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z
    void Transform(D2D_POINT_2F const *, D2D_POINT_2F *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z
    void Transform(D2D_POINT_2F const *, HomogeneousPoint2D *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z
    void Transform(D2D_POINT_4F const *, D2D_POINT_4F *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z
    void Transform2DRectToPerspective(D2D_RECT_F const &, D2D_POINT_2F * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform3DBounds@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV2@@Z
    void Transform3DBounds(WindissectOpaque const &, WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAUD2D_POINT_3F@@@Z
    void Transform3DRectToPerspective(WindissectOpaque const &, D2D_POINT_3F * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z
    D2D_VECTOR_3F Transform3DVector(D2D_VECTOR_3F const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z
    D2D_VECTOR_4F Transform4DVector(D2D_VECTOR_4F const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z
    void TransformIgnoreZW(D2D_POINT_2F const *, D2D_POINT_4F *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate@CMILMatrix@@QEAAXMM@Z
    void Translate(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate@CMILMatrix@@QEAAXMMM@Z
    void Translate(float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transpose@CMILMatrix@@QEAAXXZ
    void Transpose();
};
