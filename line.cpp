#include "line.h"

// TODO - constructs a line given a point and a vector
Line::Line(const Point p, const Vector& v) {}

// TODO - constructs a line given two points
Line::Line(const Point p1, const Point p2) {}

// TODO - checks if two lines a parallel to eachother
bool Line::are_parallel(const Line& other) const {}

// TODO - checks if two lines are orthogonal (perpendicular)
bool Line::is_orthogonal(const Line& other) const {}

// TODO - returns the vector that is colinear to the line
Vector Line::colinear() const {}

// TODO - returns the vector that is orthogonal to the line
Vector Line::orthogonal() const {}

// TODO - returns a line, passing through the point p, that is parallel to the line
Line Line::parallel(const Point p) const {}

// TODO - returns a line, passing through the point p, that is orthogonal to the line
Line Line::orthogonal(const Point p) const {}