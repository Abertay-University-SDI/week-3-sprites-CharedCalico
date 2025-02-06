#include "Player.h"




Player::Player(sf::RenderWindow* hwnd, Input* in)
{
	setPosition(500,500);
	setSize(sf::Vector2f(250,250));
	alive = true;
	maxSpeed = 100;
	health = 10;
	setInput(in);
	setWindow(hwnd);
	speed = (0, 0);
	
}


void Player::handleInput(float dt) 
{

	if (input->isPressed(sf::Keyboard::D))
	{
		speed += (0, 10);
	}

	if (input->isPressed(sf::Keyboard::A))
	{
		move(-velocity * dt);
	}






}