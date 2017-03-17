#include <iostream>
#include <string>
#include "Vector.h"

Vector::Vector(double x, double y, double z) {
	x_ = x;
	y_ = y;
	z_ = z;
}

void Vector::print() const {
	std::cout << "\tx = " << x_ << "\nVect: \ty = " << y_ << "\n\tz = " << z_ << std::endl << std::endl;
}

std::string Vector::toString() const {
	std::string result = "vector : (" + std::to_string(x_) + ", " + std::to_string(y_) + ", " + std::to_string(z_) + ")";	

	return result;
}

double Vector::getX() const {
	return x_;
}