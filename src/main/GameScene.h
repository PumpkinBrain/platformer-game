#ifndef GAME_SCENE_H
#define GAME_SCENE_H

#include "SceneInterface.h"


class GameScene : public SceneInterface
{
	EntityManager m_entityManager;

	public:
		virtual void init(const std::string& file);
		virtual EntityManager getEntityManager();			
		virtual void handleTrigger(
			sf::Keyboard::Key&,
			INPUT_TYPE
		);
		virtual void update();
};

#endif
