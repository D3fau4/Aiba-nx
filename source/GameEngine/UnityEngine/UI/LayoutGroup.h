#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/UnityEngine/EventSystems/UIBehaviour.h"
#include "GameEngine/UnityEngine/Vector2.h"
#include "GameEngine/UnityEngine/Vector3.h"
#include "GameEngine/UnityEngine/RectTransform.h"
#include "GameEngine/UnityEngine/Bounds.h"
#include "GameEngine/UnityEngine/DrivenRectTransformTracker.h"

namespace UnityEngine::UI {
    struct LayoutGroup : ILClass<LayoutGroup> {
        struct Fields : UnityEngine::EventSystems::UIBehaviour::Fields {
            void* m_Padding;
            int32_t m_ChildAlignment;
            UnityEngine::RectTransform::Object* m_Rect;
            UnityEngine::DrivenRectTransformTracker::Object m_Tracker;
            UnityEngine::Vector2::Object m_TotalMinSize;
            UnityEngine::Vector2::Object m_TotalPreferredSize;
            UnityEngine::Vector2::Object m_TotalFlexibleSize;
            System::Collections::Generic::List$$RectTransform::Object* m_RectChildren;
        };
    };
}
