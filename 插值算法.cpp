#include<iostream>
using namespace std; 
typedef struct data
{
 float x;
 float y;
}Data;//����x�ͺ���ֵy�Ľṹ
Data d[20];//����ʮ������
float f(int s,int t)//ţ�ٲ�ֵ�������Է��ز���
{
 if(t==s+1)
  return (d[t].y-d[s].y)/(d[t].x-d[s].x);
 else
        return (f(s+1,t)-f(s,t-1))/(d[t].x-d[s].x);  
}
float Newton(float x,int count)
{
 int n;
 while(1)
 {
     cout<<"������nֵ(��n�β�ֵ):";//��ò�ֵ����
  cin>>n;
  if(n<=count-1)// ��ֵ�������ô���count��1��
   break;
  else
   system("cls");
 }
//��ʼ��t��y��yt��
 float t=1.0;
 float y=d[0].y;
 float yt=0.0;
//����yֵ
 for(int j=1;j<=n;j++)
 {
  t=(x-d[j-1].x)*t;
  yt=f(0,j)*t;
  //cout<<f(0,j)<<endl;
  y=y+yt;
 }
 return y;
}
float lagrange(float x,int count)
{
 float y=0.0;
 for(int k=0;k<count;k++)//���Ĭ��Ϊcount��1�β�ֵ
 {
  float p=1.0;//��ʼ��p
  for(int j=0;j<count;j++)
  {//����p��ֵ
   if(k==j)continue;//�ж��Ƿ�Ϊͬһ����
   p=p*(x-d[j].x)/(d[k].x-d[j].x);
  }
  y=y+p*d[k].y;//���
 }
 return y;//����y��ֵ
}
int main()
{
 float x,y;
 int count;
 while(1)
 {
  cout<<"������x[i],y[i]�����������ó���20��:";//Ҫ���û�������������
  cin>>count;
  if(count<=20)
   break;//���������Ƿ�Ϸ�
  system("cls");
 }
//��ø�������
 for(int i=0;i<count;i++)
 {
      cout<<"�������"<<i+1<<"��x��ֵ:";
      cin>>d[i].x;
      cout<<"�������"<<i+1<<"��y��ֵ:";
      cin>>d[i].y;
   system("cls");
 }
 cout<<"������x��ֵ:";//��ñ���x��ֵ
 cin>>x;
 while(1)
 {
  int choice=3;
  cout<<"����ѡ��ʹ�����ֲ�ֵ�����㣺"<<endl;
  cout<<"              (0):�˳�"<<endl;
  cout<<"              (1):Lagrange"<<endl;
  cout<<"              (2):Newton"<<endl;
  cout<<"�������ѡ��";
  cin>>choice;//ȡ���û���ѡ����
  if(choice==2)
  {
   cout<<"��ѡ����ţ�ٲ�ֵ���㷽��������Ϊ��";
   y=Newton(x,count);break;//������Ӧ�Ĵ�����
  }
        if(choice==1)
  {
   cout<<"��ѡ�����������ղ�ֵ���㷽��������Ϊ��";
   y=lagrange(x,count);break;//������Ӧ�Ĵ�����
  }
  if(choice==0)
   break;
  system("cls");
  cout<<"�������!!!!"<<endl;
 }
 cout<<x<<"    ,        "<<y<<endl;//������ս��
    
}