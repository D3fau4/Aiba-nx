#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/System/Delegate.h"

namespace System {
    struct MulticastDelegate : ILClass<MulticastDelegate> {
        struct Fields : System::Delegate::Fields {
            System::Delegate::Array* delegates;
        };
    };
}
