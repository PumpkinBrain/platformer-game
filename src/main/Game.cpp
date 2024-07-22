#include "Game.h"

void Game::init()
{
	m_sceneManager.init();
	m_window.create(sf::VideoMode(800,600), "My Window");
	m_window.setFramerateLimit(60);
}

void Game::render()
{
	EntityVector entityVec =
		m_sceneManager.getCurrentScene()->getEntityManager().getEntities();
	for(int i=0; i<entityVec.size(); i++)
	{
		auto e = entityVec[i];
		Vec2 pos = e->getComponent<CTransform>().position;
		sf::CircleShape circ(50);
		circ.setFillColor(sf::Color(0,0,255));
		circ.setPosition(pos.getX(), pos.getY());
		m_window.draw(circ);

		if(e->hasComponent<CBoundingBox>())
		{
			Vec2 bBox = e->getComponent<CBoundingBox>().size;
			sf::RectangleShape rec(sf::Vector2f(bBox.getX(), bBox.getY()));
			rec.setPosition(pos.getX(), pos.getY());
			rec.setFillColor(sf::Color::Transparent);
			rec.setOutlineThickness(5);
			rec.setOutlineColor(sf::Color::Red);
			m_window.draw(rec);
		}
	}
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
