#include<iostream>
using namespace std;
int main()
{
   int a=0,b=14,c,d;
   int a_[15]={0,1,3,4,6,7,8,10,12,13,14,16,17,19,21};
   while(1){
   a=0,b=14;	
   cin>>c;
   while(1){
   	 if(a_[d]>=c) b=d;
     if(a_[d]<=c) a=d;
   	 if(c==a_[a]){ cout<<"�ڵ�"<<a+1<<"λ"; break;}
   	 if(c==a_[b]){ cout<<"�ڵ�"<<b+1<<"λ"; break;}
     d=(b+a)/2;
     if(a_[d]==c){ cout<<"�ڵ�"<<d+1<<"λ"; break;}
   if((b-a)==1){cout<<"������"; break;}
   }
 }
}
