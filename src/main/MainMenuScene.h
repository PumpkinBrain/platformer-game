#ifndef MAIN_MENU_SCENE_H
#define MAIN_MENU_SCENE_H

#include "SceneInterface.h"


class MainMenuScene : public SceneInterface
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
