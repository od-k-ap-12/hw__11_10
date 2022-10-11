#include <iostream>
#include "Header.h"
using namespace std;
using namespace FiguresCombined;
int main() {
	CircleInRectangle cinr(10, 10, 10, 10, 5, 60);
	cout<<cinr.IfPossible();
}