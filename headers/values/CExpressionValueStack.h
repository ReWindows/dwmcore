#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 43 member(s).
class CExpressionValueStack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CExpressionValueStack@@QEAAJXZ
    long Add();
    // Category: Method | Source: PDB Internal
    // Symbol: ?And@CExpressionValueStack@@QEAAJXZ
    long And();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clamp@CExpressionValueStack@@QEAAJXZ
    long Clamp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorHsl@CExpressionValueStack@@QEAAJXZ
    long ColorHsl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ
    long ColorLerpHsl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorRgb@CExpressionValueStack@@QEAAJXZ
    long ColorRgb();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Distance@CExpressionValueStack@@QEAAJXZ
    long Distance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DistanceSquared@CExpressionValueStack@@QEAAJXZ
    long DistanceSquared();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Divide@CExpressionValueStack@@QEAAJXZ
    long Divide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@CExpressionValueStack@@QEAAJXZ
    long Equals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GreaterThan@CExpressionValueStack@@QEAAJXZ
    long GreaterThan();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GreaterThanEquals@CExpressionValueStack@@QEAAJXZ
    long GreaterThanEquals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lerp@CExpressionValueStack@@QEAAJXZ
    long Lerp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LessThan@CExpressionValueStack@@QEAAJXZ
    long LessThan();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LessThanEquals@CExpressionValueStack@@QEAAJXZ
    long LessThanEquals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z
    long Matrix3x2FromScale(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z
    long Matrix3x2FromTranslation(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matrix4x4@CExpressionValueStack@@QEAAJXZ
    long Matrix4x4();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matrix4x4FromPerspective@CExpressionValueStack@@QEAAJXZ
    long Matrix4x4FromPerspective();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matrix4x4FromPerspectiveFieldOfView@CExpressionValueStack@@QEAAJXZ
    long Matrix4x4FromPerspectiveFieldOfView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matrix4x4FromPerspectiveOffCenter@CExpressionValueStack@@QEAAJXZ
    long Matrix4x4FromPerspectiveOffCenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z
    long Matrix4x4FromScale(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z
    long Matrix4x4FromTranslation(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Max@CExpressionValueStack@@QEAAJXZ
    long Max();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Min@CExpressionValueStack@@QEAAJXZ
    long Min();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Multiply@CExpressionValueStack@@QEAAJXZ
    long Multiply();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Negate@CExpressionValueStack@@QEAAJXZ
    long Negate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotEquals@CExpressionValueStack@@QEAAJXZ
    long NotEquals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z
    CExpressionValue * PeekStackValue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstant@CExpressionValueStack@@QEAAJM@Z
    long PushConstant(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z
    long PushConstant(CExpressionValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z
    long PushConstant(D2DVector3const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z
    long PushConstant(D2DVector2const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ
    long QuaternionFromLerp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Round@CExpressionValueStack@@QEAAJXZ
    long Round();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale@CExpressionValueStack@@QEAAJXZ
    long Scale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtract@CExpressionValueStack@@QEAAJXZ
    long Subtract();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Swizzle@CExpressionValueStack@@QEAAJPEBUExpressionNode@@@Z
    long Swizzle(ExpressionNode const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeSpanFrom@CExpressionValueStack@@QEAAJI@Z
    long TimeSpanFrom(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@CExpressionValueStack@@QEAAJXZ
    long Transform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Vector3@CExpressionValueStack@@QEAAJXZ
    long Vector3();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Vector4Transform@CExpressionValueStack@@QEAAJXZ
    long Vector4Transform();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExpressionValueStack@@QEAA@XZ
    ~CExpressionValueStack();
};
