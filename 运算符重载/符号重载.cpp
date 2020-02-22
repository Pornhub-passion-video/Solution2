#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"MyString.h"


using namespace std;

//测试
void test01()
{
	MyString str = "adc";	//不加const会出错？？
	cout << str << endl;
	/*int a = 10;
	cin >> a;*/
	/*cin >> str;
	cout << str << endl;*/
	MyString s2(str);
	MyString s3 = s2;
	s3 = "abs";
	cout << "s3=" << s3 << endl;
	s3[0] = 'e';
	cout << "s3的第一个位置" << s3[0] << endl;
}
int main()
{  
	test01();
	return EXIT_SUCCESS;
}