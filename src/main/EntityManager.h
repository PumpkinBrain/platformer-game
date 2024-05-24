#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <vector>
#include <map>
#include <memory>
#include "Entity.h"

typedef std::vector<std::shared_ptr<Entity>> EntityVector;

class EntityManager
{
	EntityVector m_toAdd;
	EntityVector m_entityList;
	std::map<ENTITY_TAG, EntityVector> m_entityMap;
	size_t m_idCount = 0;

	public:
		EntityManager(){};
		~EntityManager(){};

		std::shared_ptr<Entity> addEntity(const ENTITY_TAG tag);
		EntityVector& getEntities();
		EntityVector& getEntities(const ENTITY_TAG tag);
		void update();
};

#endif
