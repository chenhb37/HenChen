#include<stdio.h>
#include<iostream>

using namespace std;

union Test{
	unsigned int a;
	char b[4];
};

/***
时间去哪儿了
*/
int main()
{ 
	Test a;
	a.b[0]=1;
	a.b[1]=2;
	a.b[2]=4;
	a.b[3]=8;
	printf("%d  %x\n",a.a,a.a);
	printf("%x  %x",a.b[0],a.b[1]);
    
	system("pause");
	return 0;
}