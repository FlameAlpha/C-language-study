#include<iostream>
#include<cmath>
using namespace std;
double area(double a,double b,double c)
{
	int s;
	s=(a+b+c)/2;
	return(sqrt(s*(s-a)*(s-b)*(s-c)));
}
int main()
{
	double a,b,c;
	while(1){
	cout<<"������a,b,c:";
	cin>>a>>b>>c;
	cout<<"���������Ϊ:"<<area(a,b,c)<<endl;
}
return 0;
}
