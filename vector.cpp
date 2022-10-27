#include "vector.h"

// TODO - constructs vector from 2 points
Vector::Vector(const Point p1, const Point p2) {}

// TODO - returns the sum of two vectors (which is also e vector)
Vector Vector::sum(const Vector& other) const {}

// TODO - returns the product of a vector and a number (which is also e vector)
Vector Vector::times_num(int num) const {}

// TODO - returns a boolean value, answering the question whether the current 
// vector and another ("other") are collinear
bool Vector::is_colinear(const Vector& other) const {}

// TODO - returns the length of the current vector
double Vector::length() const {}

// TODO - returns the dot(scalar) product of the current vector and another
int Vector::dot_product(const Vector& other) const {}

// TODO - finds the area of a triangle given two vectors denoting two of its sides
int area(const Vector v1, const Vector v2) {}
