#ifndef GAME_H
#define GAME_H
#include "GFX/Graphics.h"
#include "Controls/Keyboard.h"


#include <vector>

class Game
{
public:
    Game(Keyboard &kbd);
    ~Game();

    void Tick();

private:
    void Update();
    void Render();
    void Input();

private:
    Graphics cGraphics;
    Keyboard& cKeyboard;
    
};

#endif