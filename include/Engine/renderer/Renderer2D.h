//
// Created by semyon on 02.12.2019.
//

#ifndef MY_OWN_GAME_RENDERER2D_H
#define MY_OWN_GAME_RENDERER2D_H

#include "../Camera/Camera.h"
#include "RendererAPI.h"

namespace Engine {

    class Renderer2D {
    public:
        Renderer2D();
        virtual ~Renderer2D();

        static void Init();

        static void createScene(Engine::Camera& camera);
        static void endScene();



    };

    class RenderCommand
    {
    private:
        static RendererAPI *m_RendererAPI;
    public:
        static void Init()
        {
            m_RendererAPI->Init();
        }

        static void Clear()
        {
            m_RendererAPI->Clear();

        }
    };

}


#endif //MY_OWN_GAME_RENDERER2D_H
