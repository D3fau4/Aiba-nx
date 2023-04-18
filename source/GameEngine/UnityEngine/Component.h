#pragma once

#include "GameEngine/il2cpp.h"
#include "GameEngine/UnityEngine/_Object.h"
#include "GameEngine/System/Collections/Generic/List.h"
#include "GameEngine/System/Type.h"
#include "GameEngine/System/_Object.h"

namespace System::Collections::Generic {
    struct List$$Component;
}

namespace UnityEngine::UI {
    struct HorizontalLayoutGroup;
}

namespace Dpr::UI {
    struct SettingMenuItem;
    struct UIText;
}

namespace UnityEngine {
    struct Transform;
    struct RectTransform;

    struct Component : ILClass<Component, 0x039c2528> {
        struct Fields : public UnityEngine::_Object::Fields {

        };

        static inline StaticILMethod<0x04c66970, UnityEngine::UI::HorizontalLayoutGroup> Method$$HorizontalLayoutGroup$$GetComponent {};
        static inline StaticILMethod<0x04c66918, UnityEngine::RectTransform> Method$$RectTransform$$GetComponent {};

        template <typename T>
        inline T::Object* GetComponent() {
            return GetComponent(T::getClass());
        }

        template <typename T>
        inline T::Object* GetComponent(T::Class* type) {
            System::RuntimeTypeHandle::Object handle {};
            handle.fields.value = &type->_1.byval_arg;
            return external<typename T::Object*>(0x00b19c90, this, System::Type::GetTypeFromHandle(handle));
        }

        template <typename T>
        inline T::Object* GetComponent(ILMethod<T>& method) {
            return external<typename T::Object*>(0x012cc550, this, *method);
        }

        void GetComponents(System::Type* type, System::Collections::Generic::List$$Component* results) {
            external<void>(0x00b1a790, this, type, results);
        }

        UnityEngine::Transform* get_transform() {
            return external<UnityEngine::Transform*>(0x00b199d0, this);
        }
    };
}

namespace System::Collections::Generic {
    struct List$$Component : List<List$$Component, UnityEngine::Component> {

    };
}
