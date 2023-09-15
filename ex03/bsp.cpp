#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float denom = ((b.getFloatY() - c.getFloatY())*(a.getFloatX() - c.getFloatX()) + 
		(c.getFloatX() - b.getFloatX())*(a.getFloatY() - c.getFloatY()));
	float x = ((b.getFloatY() - c.getFloatY())*(point.getFloatX() - c.getFloatX()) + 
		(c.getFloatX() - b.getFloatX())*(point.getFloatY() - c.getFloatY())) / denom;
	float y = ((c.getFloatY() - a.getFloatY())*(point.getFloatX() - c.getFloatX()) + 
		(a.getFloatX() - c.getFloatX())*(point.getFloatY() - c.getFloatY())) / denom;
	float z = 1 - x - y;
 
 return 0 <= x && x <= 1 && 0 <= y && y <= 1 && 0 <= z && z <= 1;
}
