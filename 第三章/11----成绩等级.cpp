#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{ 
   int x,y;
   cout<<"������ɼ�:"; 
   cin>>x;
   cout<<"�ɼ��ȼ�Ϊ:";
   if(x>=90) cout<<"A";
   if((x>=80)&&(x<90)) cout<<"B";   
   if((x>=70)&&(x<80)) cout<<"C";
   if((x>=60)&&(x<70)) cout<<"D";
   if(x<60) cout<<"E";
   return 0;
    
}  
