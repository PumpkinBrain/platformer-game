#include "Vec2.h"
#include <cmath>

double Vec2::length() const
{
	if(m_x != 0 && m_y != 0)
	{
		double xSqr = m_x * m_x;
		double ySqr = m_y * m_y;
		return sqrt(xSqr + ySqr);
	} else {
		return m_x==0?m_y:m_x;
	} 
	return 0;
}

Vec2 Vec2::normalize() const
{
	double length = this->length();
	double normX = m_x/length;
	double normY = m_y/length;
	Vec2 normalized(normX, normY);
	return normalized;
}

double Vec2::getX() const
{
	return m_x;
}

double Vec2::getY() const
{
	return m_y;
}

bool Vec2::operator == (const Vec2& rhs) const
{
	return (m_x == rhs.getX() && m_y == rhs.getY())?true:false;
}

Vec2 Vec2::operator + (const Vec2& rhs) const
{
	Vec2 sum(m_x + rhs.getX(), m_y + rhs.getY());
	return sum;
}

Vec2 Vec2::operator - (const Vec2& rhs) const
{
	Vec2 sum(m_x - rhs.getX(), m_y - rhs.getY());
	return sum;
}

Vec2 Vec2::operator / (const Vec2& rhs) const
{
	Vec2 sum(m_x / rhs.getX(), m_y / rhs.getY());
	return sum;
}

Vec2 Vec2::operator * (const Vec2& rhs) const
{
	Vec2 sum(m_x * rhs.getX(), m_y * rhs.getY());
	return sum;
}
