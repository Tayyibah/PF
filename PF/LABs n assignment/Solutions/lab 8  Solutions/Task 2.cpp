#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number :";
	cin>>num;
	int counter =2;
	while (counter<num && num%counter!=0)
	{
		counter++;
	}
	if (num==counter)
	{
		cout<<"It is a prime number."<<endl;
	}

	else
	{
		cout<<"Not a prime number."<<endl;
	}
	return 0;
}