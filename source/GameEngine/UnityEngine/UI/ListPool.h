#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/UnityEngine/EventSystems/UIBehaviour.h"
#include "GameEngine/UnityEngine/Color.h"
#include "GameEngine/UnityEngine/RectTransform.h"
#include "GameEngine/UnityEngine/Vector2.h"

namespace UnityEngine::UI {
    struct ListPool : ILClass<ListPool> {
        struct Fields {

        };

        static inline StaticILMethod<0x039cc220, System::Collections::Generic::List$$Component> Method$$Component$$Get {};
        static inline StaticILMethod<0x039cc238, System::Collections::Generic::List$$Component> Method$$Component$$Release {};

        template <typename L>
        static L::Object* Get(ILMethod<L>& method) {
            return external<typename L::Object*>(0x01537920, *method);
        }

        template <typename L>
        static void Release(L* obj, ILMethod<L>& method) {
            return external<void>(0x01537a20, obj, *method);
        }
    };
}
