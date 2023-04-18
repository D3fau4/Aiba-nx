#pragma once

#include "GameEngine/il2cpp-api.h"
#include "GameEngine/UnityEngine/EventSystems/UIBehaviour.h"
#include "GameEngine/UnityEngine/Vector2.h"
#include "GameEngine/UnityEngine/Vector3.h"
#include "GameEngine/UnityEngine/RectTransform.h"
#include "GameEngine/UnityEngine/Bounds.h"
#include "GameEngine/UnityEngine/DrivenRectTransformTracker.h"

namespace UnityEngine::UI {
    struct ScrollRect : ILClass<ScrollRect> {
        struct Fields : UnityEngine::EventSystems::UIBehaviour::Fields {
            UnityEngine::RectTransform::Object* m_Content;
            bool m_Horizontal;
            bool m_Vertical;
            int32_t m_MovementType;
            float m_Elasticity;
            bool m_Inertia;
            float m_DecelerationRate;
            float m_ScrollSensitivity;
            UnityEngine::RectTransform::Object* m_Viewport;
            void* m_HorizontalScrollbar;
            void* m_VerticalScrollbar;
            int32_t m_HorizontalScrollbarVisibility;
            int32_t m_VerticalScrollbarVisibility;
            float m_HorizontalScrollbarSpacing;
            float m_VerticalScrollbarSpacing;
            void* m_OnValueChanged;
            UnityEngine::Vector2::Object m_PointerStartLocalCursor;
            UnityEngine::Vector2::Object m_ContentStartPosition;
            UnityEngine::RectTransform::Object* m_ViewRect;
            UnityEngine::Bounds::Object m_ContentBounds;
            UnityEngine::Bounds::Object m_ViewBounds;
            UnityEngine::Vector2::Object m_Velocity;
            bool m_Dragging;
            bool m_Scrolling;
            UnityEngine::Vector2::Object m_PrevPosition;
            UnityEngine::Bounds::Object m_PrevContentBounds;
            UnityEngine::Bounds::Object m_PrevViewBounds;
            bool m_HasRebuiltLayout;
            bool m_HSliderExpand;
            bool m_VSliderExpand;
            float m_HSliderHeight;
            float m_VSliderWidth;
            UnityEngine::RectTransform::Object* m_Rect;
            UnityEngine::RectTransform::Object* m_HorizontalScrollbarRect;
            UnityEngine::RectTransform::Object* m_VerticalScrollbarRect;
            UnityEngine::DrivenRectTransformTracker::Object m_Tracker;
            UnityEngine::Vector3::Array* m_Corners;
        };
    };
}
