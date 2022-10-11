#pragma once
#include <iostream>
using namespace std;
namespace Figure1 {
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
}
namespace Figure2 {
	class Circle {
	protected:
		double radius;
		double length;
	public:
		Circle(double r, double l) {
			radius = r;
			length = l;
		}
		void Print() {
			cout << radius << " " << length << endl;
		}
		void Input(double r, double l) {
			radius = r;
			length = l;
		}
	};
}
namespace FiguresCombined {
	using namespace Figure1;
	using namespace Figure2;
	class CircleInRectangle :public Rectangle, public Circle {
	public:
		CircleInRectangle(double AB, double CD, double BC, double AD, double r, double l) :Rectangle(AB, CD, BC, AD), Circle(r, l) {

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
}
