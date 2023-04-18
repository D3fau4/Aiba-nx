#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/UnityEngine/SceneManagement/Scene.h"

namespace UnityEngine::SceneManagement {
    struct SceneManager : ILClass<SceneManager> {
        struct Fields {
            // Seems to be empty
        };

        static inline Scene::Object GetActiveScene() {
            return external<Scene::Object>(0x0124dd00);
        }
    };
}
