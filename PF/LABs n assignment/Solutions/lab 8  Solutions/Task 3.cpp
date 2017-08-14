#include<iostream>
using namespace std;
int inputnum1();
int inputnum2();
void squareset(int,int);
int main()
{ 
	int num1 , num2;
	num1 = inputnum1();
	num2 = inputnum2();
	if (num1>num2)
	{
		cout<<"Invalid Range as "<<num1<<" is not less than "<<num2 <<endl;
	}
	else
	{
		squareset(num1,num2);
	}
	return 0;
}

int inputnum1()
{
	int num1_;
	cout<<"Enter first number :";
	cin>>num1_;
	return num1_;
}

int inputnum2()
{
	int num2_;
	cout<<"Enter second number :";
	cin>>num2_;
	return num2_;
}

void squareset(int num1 , int num2)
{
	for (int i = num1; i <= num2 ; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cout<<"("<<i<<","<<i*i<<")";
		}
	}
	cout<<endl;
}