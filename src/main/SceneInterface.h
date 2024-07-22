#ifndef SCENE_INTERFACE_H
#define SCENE_INTERFACE_H

#include "EntityManager.h"
#include <SFML/Graphics.hpp>

enum INPUT_TYPE
{
	KEY_PRESS,
	KEY_RELEASE
};

class SceneInterface
{
	public:
		virtual EntityManager getEntityManager() = 0;
		virtual void handleTrigger(
			sf::Keyboard::Key& key,
			INPUT_TYPE
		) = 0;
		virtual void init(const std::string& file) = 0;
		virtual void update() = 0;
};

#endif
