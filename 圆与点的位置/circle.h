#pragma once
#include<iostream>
using namespace std;
#include <point.h>
class Circle
{
public:
	void setC_R(int r);
		/*{
			C_R = r;
		}*/
	void setC_center(Point o);
		/*{
			C_center = o;
		}*/
	int getC_R();
		/*{
			return C_R;
		}*/
	Point getC_center();
	/*{
		return C_center;
	}*/
private:
	int C_R;
	Point C_center;

};