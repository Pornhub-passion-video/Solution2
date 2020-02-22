#pragma once
#include <iostream>
using namespace std;
class Point
{
public:
	void setM_x(int x);
	/*{
		M_x = x;
	}*/
	void setM_y(int y);
	/*{
		M_y = y;
	}*/
	int getM_x();
	int getM_y();
	/*{
		return M_y;
	}*/


private:
	int M_x;
	int M_y;
};