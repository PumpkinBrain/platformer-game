#include <gtest/gtest.h>
#include "../main/EntityManager.h"

TEST(EntityManagerTest, updateShouldAddEntitiesToVector)
{
	EntityManager emanager = EntityManager();
	emanager.addEntity(ENTITY_TAG::TILE);
	emanager.addEntity(ENTITY_TAG::TILE);
	emanager.update();
	ASSERT_EQ(2, emanager.getEntities().size());
}

TEST(EntityTest, addComponentToTuple)
{
	EntityManager eMan = EntityManager();
	auto e = eMan.addEntity(ENTITY_TAG::TILE);
	ASSERT_EQ(1, e->getComponent<CBoundingBox>().size.getX());
}
