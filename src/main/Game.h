#ifndef GAME_H
#define GAME_H

#include "SceneManager.h"

class Game
{
	SceneManager m_sceneManager;	
	sf::RenderWindow m_window;	
	sf::Font m_font;

	public:
		void init();
		void input();
		void render();
		void run();
};

#endif
