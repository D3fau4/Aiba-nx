#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/System/String.h"

namespace System {
    struct _Object : ILClass<_Object> {
        static inline System::String::Object* ToString(Il2CppObject* obj) {
            return external<System::String::Object*>(0x026d13a0, obj);
        }
    };
}
