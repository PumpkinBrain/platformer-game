#ifndef "COMPONENTS_H"
#define "COMPONENTS_H"

class CBoundingBox
{
	public:
		Vec2 size

		CBoundingBox(Vec2 size) :
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
		
		CTransform(Vec2 position, Vec2 velocity, Vec2 scale) :
			position(position), velocity(velocity), scale(scale)
		{}
		~CTransform(){};
};

#endif
