#include "Game.h"

void Game::init()
{
	m_sceneManager.init();
	m_window.create(sf::VideoMode(800,600), "My Window");
	m_window.setFramerateLimit(60);
}

void Game::run()
{
	while(m_window.isOpen())
	{
		sf::Event event;
		while(m_window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				m_window.close();
			}
		}

		m_window.clear(sf::Color::Black);

		//input
		//scene-specific systems
		//render
		m_window.display();
	}
}
