#include "SFML/Graphics.hpp"
#include "game.h"
#include "const.h"
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1600, 800), "SFML Works!");


    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear(Color(0, 220, 0, 0));
        window.display();
    }

    return 0;
}

Game::Game()
{
}

void Game::PLAY()
{
}
