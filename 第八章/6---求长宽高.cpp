#include<iostream>
using namespace std;
class V
{
	private:
		float height;
		float width;
		float length;
	public:
		void value()
		{
			cout<<"�����볤��ߣ�"<<endl;
			cin>>length>>width>>height;
			cout<<"���������Ϊ��"<<length*width*height; 
		}
};
int main()
{
	V v;
	v.value();
return 0;	
}
