#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/System/RuntimeTypeHandle.h"

namespace System {
    struct Type : ILClass<Type> {
        struct Fields {
//            System::Reflection::MemberInfo::Fields super;  // Empty struct
            System::RuntimeTypeHandle::Object _impl;
        };

        static System::Type::Object* GetTypeFromHandle(System::RuntimeTypeHandle::Object handle) {
            return external<System::Type::Object*>(0x02b194d0, handle);
        }
    };
}
