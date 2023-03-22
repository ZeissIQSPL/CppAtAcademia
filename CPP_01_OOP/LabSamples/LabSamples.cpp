
#include <iostream>
#include "Point.h"

double sumOfPoints(Point& point1, Point& point2) {
	return point1.x() + point2.x() +
		point1.y() + point2.y();
}

int main()
{
	Point point1;
	cout << point1.toString() << endl;

	Point point2(4, 7);
	cout << point2.toString() << endl;

	Point point3 = point2;
	cout << point3.toString() << endl;
	point3.set_xy(14, 17);
	cout << point2.toString() << endl;
	cout << point3.toString() << endl;

	Point point4;
	point4 = point3;
	cout << point4.toString() << endl;
	point4.set_xy(24, 27);
	cout << point3.toString() << endl;
	cout << point4.toString() << endl;

	cout << sumOfPoints(point3, point4) << endl;

	return 0;
}

