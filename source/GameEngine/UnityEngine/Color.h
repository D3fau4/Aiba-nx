#pragma once

#include "GameEngine/il2cpp-api.h"

namespace UnityEngine {
    struct Color : ILStruct<Color> {
        struct Fields {
            float r;
            float g;
            float b;
            float a;
        };
    };
}
