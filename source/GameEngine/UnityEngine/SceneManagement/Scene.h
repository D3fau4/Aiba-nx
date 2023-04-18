#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/UnityEngine/GameObject.h"

namespace UnityEngine::SceneManagement {
    struct Scene : ILStruct<Scene> {
        struct Fields {
            int32_t m_Handle;
        };

        inline UnityEngine::GameObject::Array* GetRootGameObjects() {
            return external<UnityEngine::GameObject::Array*>(0x0d15830, this);
        }

        inline System::String::Object* get_name() {
            return external<System::String::Object*>(0x0124cff0, this);
        }
    };
}
