#pragma onces
#include <iostream>
using namespace std;

class MyString
{   
	//全局函数
	friend ostream& operator<<(ostream& cout, MyString& str);
	friend istream& operator>>(istream& cin, MyString& s);
public:
	
	MyString(const char* str);
	MyString(const MyString& str);

	//局部函数
	MyString& operator=(const char* a);
	MyString& operator=(const MyString& s);
	char& operator[](int index);

	~MyString();

private:
	char* pString;
	int m_Size;
};
ostream& operator<<(ostream&cout,MyString & str);