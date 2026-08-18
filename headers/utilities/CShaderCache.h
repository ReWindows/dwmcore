#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CShaderCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z
    long CreateLinkedShader(unsigned int, ShaderLinkingConfig const &, ShaderLinkingBody const &, WindissectOpaque, CLinkedShader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z
    CLinkedShader * LookupShader(unsigned int, ShaderLinkingConfig const &) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z
    long AddLinkedShader(WindissectOpaque, CLinkedShader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z
    CLinkedShader * LookupLinkedShader(WindissectOpaque) const;
};
