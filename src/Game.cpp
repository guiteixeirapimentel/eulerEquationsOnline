#include "Game.h"
#include <iostream>

Game::Game(Keyboard &kbd)
    : cKeyboard(kbd),
      cGraphics(800, 600)
{
    
}

Game::~Game()
{
}

void Game::Tick()
{
    Input();
    Update();

    cGraphics.Init();
    Render();
    cGraphics.Present();
}

void Game::Update()
{
    
}

void Game::Render()
{
   
}

void Game::Input()
{
    Keyboard::KeyEvent ev;
    while ((ev = cKeyboard.PeekAndPopEvent()))
    {
        // do events
    }
}
