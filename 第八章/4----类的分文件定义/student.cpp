#include<iostream>
#include<string>
#include"student.h"
using namespace std;
void student::display()
{
	cout<<"num:"<<num<<endl<<"name:"<<name<<endl<<"sex:"<<sex<<endl;
}
void student::set_value()
{
	cout<<"����ѧ��\t����\t�Ա�"<<endl;
	cin>>num; cin>>name; cin>>sex;
}
void pupil::p_display()
{
	display();
	cout<<"age:"<<age<<endl<<"address:"<<address;
}
void pupil::p_set_value()
{
	set_value();
	cout<<"��������\t��ַ"<<endl;
	cin>>age; cin>>address;
}
