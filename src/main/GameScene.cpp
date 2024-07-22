#include "GameScene.h"
#include <string>

void GameScene::init(const std::string& file)
{
	auto e = m_entityManager.addEntity(ENTITY_TAG::PLAYER);
	e->addComponent<CTransform>(Vec2(200,100), Vec2(5,5), Vec2(1,1));
	e->addComponent<CBoundingBox>(Vec2(100,100));
	
	auto a = m_entityManager.addEntity(ENTITY_TAG::TILE);
	a->addComponent<CTransform>(Vec2(300,200), Vec2(5,5), Vec2(1,1));
	a->addComponent<CBoundingBox>(Vec2(100,100));
}

EntityManager GameScene::getEntityManager()
{
	return m_entityManager;
}

void GameScene::handleTrigger(char trigger)
{

}

void GameScene::update()
{
	m_entityManager.update();
}
