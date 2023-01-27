#include "../header_files/BackgroundSpriteComponent.hpp"

void BackgroundSpriteComponent::setScreenSize(const Vector2& size)
{
	this->_screenSize = size;
};

void BackgroundSpriteComponent::setScrollSpeed(float speed)
{
	this->_scrollSpeed = speed;
};

float BackgroundSpriteComponent::getScrollSpeed() const
{
	return this->_scrollSpeed;
};

void BackgroundSpriteComponent::setBGTextures(const std::vector<SDL_Texture*>& textures)
{
	int count = 0;
	for (auto texture : textures)
	{
		struct BGTexture bg;
		bg.texture = texture;
		bg.offset.x = (this->_screenSize.x * count);
		bg.offset.y = 0.0f;
		this->_bgTextures.emplace_back(bg);
		count++;
	}
};

void BackgroundSpriteComponent::update(float deltaTime)
{
	SpriteComponent::update(deltaTime);
	for (auto& bg : this->_bgTextures)
	{
		bg.offset.x += this->_scrollSpeed * deltaTime;
		if (bg.offset.x < -this->_screenSize.x)
		{
			bg.offset.x = (this->_bgTextures.size() - 1) * this->_screenSize.x - 1;
		}
	}
};