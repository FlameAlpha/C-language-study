#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,flag;
    while(1){
	cout<<"���������֣�";
	cin>>a;
	flag=1;
		for(b=2;b<=sqrt(a);b++)
		{
		   if(a%b==0){
		   flag=0;
		   break;
		   }       
		}
		if(flag==1) cout<<a<<"������"; 
		else cout<<a<<"��������";
		cout<<endl;
}
	return 0;
}  
