#pragma once

#include "GameEngine/UnityEngine/_Object.h"
#include "GameEngine/UnityEngine/Transform.h"

namespace UnityEngine {
    struct GameObject : ILClass<GameObject> {
        struct Fields : UnityEngine::_Object::Fields {

        };

        inline UnityEngine::Transform::Object* get_transform() {
            return external<UnityEngine::Transform::Object*>(0x00b199d0, this);
        }
    };
}
