#include "../header_files/Ship.hpp"

Ship::Ship(class Game* game) : Actor(game), _rightSpeed(0.0f), _downSpeed(0.0f)
{
	AnimSpritesComponent* asc = new AnimSpritesComponent(this);
	std::vector<SDL_Texture*> anims = {
		game->getTexture("assets/Ship01.png"),
		game->getTexture("assets/Ship02.png"),
		game->getTexture("assets/Ship03.png"),
		game->getTexture("assets/Ship04.png")
	};
	asc->setAnimTextures(anims);
};

void Ship::updateActor(float deltaTime)
{
	Actor::updateActor(deltaTime);
	Vector2 pos = getPosition();
	pos.x += this->_rightSpeed * deltaTime;
	pos.y += this->_downSpeed * deltaTime;
	if (pos.x < 25.0f)
	{
		pos.x = 25.0f;
	}
	else if (pos.x > 500.0f)
	{
		pos.x = 500.0f;
	}
	if (pos.y < 25.0f)
	{
		pos.y = 25.0f;
	}
	else if (pos.y > 743.0f)
	{
		pos.y = 743.0f;
	}
	setPosition(pos);
};


float Ship::getRightSpeed() const
{
	return this->_rightSpeed;
};

float Ship::getDownSpeed() const
{
	return this->_downSpeed;
};