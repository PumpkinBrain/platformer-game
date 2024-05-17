#include "Entity.h"

Entity::Entity(const ENTITY_TAG& tag, const size_t& id) :
	m_tag(tag), m_id(id)
{}


bool Entity::isAlive() const
{
	return m_isAlive;
}

ENTITY_TAG Entity::getTag() const
{
	return m_tag;
}

void Entity::destroy()
{
	m_isAlive = false;
}
