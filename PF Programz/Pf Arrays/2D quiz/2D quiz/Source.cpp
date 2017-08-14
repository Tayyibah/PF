#include<iostream>
using namespace std;
void display (int * p,int N)
{
	for(int i=0;i<N;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
}
void display(char *s)
{
	cout<<s<<endl;
}
int main()
{
	char char1D[10]="PAKISTAN";
	char char2D[4][10]={"hello","bye","wow","BSE"};
	int int1D[4]={1,2,3,4};
	int int2D[3][4]={{10,20,15,5},
	                 {56,23,45,12},
	                 {74,38,45,12}};
	display(int1D,4);//1		1,2,3,4
	display(int2D[1],3);//2		56,23,45
	display(int2D[1],4);//3		56,23,45,12
	display(int2D[0],12);//4	10,20,15,556,23,45,12,74,38,45,12	
	display(&int2D[1][2],6);//5		45,12,74,38,45,12
	display(&int2D[1][2],10);//6		23,45,12,74,38,45,12,garbage,garbage,garbage
	display(char2D[1]);//7		bye
	cout<<&int1D[2]<<endl;//8		address
	cout<<&char1D[5]<<endl;//9		TAN
	cout<<(void*)&char1D[0]<<endl;//10			address
	return 0;
}