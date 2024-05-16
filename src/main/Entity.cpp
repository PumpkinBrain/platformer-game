#include "Entity.h"

template <typename T> T& Entity::getComponent() const
{
	return std::get<T>(m_compTuple);
}

template <typename T, typename... TArgs> T& Entity::addComponent(TArgs&&... mArgs)
{
	auto & component = getComponent<T>();
	component = T(std::forward<TArgs>(mArgs)...);
	component.has = true;
	return component;
}

template <typename T> void Entity::removeComponent()
{
	auto & component = getComponent<T>();
	component.has = false;
	component = T();
}

template <typename T> bool Entity::hasComponent() const
{
	return std::get<T>(m_compTuple).has;
}

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
