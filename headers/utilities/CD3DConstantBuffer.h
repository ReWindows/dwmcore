#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
class CD3DConstantBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z
    static long Create(CD3DDevice *, unsigned int, int, void const *, CD3DConstantBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CD3DConstantBuffer@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z
    long SetData(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z
    long Initialize(CD3DResourceManager *, unsigned int, ID3D11Buffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ
    virtual void ReleaseD3DResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3DConstantBuffer@@MEAA@XZ
    virtual ~CD3DConstantBuffer();
};
