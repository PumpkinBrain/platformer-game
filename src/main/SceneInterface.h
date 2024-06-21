#ifndef SCENE_INTERFACE_H
#define SCENE_INTERFACE_H

#include "EntityManager.h"

public class SceneInterface
{
	public:
		virtual EntityManager getEntityManager();
		virtual void handleTrigger(char input);
		virtual void init(std::string);
		virtual void update();
}

#endif
