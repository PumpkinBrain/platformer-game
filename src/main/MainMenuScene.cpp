#include "MainMenuScene.h"
#include <string>
#include <iostream>

void MainMenuScene::init(const std::string& file)
{
	auto e = m_entityManager.addEntity(ENTITY_TAG::TILE);
	e->addComponent<CText>(
		"FUCKING AWESOME TITLE"
	);
	double width, height;
	width = sf::VideoMode::getDesktopMode().width;
	height = sf::VideoMode::getDesktopMode().height;
	e->addComponent<CTransform>(
		Vec2(width/8,height/8), 
		Vec2(5,5), 
		Vec2(1,1)
	);
	update();
}

EntityManager MainMenuScene::getEntityManager()
{
	return m_entityManager;
}

void MainMenuScene::handleTrigger(
	sf::Keyboard::Key& key,
	INPUT_TYPE tType
)
{
	if(tType == INPUT_TYPE::KEY_PRESS)
		std::cout<<"Key pressed, code: " << key << std::endl;	
	if(tType == INPUT_TYPE::KEY_RELEASE)
		std::cout<<"Key released, code: " << key << std::endl;	
}

void MainMenuScene::update()
{
	m_entityManager.update();
}
