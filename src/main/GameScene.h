#ifndef GAME_SCENE_H
#define GAME_SCENE_H

#include "SceneInterface.h"

class GameScene : public SceneInterface
{
	EntityManager m_entityManager;

	public:
		virtual void init(std::string file);
		virtual EntityManager getEntityManager();			
		virtual void handleTrigger(char input);
		virtual void update();
};

#endif
