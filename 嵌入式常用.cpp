#define NDEBUG           //��ֹ���� 
#include<iostream>
#include<cassert> 
using namespace std;

#define PTA 1
#define PTB 2
#define PTC 3

#define PT(X) PT##X      //�ϲ�������

#define str(X) #X        //ת���ַ��� 
int main()
{
	assert(PT(A)>PT(B)); //���� 
	cout<<PT(A)<<endl;   //�ϲ������� 
	cout<<str(x);        //ת���ַ��� 
}
