#include "Game.h"

void Game::init()
{
	m_sceneManager.init();
	if(!m_font.loadFromFile("./assets/fonts/pixl.ttf"))
	{
		throw 404;
	}
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
		if(e->hasComponent<CText>())
		{
			sf::Text text;	
			text.setFont(m_font);
			text.setString(e->getComponent<CText>().text);

			if(e->hasComponent<CTransform>())
			{
				auto pos = e->getComponent<CTransform>().position;
				text.setPosition(sf::Vector2f(pos.getX(), pos.getY()));
			}
			m_window.draw(text);
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
