#include "line.h"

// TODO - constructs a line given a point and a vector
Line::Line(const Point p, const Vector& v) {}

// TODO - constructs a line given
Line::Line(const Point p1, const Point p2) {}

// TODO - checks if two lines a parallel to eachother
bool Line::are_parallel(const Line& other) {}

// TODO - checks if two lines are orthogonal (perpendicular)
bool Line::is_orthogonal(const Line& other) {}

// TODO - returns the vector that is colinear to the line
Vector Line::colinear() {}

// TODO - returns the vector that is orthogonal to the line
Vector Line::orthogonal() {}

// TODO - returns a line, passing through the point p, that is parallel to the line
Line Line::parallel(const Point p) {}

// TODO - returns a line, passing through the point p, that is orthogonal to the line
Line Line::orthogonal(const Point p) {}