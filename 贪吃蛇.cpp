#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;

int x1=0, y1=0; // �������
// ˢ�µ�ǰ��Ļ

inline void Refresh(char q[][22], int grade, int gamespeed,int tall,int x1,int y1){
system("cls"); // ����

int i,j;

cout << endl;

for(i=0;i<22;i++){
cout << '\t';

for(j=0;j<22;j++)
cout<<q[i][j]<<' '; // ���̰��������

if(i==0) cout << "\t�ȼ�Ϊ��" << grade;
if(i==4) cout << "\t�Զ�ǰ��ʱ��";
if(i==6) cout << "\t���Ϊ��" << gamespeed << "ms";
if(i==8) cout << "\tx:"<<x1<<"   y:"<<y1; 
cout<<endl;
}
}
int main(){
system("title _                                                           ̰����-κʿ��                                     _"); 	
system("color 8c");
char tcsQipan[22][22]; // ̰����������һ����ά����(��22*22������ǽ��)

int i,j;
for(i=1;i<=20;i++)
for(j=1;j<=20;j++)
tcsQipan[i][j]=' '; // ��ʼ��̰���������м�հײ���

for(i=0;i<=21;i++)
tcsQipan[0][i] = tcsQipan[21][i] = '*'; //��ʼ��̰������������ǽ��

for(i=1;i<=21;i++)
tcsQipan[i][0] = tcsQipan[i][21] = '*'; //��ʼ��̰������������ǽ��

int tcsZuobiao[2][100]; //�ߵ���������

for(i=0; i<4; i++){
tcsZuobiao[0][i] = 1;
tcsZuobiao[1][i] = i + 1;
}

int head = 3,tail = 0;

for(i=1;i<=3;i++)
tcsQipan[1][i]='\003'; //����

tcsQipan[1][4]='\002'; //��ͷ

srand(time(0));

do{
x1=rand()%20+1;
y1=rand()%20+1;
}while(tcsQipan[x1][y1]!=' ');

tcsQipan[x1][y1]='\003';

cout<<"\n\n\t\t̰������Ϸ������ʼ !"<<endl;//׼����ʼ;;

long start;
int grade = 1, length = 4;
int gamespeed = 500; //ǰ��ʱ����

/*********************����ʱ����**********************/
for(i=3;i>=0;i--){
start=clock();
while(clock()-start<=1000); //��ʱ1000ms

system("cls");//����

if(i>0)
cout << "\n\n\t\t���뵹��ʱ��" << i << endl;

else

Refresh(tcsQipan,grade,gamespeed,tail,x1,y1);

}

/*********************��Ϸ��ʼ����**********************/
int timeover;
char direction = 77; // ��ʼ����£������˶�
int x,y;
while(1){

timeover = 1;
start = clock();
while((timeover=(clock()-start<=gamespeed))/*&&!kbhit)*/);
//����м����»�ʱ�䳬���Զ�ǰ��ʱ��������ֹѭ��

Refresh(tcsQipan,grade,gamespeed,tail,x1,y1);
if(timeover||kbhit()){
getch();
direction = getch();
}//��ü�ֵ 

switch(direction)
{
case 72: 
x= tcsZuobiao[0][head]-1; 
y= tcsZuobiao[1][head];   
break;  // ����
case 80: 
x= tcsZuobiao[0][head]+1; 
y= tcsZuobiao[1][head];   
break;  // ����
case 75: 
x= tcsZuobiao[0][head];   
y= tcsZuobiao[1][head]-1; 
break;  // ����
case 77: 
x= tcsZuobiao[0][head];   
y= tcsZuobiao[1][head]+1; 
break;  // ����
default: break;

}

if(!(direction==72||direction==80||direction==75 ||direction==77))
{ // �����Ƿ����
cout<< "\tGame over!" << endl; return 0;
}

if(tcsQipan[x][y]!=' '&&!(x==x1&&y==y1))
{ // ��ͷ�����������ǽ�� 
cout << "\tGame over!" << endl;return 0;
}

/*****************����**********************/ 
if(x==x1 && y==y1){ 
length ++; // ���ף����ȼ�1
if(length>=8){
length -= 8;
grade ++;
if(gamespeed>=150)
gamespeed = 550 - grade * 50; 
}// �ı��Զ�ǰ��ʱ����

tcsQipan[x][y]= '\002';

tcsQipan[tcsZuobiao[0][head]][tcsZuobiao[1][head]] = '\003';

head = (head+1)%100;

tcsZuobiao[0][head] = x;
tcsZuobiao[1][head] = y;

do
{
x1=rand()%20+1;
y1=rand()%20+1;
}while(tcsQipan[x1][y1]!=' ');

tcsQipan[x1][y1]='\003';

Refresh(tcsQipan,grade,gamespeed,tail,x1,y1);
}

/***********************������*************************/
 
else{

tcsQipan [tcsZuobiao[0][tail]][tcsZuobiao[1][tail]]=' ';
tail=(tail+1)%100;

tcsQipan [tcsZuobiao[0][head]][tcsZuobiao[1][head]]='\003';
head=(head+1)%100;

tcsZuobiao[0][head]=x;
tcsZuobiao[1][head]=y;

tcsQipan[tcsZuobiao[0][head]][tcsZuobiao[1][head]]='\002';
Refresh(tcsQipan,grade,gamespeed,tail,x1,y1);
}
}

return 0;
}

