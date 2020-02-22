#pragma onces
#include <iostream>
using namespace std;

class MyString
{   
	//ȫ�ֺ���
	friend ostream& operator<<(ostream& cout, MyString& str);
	friend istream& operator>>(istream& cin, MyString& s);
public:
	
	MyString(const char* str);
	MyString(const MyString& str);

	//�ֲ�����
	MyString& operator=(const char* a);
	MyString& operator=(const MyString& s);
	char& operator[](int index);

	~MyString();

private:
	char* pString;
	int m_Size;
};
ostream& operator<<(ostream&cout,MyString & str);