// Vector.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Vector.h"


// This is the constructor of a class that has been exported.
// see Vector.h for the class definition
CVector::CVector(double x, double y, double z)
{
	x_ = x;
	y_ = y;
	z_ = z;
    return ;
}

void CVector::print() const {
	std::cout << "\tx = " << x_ << "\nVect: \ty = " << y_ << "\n\tz = " << z_ << std::endl << std::endl;
}

std::string CVector::toString() const {
	std::string result = "vector : (" + std::to_string(x_) + ", " + std::to_string(y_) + ", " + std::to_string(z_) + ")";

	return result;
}

double CVector::getX() const {
	return x_;
}

