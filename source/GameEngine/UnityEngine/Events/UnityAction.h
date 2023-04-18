#pragma once

#include "GameEngine/il2cpp.h"
#include "GameEngine/il2cpp-api.h"
#include "GameEngine/System/MulticastDelegate.h"

namespace UnityEngine::Events {
    // TODO: template this class maybe?
    struct UnityAction : ILClass<UnityAction> {
        struct Fields : System::MulticastDelegate::Fields {

        };

        template <typename T, typename... Args>
        inline void ctor(T* owner, ILMethod<T, Args...>& mi) {
            ctor(owner, *mi);
        }

        inline void ctor(void* owner, MethodInfo* mi) {
            external<void>(0x026adeb0, this, owner, mi);
        }

        // DEBUGGING PURPOSES ONLY
        inline uintptr_t getMethodPtrForDebug() {
            return this->instance()->fields.method_ptr - exl::util::modules::GetTargetStart();
        }
    };
}
