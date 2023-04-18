#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems {
    struct UIBehaviour : ILClass<UIBehaviour> {
        struct Fields : UnityEngine::MonoBehaviour::Fields {

        };
    };
}
