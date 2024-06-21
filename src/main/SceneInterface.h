#ifndef SCENE_INTERFACE_H
#define SCENE_INTERFACE_H

#include "EntityManager.h"

class SceneInterface
{
	public:
		virtual EntityManager getEntityManager() = 0;
		virtual void handleTrigger(char input) = 0;
		virtual void init(std::string file) = 0;
		virtual void update() = 0;
};

#endif
