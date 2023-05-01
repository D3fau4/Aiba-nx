#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/System/MulticastDelegate.h"

namespace System::Action {
    struct AsyncOperation : ILClass<AsyncOperation> {
        struct Fields : System::MulticastDelegate::Fields {

        };
    };
}