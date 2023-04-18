#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/System/Text/UTF8Encoding.h"

namespace System::Text {
    struct Encoding : ILClass<Encoding> {
        static inline System::Text::UTF8Encoding::Object* get_UTF8() {
            return external<System::Text::UTF8Encoding::Object*>(0x010dd460);
        }
    };
}
