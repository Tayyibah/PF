#include<iostream>
#include<cmath>
using namespace std;
void sum(int,int);
void diff(int,int);
void product(int,int);
void division(int,int);
void power(int,int);

int main()
{
	int num1 , num2;
	cout<<"Enter first number :";
	cin>>num1;
	cout<<"Enter second number :";
	cin>>num2;
	char operation;
	cout<<"Enter operation you want :";
	cin>>operation;

	if ( operation == '+')
	{
		sum(num1,num2);
	}

	else if (operation == '-')
	{
		diff(num1,num2);
	}

	else if (operation == '*')
	{
		product(num1,num2);
	}


	else if (operation == '/')
	{
		division(num1,num2);
	}

	else if (operation == '^')
	{
		power(num1,num2);
	}

	else
	{
		cout<<"Entered operation is unknown."<<endl<<endl;
	}

	return 0;
}

void sum(int num1 , int num2)
{
	int sum;
	sum = num1 + num2 ;
	cout<<"Sum of "<<num1<<" and "<<num2<<" is :"<<sum<<endl<<endl;
}

void diff(int num1 , int num2)
{
	int diff;
	diff = num1 - num2 ;
	cout<<"difference of "<<num1<<" and "<<num2<<" is :"<<diff<<endl<<endl;
}

void product(int num1 , int num2)
{
	int product;
	product = num1 * num2 ;
	cout<<"Product of "<<num1<<" and "<<num2<<" is :"<<product<<endl<<endl;
}

void division(int num1 , int num2)
{
	int division;
	while (num2==0)
	{
		cout<<"Number second is invalid. Enter again:";
		cin>>num2;
		cout<<endl;
	}
	division = num1 / num2 ;
	cout<<"Division of "<<num1<<" and "<<num2<<" is :"<<division<<endl<<endl;
}

void power(int num1 , int num2)
{
	int power;
	power = pow(num1 , num2) ;
	cout<<"Value of " << num1 << " raise to the power " << num2 << " is " << power <<endl<<endl;
}
