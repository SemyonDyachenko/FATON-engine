//
// Created by semyon on 03.12.2019.
//

#ifndef MY_OWN_GAME_SFMLWINDOW_H
#define MY_OWN_GAME_SFMLWINDOW_H


#include <SFML/Graphics/RenderWindow.hpp>

#include "../../include/Engine/Core/Event.h"
#include "../../include/Engine/Core/Window.h"


class SFMLWindow : public Engine::Window {
private:
    sf::RenderWindow * window;


    const char* title;

    float width,height;

    bool vertical_sync;

public:
    SFMLWindow(float window_width,float window_height,const char * window_title);

    virtual ~SFMLWindow();

    void Clear(float red = 0,float green = 0,float blue = 0,float alpha =0) override;

    float GetWidth() const override;
    float GetHeight() const override;

    void SetVerticalSync(bool enabled) override;
    bool IsVerticalSyncEnable() const override;

    sf::RenderWindow &GetWindow() const;

    bool PollEvent(Engine::Event & event) override;

    void SetTitle(const char * title) override;

    bool isOpen() const override;


    void Create() override;
};


#endif //MY_OWN_GAME_SFMLWINDOW_H
