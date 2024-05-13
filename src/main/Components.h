#ifndef COMPONENTS_H
#define COMPONENTS_H

#include "Vec2.h"

class CBoundingBox
{
	public:
		Vec2 size;

		CBoundingBox(const Vec2 size) :
			size(size)		
		{};
		~CBoundingBox();
};

class CTransform
{
	public:
		Vec2 position;
		Vec2 velocity;
		Vec2 scale;
		
		CTransform(const Vec2 position, const Vec2 velocity, const Vec2 scale) :
			position(position), velocity(velocity), scale(scale)
		{}
		~CTransform(){};
};

#endif
