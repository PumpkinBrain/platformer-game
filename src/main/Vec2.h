#ifndef VEC2_H
#define VEC2_H

class Vec2
{
	double m_x, m_y;
	public:
		Vec2(const double x, const double y):
			m_x(x), m_y(y)
		{};
		~Vec2(){};
		double length() const;
		Vec2 normalize() const;

		double getX() const;
		double getY() const;

		bool operator == (const Vec2& rhs) const;
		Vec2 operator + (const Vec2& rhs) const;
		Vec2 operator - (const Vec2& rhs) const;
		Vec2 operator / (const Vec2& rhs) const;
		Vec2 operator * (const Vec2& rhs) const;
};

#endif
