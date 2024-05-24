#include "EntityManager.h"

std::shared_ptr<Entity> EntityManager::addEntity(const ENTITY_TAG tag)
{
	m_entityList.erase
	(
		std::remove_if(
			m_entityList.begin(),
			m_entityList.end(),
			[](std::shared_ptr<Entity>& entity){return !entity->isAlive();}
		),
		m_entityList.end()
	);

	auto e = std::shared_ptr<Entity>(new Entity(tag, m_idCount++));
	m_toAdd.push_back(e);
	return e;
};

EntityVector& EntityManager::getEntities()
{
	return m_entityList;
}

EntityVector& EntityManager::getEntities(const ENTITY_TAG tag)
{
	return m_entityMap[tag];
}

void EntityManager::update()
{
	if(m_toAdd.size() > 0)
	{
		for(auto a : m_toAdd)
		{
			m_entityList.push_back(a);
		}
		m_toAdd.clear();
	}
}
