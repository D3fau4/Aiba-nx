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

        static inline StaticILMethod<0x04c71978, System::Collections::Generic::List$$Component> Method$$Component$$Get {};
        static inline StaticILMethod<0x04c8efd8, System::Collections::Generic::List$$Component> Method$$Component$$Release {};

        template <typename L>
        static L::Object* Get(ILMethod<L>& method) {
            return external<typename L::Object*>(0x0254ae10, *method);
        }

        template <typename L>
        static void Release(L* obj, ILMethod<L>& method) {
            return external<void>(0x0254afa0, obj, *method);
        }
    };
}
