#include<iostream>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
inline _pow(int a,int b)
{
	int x=1;
	for(;b>0;b--) x=x*a;
	return x;
}
int main()
{ 
   int b=0,x[5],y,a;
   cout<<"�������֣�";
   cin>>y;
   for(a=1;a<=5;a++){
   if((x[a-1]=y%_pow(10,a)/_pow(10,a-1))==0)  break;  
   b++;
   }
   cout<<"λ��Ϊ��"<<b<<endl<<"��������Ϊ��";
   for(a=0;a<b;a++) 
   cout<<x[a]; 
   return 0;
    
}  
