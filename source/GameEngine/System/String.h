#pragma once

#include "GameEngine/il2cpp.h"
#include "GameEngine/il2cpp-api.h"
#include "Primitives.h"
#include "GameEngine/System/Text/Encoding.h"

namespace System {
    struct String : ILClass<String> {
        struct Fields {
            int32_t length;
            int16_t start_char;
        };

        static String::Object* Create(const char* value) {
            return external<String::Object*>(0x006557d0, nullptr, (int8_t*)value);
        }

        static String::Object* Create(const std::string& value) {
            return Create(value.c_str());
        }

        std::string asCString() {
            System::String::Object* str = this->instance();
            System::Text::UTF8Encoding::Object* encoding = System::Text::Encoding::get_UTF8();
            uint32_t size = encoding->GetByteCount(str);
            auto arr = reinterpret_cast<System::Byte_array *>(system_array_new(*(Il2CppClass**)exl::util::modules::GetTargetOffset(0x039beb70), size+1));
            encoding->GetBytes(str, 0, str->fields.length, arr, 0);
            arr->m_Items[size] = 0;
            auto res = std::string((char*)&arr->m_Items[0]);
            return res;
        }
    };
}
