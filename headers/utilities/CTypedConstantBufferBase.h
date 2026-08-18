#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 2 member(s).
class CTypedConstantBufferBase {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CTypedConstantBufferBase@@IEAAXPEAVCD3DDevice@@PEBX@Z
    void Commit(CD3DDevice *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z
    long Initialize(CD3DDevice *, D3D11_BUFFER_DESC const &, D3D11_SUBRESOURCE_DATA const &);
};
