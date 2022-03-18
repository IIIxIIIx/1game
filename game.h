#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"
#include "player.h"

class Game {
public:
	enum GameState { PLAY, GAME_OVER };
	Game();
	void PLAY();
private:
	void check_events();
	void update();
};
