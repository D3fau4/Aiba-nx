#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/UnityEngine/Behaviour.h"

namespace UnityEngine {
    struct MonoBehaviour : ILClass<MonoBehaviour> {
        struct Fields : public UnityEngine::Behaviour::Fields {

        };
    };
}
