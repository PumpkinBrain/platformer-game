#include <gtest/gtest.h>
#include "../main/Vec2.h"
#include "../main/Entity.h"

TEST(Vec2TestsLength, negativeItemsShouldReturnPositiveResult)
{
	Vec2 vec(-2, -5.2);
	ASSERT_DOUBLE_EQ(5.5713553108736482, vec.length());
}

TEST(Vec2TestsLength, ifOneElementIsZeroReturnTheOtherElement)
{
	Vec2 xEqualsZero(0, 15);
	ASSERT_EQ(15, xEqualsZero.length());

	Vec2 yEqualsZero(35, 0);
	ASSERT_EQ(35, yEqualsZero.length());
}

TEST(Vec2TestsLength, ifBothElementsAreZeroReturnZero)
{
	Vec2 allZeroVector(0,0);
	ASSERT_EQ(0, allZeroVector.length());
}

TEST(Vec2TestsNormalize, vectorItemsDividedByLength)
{
	Vec2 xFourYMinusTwo(4,-2);
	Vec2 expectedResult(0.89442719099991586, -0.44721359549995793);
	ASSERT_EQ(expectedResult.getX(), xFourYMinusTwo.normalize().getX());
	ASSERT_EQ(expectedResult.getY(), xFourYMinusTwo.normalize().getY());
}

TEST(Vec2TestsNormalize, vectorMagnitudeShouldBeOne)
{
	Vec2 xFortySevenYMinusThirtySix(47,-36);
	Vec2 normalized = xFortySevenYMinusThirtySix.normalize();
	ASSERT_EQ(1, normalized.length());
}

TEST(Vec2TestsOperator, sumOfVectors)
{
	Vec2 xFiveYThree(5,3);
	Vec2 xSixtyYMinusThree(60,-3);
	Vec2 sum = xFiveYThree + xSixtyYMinusThree;
	Vec2 expectedResult(65,0);

	ASSERT_EQ(expectedResult.getX(), sum.getX());
	ASSERT_EQ(expectedResult.getY(), sum.getY());
}

TEST(Vec2TestsOperator, subtractionOfVectors)
{
	Vec2 xFortyYThirtyThree(40,33);
	Vec2 xTwelveYFiftyOne(12,51);
	Vec2 res(28,-18);
	Vec2 sub = xFortyYThirtyThree - xTwelveYFiftyOne;

	ASSERT_EQ(res.getX(), sub.getX());
	ASSERT_EQ(res.getY(), sub.getY());
}

TEST(Vec2TestsOperator, divisionOfVectors)
{
	Vec2 xFiftyYThirty(50,30);
	Vec2 xTwoYThree(2,3);
	Vec2 res(25,10);
	Vec2 div = xFiftyYThirty / xTwoYThree;

	ASSERT_EQ(res.getX(), div.getX());
	ASSERT_EQ(res.getY(), div.getY());
}

TEST(Vec2TestsOperator, multiplicationOfVectors)
{
	Vec2 xTwoYThree(2,3);
	Vec2 xFourYSeven(4,7);
	Vec2 res(8,21);
	Vec2 mul = xTwoYThree * xFourYSeven;

	ASSERT_EQ(res.getX(), mul.getX());
	ASSERT_EQ(res.getY(), mul.getY());
}
