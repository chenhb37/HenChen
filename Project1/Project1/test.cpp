#include<stdio.h>
#include<iostream>

using namespace std;

union Test{
	unsigned int a;
	char b[4];
};

/***
ʱ��ȥ�Ķ���
*/
int main()
{ 
	cout<<"hello world"<<endl;
	Test a;
	cout<<"hello world"<<endl; 
	a.b[0]=1;
	a.b[1]=2;
	a.b[2]=4;
	a.b[3]=8;
	printf("%d  %x\n",a.a,a.a);
	printf("%x  %x",a.b[0],a.b[1]);
    
	system("pause");
	cout<<"I want to make some change"<<endl;
	cout<<typeid(sizeof(int)).name()<<endl;
	return 0;
}