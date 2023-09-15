#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	Point(void);
	Point(const int x, const int y);
	Point(const float x, const float y);
	Point(const Point &p);
	~Point();
	Point &operator=(const Point &p);
	float getFloatX(void) const;
	float getFloatY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif