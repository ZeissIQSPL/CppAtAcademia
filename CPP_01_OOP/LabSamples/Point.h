#pragma once
#include <iostream>
#include <string>

using namespace std;

class Point
{
private:
	double x_;
	double y_;

public:
	Point() : x_(0.0), y_(0.0) {
		cout << "0-param constructor" << std::endl;
	}
	Point(double x, double y) : x_(x), y_(y) {
		cout << "2-param constructor" << std::endl;
	}
	Point(const Point& point) {
		cout << "copy constructor" << endl;
		this->x_ = point.x_;
		this->y_ = point.y_;
	}

	void set_xy(double x, double y) {
		this->x_ = x;
		this->y_ = y;
	}
	double x()  {
		return x_;
	}
	double y()  {
		return y_;
	}
	string toString() {
		return "{ x: " + to_string(x_)
			+ ", y: " + to_string(y_)
			+ " }";
	}
};