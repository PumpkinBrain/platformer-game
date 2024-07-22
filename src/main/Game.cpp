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

void Game::input()
{
	sf::Event event;
	while(m_window.pollEvent(event))
	{
		if(event.type == sf::Event::Closed)
		{
			m_window.close();
		}

		if(event.type == sf::Event::KeyPressed)
		{
			m_sceneManager.getCurrentScene()->handleTrigger(
				event.key.code,
				INPUT_TYPE::KEY_PRESS
			);
		}

		if(event.type == sf::Event::KeyReleased)
		{
			m_sceneManager.getCurrentScene()->handleTrigger(
				event.key.code,
				INPUT_TYPE::KEY_RELEASE
			);
		}
	}
}
void Game::run()
{
	while(m_window.isOpen())
	{
		m_window.clear(sf::Color::Black);

		//update scene
		m_sceneManager.getCurrentScene()->update();
		//input
		input();
		//scene-specific systems
		//render
		render();
		m_window.display();

	}
}
