#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <list>
#include <map>
#include <memory>
#include "Entity.h"

typedef std::shared_ptr<Entity> EntityPtr;

class EntityManager
{
	std::list<EntityPtr> m_toAdd;
	std::list<EntityPtr> m_entityList;
	std::map<ENTITY_TAG, std::list<EntityPtr>> m_entityMap;
	size_t m_idCount = 0;

	public:
		EntityManager(){};
		~EntityManager(){};

		EntityPtr addEntity(const ENTITY_TAG tag);
		std::list<EntityPtr>& getEntities();
		std::list<EntityPtr>& getEntities(const ENTITY_TAG tag);
		void update();
};

#endif
