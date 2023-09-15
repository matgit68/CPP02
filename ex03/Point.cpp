#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const int x, const int y) : x(x), y(y) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &p)  : x(p.x), y(p.y) {}

Point::~Point() {}

Point &Point::operator=(const Point &p) {
	(Fixed) this->x = p.x;
	(Fixed) this->y = p.y;
	return (*this);
}

float Point::getFloatX(void) const {
	return (this->x.toFloat());
}

float Point::getFloatY(void) const {
	return (this->y.toFloat());
}