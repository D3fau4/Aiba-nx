#pragma once

#include "GameEngine/il2cpp-api.h"

namespace UnityEngine {
    struct Vector3 : ILStruct<Vector3> {
        struct Fields {
            float x;
            float y;
            float z;
        };
    };
}
