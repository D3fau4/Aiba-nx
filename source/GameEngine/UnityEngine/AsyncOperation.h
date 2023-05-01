#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/UnityEngine/Component.h"
#include "GameEngine/UnityEngine/YieldInstruction.h"
#include "GameEngine/System/Action/AsyncOperation.h"

namespace UnityEngine {
    struct AsyncOperation : ILClass<YieldInstruction, 0x039c4d10> {
        struct Fields : UnityEngine::YieldInstruction::Fields {
            intptr_t m_Ptr;
            struct System::Action::AsyncOperation::Object* m_completeCallback;
        };
    };
}
