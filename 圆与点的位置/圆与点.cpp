#include <iostream>
using namespace std;
#include<point.h>
#include<circle.h>
void weizhi(Point p1, Circle c1)
{
	int distance =	(p1.getM_x()-c1.getC_center().getM_x())* (p1.getM_x() - c1.getC_center().getM_x())+(p1.getM_y()-c1.getC_center().getM_y())* (p1.getM_y() - c1.getC_center().getM_y());
	int RR = c1.getC_R() * c1.getC_R();
	if (distance == RR)
		cout << "����Բ��" << endl;
	else if (distance <= RR)
		cout << "����Ժ��" << endl;
	else
		cout << "����԰��" << endl;
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