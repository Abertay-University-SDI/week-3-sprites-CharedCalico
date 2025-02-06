#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"


class Player :public GameObject
{

public:

	Player(sf::RenderWindow* hwnd, Input* in);
	void handleInput(float dt) override;
	int health;
	int maxSpeed;
	void setTex(sf::Texture* tex) { pTex = tex; setTexture(pTex); }
	float speed;
private:

	sf::Texture* pTex;




};

