#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/UnityEngine/Transform.h"


namespace UnityEngine {
    struct RectTransform : ILClass<RectTransform> {
        struct Fields : UnityEngine::Transform::Fields {

        };
    };
}

namespace System::Collections::Generic {
    struct List$$RectTransform : List<List$$RectTransform, UnityEngine::RectTransform> {
        static inline StaticILMethod<0x039cc478, UnityEngine::RectTransform> Method$$Add {};
    };
}
