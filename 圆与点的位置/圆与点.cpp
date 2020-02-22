#include <iostream>
using namespace std;
#include<point.h>
#include<circle.h>
void weizhi(Point p1, Circle c1)
{
	int distance =	(p1.getM_x()-c1.getC_center().getM_x())* (p1.getM_x() - c1.getC_center().getM_x())+(p1.getM_y()-c1.getC_center().getM_y())* (p1.getM_y() - c1.getC_center().getM_y());
	int RR = c1.getC_R() * c1.getC_R();
	if (distance == RR)
		cout << "点在圆上" << endl;
	else if (distance <= RR)
		cout << "点在院内" << endl;
	else
		cout << "点在园外" << endl;
}

int main()
{
	cout << "hello" << endl;
	Point pp1, center;
	Circle cc1;
	pp1.setM_x(10);
	pp1.setM_y(10);
	center.setM_x(0);
	center.setM_y(0);
	cc1.setC_center(center);
	cc1.setC_R(10);
	weizhi(pp1, cc1);

}