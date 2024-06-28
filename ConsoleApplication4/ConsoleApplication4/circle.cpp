#include "circle.h"

using namespace std;

void circle::setRadius(double r) {
	radius = r;
}

double circle::getRadius() {
	return radius;
}
double circle::calcArea() {
	return 22.0 / 7*radius * radius;
}
