#pragma once
#include<string>
#include<sstream>	// trabajar con cadenas

using namespace std;

class Point
{
public:
	Point(int _x = 0, int _y = 0): x(_x), y(_y){}
	~Point(){}

	string toString() {
		ostringstream linkchar;
		linkchar << "P(";
		linkchar << x;
		linkchar << ", ";
		linkchar << y;
		linkchar << ")";

		return (linkchar.str());
	}

protected:
	int x, y;
};
