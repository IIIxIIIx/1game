#include "SFML/Graphics.hpp"
#include "const.h"
#include "player.h"

Player::Player(float x, float y, std::string texture_file_name) {
    texture.loadFromFile("images/walking-icon-138644.png");
    sprite.setTexture(texture);
    sprite.setPosition(x, y);
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

void Player::update() {

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        sprite.move(-0.1, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        sprite.move(0.1, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        sprite.move(0, 0.1);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        sprite.move(0, -0.1);
    }
}

