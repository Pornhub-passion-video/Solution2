#include<iostream>
using namespace std;
class Person
{
public:
	Person(int m_age)
	{
		this->m_age = m_age;//this ָ����Զָ��ǰ����
	}
	void getm_age()
	{
		cout << "wodenianling        "<<m_age << endl;
	}
	Person & add_Age(Person &p)
	{
		this->m_age += p.m_age;//this ָ�����Զָ��ǰ���ú����Ķ���
		//cout <<" �������"<<this->m_age << endl;
		return *this;
	}
private:
	int m_age;
};
void test01()
{
	Person p1(10);
	p1.getm_age();
}
void test02()
{
	Person p2(10);
	Person p3(10);
	p2.add_Age(p3).add_Age(p3);
    p2.getm_age();

	

}
int main()
{
	//test01();
	test02();
}