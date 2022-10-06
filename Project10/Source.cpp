#include <iostream>
using namespace std;
class Rectangle {
protected:
	double sideAB;
	double sideCD;
	double sideBC;
	double sideAD;
public:
	Rectangle(double AB, double CD, double BC, double AD) {
		sideAB = AB;
		sideCD = CD;
		sideBC = BC;
		sideAD = AD;
	}
	void Print() {
		cout << sideAB << " " << sideCD << " " << sideBC << " " << sideAD << endl;
	}
	void Input(double AB, double CD, double BC, double AD) {
		sideAB = AB;
		sideCD = CD;
		sideBC = BC;
		sideAD = AD;
	}
};
class Circle {
protected:
	double radius;
	double length;
public:
	Circle(double r, double l) {
		radius = r;
		length = l;
	}
};
class CircleInRectangle:public Rectangle, public Circle {
public:
	CircleInRectangle(double AB, double CD, double BC, double AD, double r, double l):Rectangle(AB, CD, BC, AD), Circle(r, l) {

	}
	bool IfPossible() {
		if (sideAB + sideCD == sideBC + sideAD) {
			return 1;
		}
		else {
			return 0;
		}
	}
};
int main() {
	CircleInRectangle cinr(10, 8, 10, 10, 5, 60);
	cout<<cinr.IfPossible();
}