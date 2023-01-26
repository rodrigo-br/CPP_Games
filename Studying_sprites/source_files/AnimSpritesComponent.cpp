#include "../header_files/AnimSpritesComponent.hpp"

void AnimSpritesComponent::update(float deltaTime)
{
	SpriteComponent::update(deltaTime);

	if (this->_animTextures.size() > 0)
	{
		this->_currFrame += this->_animFPS * deltaTime;
		while (this->_currFrame >= this->_animTextures.size())
		{
			this->_currFrame -= this->_animTextures.size();
		}
		this->setTexture(this->_animTextures[static_cast<int>(this->_currFrame)]);
	}
};

float AnimSpritesComponent::getAnimeFPS() const
{
	return this->_animFPS;
};

void AnimSpritesComponent::setAnimFPS(float fps)
{
	this->_animFPS = fps;
};
