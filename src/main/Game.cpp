#include "Game.h"

void Game::init()
{
	m_sceneManager.init();
	m_window.create(sf::VideoMode(800,600), "My Window");
	m_window.setFramerateLimit(60);
}

void Game::render()
{
	auto e = m_sceneManager.getCurrentScene()->getEntityManager().getEntities()[0];
	Vec2 pos = e->getComponent<CTransform>().position;
	sf::CircleShape circ(50);
	circ.setFillColor(sf::Color(0,0,255));
	circ.setPosition(pos.getX(), pos.getY());
	m_window.draw(circ);

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

		//update scene
		m_sceneManager.getCurrentScene()->update();
		//input
		//scene-specific systems
		//render
		render();
		m_window.display();
	}
}
