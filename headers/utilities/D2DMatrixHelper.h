#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class D2DMatrixHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z
    bool ComputeRectangleTransform(D2D_RECT_F const &, D2D_RECT_F const &, D2D_MATRIX_3X2_F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z
    void DecomposeMatrixIntoScaleAndRemaining(D2D_MATRIX_3X2_F const &, float *, float *, D2D_MATRIX_3X2_F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z
    void GetScaleDimensions(D2D_MATRIX_3X2_F const &, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z
    bool Is2DAxisAlignedPreserving(D2D_MATRIX_3X2_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z
    unsigned int TransformEdgeFlags_AxisAlignedPreserving(unsigned int, D2D_MATRIX_3X2_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z
    void TransformRectConservative(D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, D2D_RECT_F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z
    void TransformRect_AxisAlignedPreserving(D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, D2D_RECT_F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z
    bool TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(D2D_MATRIX_3X2_F const &, float *, float *, D2D_MATRIX_3X2_F *);
};
