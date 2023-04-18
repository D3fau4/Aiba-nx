#pragma once

#include "GameEngine/il2cpp.h"
#include "GameEngine/UnityEngine/Component.h"
#include "Component.h"

namespace UnityEngine {
    struct Behaviour : ILClass<Behaviour> {
        struct Fields : public UnityEngine::Component::Fields {

        };

        inline void set_enabled(bool value) {
            external<void>(0x00b0f670, this, value);
        }
    };
}
