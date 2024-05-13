#ifndef ENTITY_H
#define ENTITY_H

#include "Components.h"
#include "EntityManager.h"
#include <tuple>

enum ENTITY_TAG
{
	PLAYER,
	TILE,
	BULLET,
	MENU_OPTION
};

typedef std::tuple
<
	CTransform,
	CBoundingBox
> ComponentTuple;

class Entity
{
	friend class EntityManager;

	ComponentTuple m_compTuple();
	bool m_isAlive = true;
	const size_t m_id;
	const ENTITY_TAG m_tag;

	Entity(const ENTITY_TAG tag, const size_t id):
		m_tag(tag), m_id(id)
	{};

	public:
		template <typename T> T& getComponent() const;
		template <typename T, typename... TArgs>
			T& addComponent(TArgs&&... mArgs);
		template <typename T> void  removeComponent();
		template <typename T> bool hasComponent() const;
		bool isAlive() const;
		ENTITY_TAG getTag() const;
		void destroy();
};

#endif
