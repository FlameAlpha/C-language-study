#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	while(1){
	cout<<"��һԪ���η���Ϊ:ax^2+bx+c=0"<<endl<<"������ a,b,c:";
	cin>>a>>b>>c;
	if((pow(b,2)-4*a*c)>0){
	cout<<"X1="<<0.5*(-b+sqrt(pow(b,2)-4*a*c))/a;
    cout<<"X2="<<0.5*(-b-sqrt(pow(b,2)-4*a*c))/a;
    }
    else if((pow(b,2)-4*a*c)==0) cout<<"X1=X2="<<-0.5*b/a;
    else cout<<"�޸�";
	cout<<endl; 
}
	return 0;
}  
