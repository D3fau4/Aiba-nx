#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/UnityEngine/Component.h"
#include "Vector3.h"


namespace UnityEngine {
    struct Transform : ILClass<Transform> {
        struct Fields : UnityEngine::Component::Fields {

        };

        inline void SetParent(UnityEngine::Transform* parent, bool worldPositionStays) {
            external<void>(0x012655d0, this, parent, worldPositionStays);
        }

        inline void SetSiblingIndex(int32_t index) {
            external<void>(0x01267750, this, index);
        }

        inline int32_t get_childCount() {
            return external<int32_t>(0x01267590, this);
        }

        inline UnityEngine::Transform::Object* GetParent() {
            return external<UnityEngine::Transform::Object*>(0x012652f0, this);
        }

        inline UnityEngine::Transform::Object* GetChild(int32_t index) {
            return external<UnityEngine::Transform::Object*>(0x01267b90, this, index);
        }

        inline UnityEngine::Transform::Object* Find(System::String* name) {
            return external<UnityEngine::Transform::Object*>(0x01267830, this, name);
        }
        
        inline void Translate(UnityEngine::Vector3* translation) {
            external<void>(0x01265990, this, translation);
        }


        // utility functions
        UnityEngine::Transform::Object* GetChild(std::initializer_list<std::int32_t> index) {
            UnityEngine::Transform* transform = this;
            for (int32_t i : index) {
                transform = transform->GetChild(i);
            }
            return transform->instance();
        }

        template <typename T>
        inline T::Object* GetComponent() {
            return this->cast<UnityEngine::Component>()->GetComponent<T>();
        }

        template <typename T>
        inline T::Object* GetComponent(ILMethod<T>& method) {
            return this->cast<UnityEngine::Component>()->GetComponent<T>(method);
        }

        template <typename T>
        inline T::Object* GetComponent(T::Class* klass) {
            return this->cast<UnityEngine::Component>()->GetComponent<T>(klass);
        }
    };
}
