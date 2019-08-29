#include "DiemDuong.h";
#include <math.h>

DiemDuong::DiemDuong() {
	this->x = 0;
	this->y = 0;
}

int DiemDuong::getX() {
	return this->x;
}

int DiemDuong::getY() {
	return this->y;
}


void DiemDuong::setX(int x) {
	if (x >= 0) {
		this->x = x;
	}
}

void DiemDuong::setY(int y) {
	if (y >= 0) {
		this->y = y;
	}
}


float DiemDuong::getDistance(DiemDuong B) {
	return sqrt(pow(this->x - B.x, 2) + pow(this->y - B.y, 2));
}

