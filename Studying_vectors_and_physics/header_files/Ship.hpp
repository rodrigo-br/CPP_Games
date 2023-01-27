#ifndef SHIP_HPP
# define SHIP_HPP

# include "Actor.hpp"
# include "AnimSpritesComponent.hpp"

class Ship : public Actor
{
	public:
		Ship(class Game* game);
		void updateActor(float deltaTime) override;
		void processKeyboard(const uint8_t* state);
		float getRightSpeed() const;
		float getDownSpeed() const;

	private:
		float _rightSpeed;
		float _downSpeed;
};

#endif