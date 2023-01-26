#ifndef BACKGROUNDSPRITECOMPONENT_HPP
# define BACKGROUNDSPRITECOMPONENT_HPP

# include "SpriteComponent.hpp"

class BackgroundSpriteComponent : public SpriteComponent
{
	public:
		BackgroundSpriteComponent(class Actor* owner, int drawOrder = 10);
		~BackgroundSpriteComponent();

		void update(float deltaTime) override;
		void draw(SDL_Renderer* renderer) override;
		void setBGTextures(const std::vector<SDL_Texture*>& textures);
		void setScreenSize(const Vector2& size);
		void setScrollSpeed(float speed);
		float getScrollSpeed() const;
	
	private:
		struct BGTexture
		{
			SDL_Texture*	texture;
			Vector2			offset;
		};
		std::vector<struct BGTexture>	_bgTextures;
		Vector2							_screenSize;
		float							_scrollSpeed;
};



#endif