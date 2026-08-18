#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
class KeyframeSequence {
public:
    class Keyframe;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z
    void AddKeyframe(unsigned int, float, KeyframeValue *, KeyframeInterpolation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z
    void Calculate(CExpressionValueStack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureTimer@KeyframeSequence@@QEAAXXZ
    void ConfigureTimer();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyframeSequence@@QEAA@I@Z
    KeyframeSequence(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Play@KeyframeSequence@@QEAAXXZ
    void Play();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Repeat@KeyframeSequence@@QEAAXH@Z
    void Repeat(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTime@KeyframeSequence@@QEAAXI@Z
    void ResetTime(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@KeyframeSequence@@QEAAXXZ
    void Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KeyframeSequence@@QEAA@XZ
    ~KeyframeSequence();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareKeyframes@KeyframeSequence@@CAHPEBX0@Z
    static int CompareKeyframes(void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ
    void RemoveAllKeyFrames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortKeyFrames@KeyframeSequence@@AEAAXXZ
    void SortKeyFrames();
};
