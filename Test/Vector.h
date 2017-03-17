#pragma once

class Vector
{
public:
	Vector::Vector(double x = 0.0, double y = 0.0, double z = 0.0);
	void Vector::print() const;
	std::string Vector::toString() const;
	double Vector::getX() const;
private:
	double x_, y_, z_;
};
