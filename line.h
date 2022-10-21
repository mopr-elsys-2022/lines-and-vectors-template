#ifndef LINE_H
#define LINE_H

#include "vector.h"

class Line {
    int A, B, C;

public:
    Line(int A = 0, int B = 0, int C = 0) : A(A), B(B), C(C) {}
    Line(const Point p, const Vector& v);
    Line(const Point p1, const Point p2);

	bool parallel(const Line& other);
    bool orthogonal(const Line& other);

	Vector colinear();
    Vector orthogonal();

    Line parallel(const Point p);
    Line orthogonal(const Point p);

    friend std::ostream& operator<<(std::ostream& out, const Line& l)
    {
    	out << l.A << "x + "<< l.B << "y + "<< l.C << " = 0 ";
    	return out;
	}

    friend std::istream& operator>>(std::istream& in, Line& l)
    {
    	in >> l.A;
    	in >> l.B;
    	in >> l.C;
    	return in;
	}
};

#endif