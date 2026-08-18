#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 4 member(s).
class CCompositingShaderCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z
    long CreateCompositingShader(int, WindissectOpaque, int, CLinkedShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z
    static long EnsureCache(CCompositingShaderCache * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositingShaderCache@@QEAA@XZ
    ~CCompositingShaderCache();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositingShaderLookupKey@CCompositingShaderCache@@CA?AUCompositingShaderLookupKey@1@W4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z
    static WindissectOpaque GetCompositingShaderLookupKey(int, WindissectOpaque, int);
};
