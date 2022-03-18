#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"

class Player {
private:
	sf::Sprite sprite;
	sf::Texture texture;
public:
	Player(float x, float y, std::string texture_file_name);
	void draw(sf::RenderWindow& window);
	void update();
};

