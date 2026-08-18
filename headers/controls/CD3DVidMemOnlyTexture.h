#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CD3DVidMemOnlyTexture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z
    static long Create(ID3D11Texture2D *, unsigned int, bool, CD3DDevice *, CD3DVidMemOnlyTexture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z
    static long OpenSharedTexture(D3D11_TEXTURE2D_DESC *, CD3DDevice *, void *, bool, unsigned int, CD3DVidMemOnlyTexture * *);
};
