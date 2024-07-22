#ifndef GAME_H
#define GAME_H

#include "SceneManager.h"

class Game
{
	SceneManager m_sceneManager;	
	sf::RenderWindow m_window;	

	public:
		void init();
		void input();
		void render();
		void run();
};

#endif
