#define _CRT_SECURE_NO_WARNINGS
#include"MyString.h"
#include<string>

ostream& operator<<(ostream& cout, MyString& str)
{
	cout << str.pString;
	return cout;// TODO: �ڴ˴����� return ���
}

istream& operator>>(istream& cin, MyString& s)
{
	/*cin >> s.pString;
	return cin;*/// TODO: �ڴ˴����� return ���
	if (s.pString != NULL)
	{
		delete[]s.pString;
		s.pString = NULL;
	}
	
		char buf[1024];
		cin >> buf;

		//s.pString = buf;
		
		s.pString = new char[strlen(buf) + 1];
		strcpy(s.pString, buf);
		return cin;
	

}

MyString::MyString(const char* str)
{
	cout << "�������вι���" << endl;
	this->pString = new char[strlen(str) + 1];//�ַ�������һ������
	strcpy(this->pString, str);
	this->m_Size = strlen(str);

}

MyString::MyString(const MyString& s)
{
	cout << "�����˿�������" << endl;
	this->pString = new char[strlen(s.pString) + 1];
	strcpy(this->pString, s.pString);
	this->m_Size = s.m_Size;
}

MyString& MyString::operator=(const char* a)
{
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}
	this->pString = new char[strlen(a) + 1];
	strcpy(this->pString, a);
	return *this;
}

MyString& MyString::operator=(const MyString& s)
{
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}
	this->pString = new char[strlen(s.pString) + 1];
	strcpy(this->pString, s.pString);
	return *this;
}

char& MyString::operator[](int index)//����ֵ��Ҫ����
{
	return this->pString[index];
}

MyString::~MyString()
{
	//cout << "��������������" << endl;

	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}

}

