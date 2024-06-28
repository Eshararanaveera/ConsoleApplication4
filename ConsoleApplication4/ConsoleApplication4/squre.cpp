#include "squre.h"
using namespace std;

void squre::setlength(double l) {
	length = l;
}
double squre::getlength() {
	return length;
}
double squre::calcarea() {
	return length * length;
}
