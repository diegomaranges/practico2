#include "stdafx.h"
#include "MathUtils.h"

#include <math.h> // Contain function fabs.

#define Epsilon 0.0001f

namespace cpp_math_utils {

    bool comparefloat(float a, float b) {
        return fabs(a - b) < Epsilon;
    }

    bool comparefloat(float *a, float *b)
    {
        return fabs(*a - *b) < Epsilon;
    }
}
