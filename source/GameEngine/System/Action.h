#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/System/MulticastDelegate.h"

namespace System {
    struct Action : ILClass<Action> {
        struct Fields : System::MulticastDelegate::Fields {

        };
    };
}
