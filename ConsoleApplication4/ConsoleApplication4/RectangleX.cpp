#include "RectangleX.h"

void RectangleX::setlength(double l1) {
	length = l1;
}
void RectangleX::setwidth(double w1) {
	width = w1;
}

double RectangleX::calcarea() {
	return length * width;
}
