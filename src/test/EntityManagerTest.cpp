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

TEST(EntityTest, addComponentToTupleShouldSetValues)
{
	EntityManager eMan = EntityManager();
	auto e = eMan.addEntity(ENTITY_TAG::TILE);
	e->addComponent<CBoundingBox>(Vec2(6,5));
	ASSERT_EQ(6, e->getComponent<CBoundingBox>().size.getX());
	ASSERT_EQ(5, e->getComponent<CBoundingBox>().size.getY());
}

TEST(EntityTest, removeComponentFromTupleShouldResetValues)
{
	EntityManager eMan = EntityManager();
	auto e = eMan.addEntity(ENTITY_TAG::TILE);
	e->addComponent<CTransform>(Vec2(3,4), Vec2(5,6), Vec2(7,9));
	e->removeComponent<CTransform>();
	ASSERT_EQ(0, e->getComponent<CTransform>().velocity.getX());
	ASSERT_EQ(0, e->getComponent<CTransform>().scale.getY());
}

TEST(EntityTest, checkIfHasComponent)
{
	EntityManager eMan = EntityManager();
	auto e = eMan.addEntity(ENTITY_TAG::TILE);
	e->addComponent<CBoundingBox>(Vec2(3,4));
	ASSERT_TRUE(e->hasComponent<CBoundingBox>());
	e->removeComponent<CBoundingBox>();
	ASSERT_FALSE(e->hasComponent<CBoundingBox>());
}
