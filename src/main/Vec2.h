#ifndef VEC2_H
#define VEC2_H

class Vec2
{
	double m_x, m_y;
	public:
		Vec2(double x, double y):
			m_x(x), m_y(y)
		{};
		~Vec2(){};
		double length();
		Vec2 normalize();

		double getX();
		double getY();

		bool operator == (Vec2& rhs);
		Vec2 operator + (Vec2& rhs);
		Vec2 operator - (Vec2& rhs);
		Vec2 operator / (Vec2& rhs);
		Vec2 operator * (Vec2& rhs);
};

#endif
