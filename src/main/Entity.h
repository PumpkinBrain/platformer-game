#ifndef ENTITY_H
#define ENTITY_H

#include "Components.h"
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
	ComponentTuple m_compTuple();
	bool m_isAlive = true;
	size_t m_id;
	ENTITY_TAG m_tag;

	Entity(ENTITY_TAG tag):
		m_tag(tag)
	{};

	public:
		template <typename T> T& getComponent();
		template <typename T, typename... TArgs>
			T& addComponent(TArgs&&... mArgs);
		template <typename T> void  removeComponent();
		template <typename T> bool hasComponent();
		bool isAlive();
		ENTITY_TAG getTag();
};

#endif
