#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/System/String.h"


namespace UnityEngine {
    struct _Object : ILClass<_Object> {
        struct Fields {
            intptr_t m_CachedPtr;
        };

        template <typename T>
        static inline T::Object* Instantiate(T* original) {
            return external<typename T::Object*>(0x0110a750, original);
        }

        System::String::Object* GetName() {
            return external<System::String::Object*>(0x01105140, this);
        }
    };
}
