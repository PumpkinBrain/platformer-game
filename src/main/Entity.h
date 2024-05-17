#ifndef ENTITY_H
#define ENTITY_H

#include "Components.h"
#include <cstddef>
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
	CBoundingBox
> ComponentTuple;

class Entity
{
	friend class EntityManager;

	bool m_isAlive = true;
	const size_t m_id;
	const ENTITY_TAG m_tag;
	ComponentTuple m_compTuple;

	Entity(const ENTITY_TAG& tag, const size_t& id);

	public:
		template<typename T>
		T& getComponent()
		{
			return std::get<T>(m_compTuple);
		}

		bool isAlive() const;
		ENTITY_TAG getTag() const;
		void destroy();
};

#endif
