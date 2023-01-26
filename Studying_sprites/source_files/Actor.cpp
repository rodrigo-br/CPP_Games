#include "../header_files/Actor.hpp"

Actor::State Actor::getState() const
{
	return this->_state;
};

const Vector2& Actor::getPosition() const
{
	return this->_position;
};

void Actor::setPosition(const Vector2& pos)
{
	this->_position = pos;
};