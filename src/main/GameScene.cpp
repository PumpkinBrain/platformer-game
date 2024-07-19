#include "GameScene.h"
#include <string>

void GameScene::init(const std::string& file)
{
	auto e = m_entityManager.addEntity(ENTITY_TAG::PLAYER);
	e->addComponent<CTransform>(Vec2(100,50), Vec2(5,5), Vec2(1,1));
	e->addComponent<CBoundingBox>(Vec2(5,5));
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
