#include<string>
#include <iostream>
using namespace std;
class Print
{
private:
	Print() {
		cout << "我调用了构造函数" << endl;
	}
	Print(const Print& p) {}
public:
	//get方法，获取这个例子
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
	static Print* singlePrint;//定义一个静态  Print类型的指针
};
Print* Print::singlePrint = new Print;//类内声明，类外初始化
void test01()
{
	Print* dayin = Print::getInstance();
	dayin->print("hhhh");
    Print* hehe = Print::getInstance();
	hehe->print("shenmedongxi");
	dayin->print("延迟假期");
}
int main()
{
	test01();
}