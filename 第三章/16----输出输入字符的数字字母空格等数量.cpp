#include<iostream>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{ 
char a;int c[4]={0,0,0,0};
while((a=getchar())!='\n')
{
	if(('A'<=a&&a<='Z')||('a'<=a&&a<='z'))  c[0]++;
	else{
	if('0'<=a&&a<='9')  c[1]++;
	else{
		if(a==' ')  c[2]++;
		else c[3]++;
	}
}
}
cout<<"Ӣ����ĸ��"<<c[0]<<endl<<"���֣�"<<c[1]<<endl<<"�ո�"<<c[2]<<endl<<"������"<<c[3]; 
return 0;
} 
