#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CShaderLinkingGraphBuilder {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShaderLinkingGraphBuilder@@QEAA@XZ
    CShaderLinkingGraphBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z
    long CopyNode(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z
    long CreateNodeFromOutputArgument(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z
    static long GetFragmentsModuleNoRef(int, ID3D11Module * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z
    long Initialize(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z
    long Link(WindissectOpaque const &, ID3D10Blob * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z
    long SwizzleNode(int, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z
    long UseLibrary(ID3D11ModuleInstance *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShaderLinkingGraphBuilder@@QEAA@XZ
    ~CShaderLinkingGraphBuilder();
};
