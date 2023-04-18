#pragma once

#include "GameEngine/il2cpp-api.h"

namespace UnityEngine {
    struct Vector2Int : ILStruct<Vector2Int> {
        struct Fields {
            int32_t m_X;
            int32_t m_Y;
        };
    };
}
