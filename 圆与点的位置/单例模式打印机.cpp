#include<string>
#include <iostream>
using namespace std;
class Print
{
private:
	Print() {
		cout << "�ҵ����˹��캯��" << endl;
	}
	Print(const Print& p) {}
public:
	//get��������ȡ�������
	static Print* getInstance()
			{
		return singlePrint;
	}
	//
	void print(string s) 
	{
		cout << s << endl;
	}
private:
	static Print* singlePrint;//����һ����̬  Print���͵�ָ��
};
Print* Print::singlePrint = new Print;//���������������ʼ��
void test01()
{
	Print* dayin = Print::getInstance();
	dayin->print("hhhh");
    Print* hehe = Print::getInstance();
	hehe->print("shenmedongxi");
	dayin->print("�ӳټ���");
}
int main()
{
	test01();
}