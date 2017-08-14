#include<iostream>
using namespace std;
void enterchoice();
int main()
{
	cout<<"------------------>Menu<------------------"<<endl;
	cout<<"To Enter a Digit press 'd' or 'D'"<<endl;
	cout<<"To Enter an Arithmetic Operator press 'a' or 'A'"<<endl;
	cout<<"To Enter a Small letter press 's' or 'S'"<<endl;
	cout<<"To Enter a Capital letter press 'c' or 'C"<<endl;
	cout<<"To Exit press 'e' or 'E'"<<endl;

	cout<<"_________________________________________________"<<endl;

	 enterchoice();
	 return 0;
}

void enterchoice()
{
	char choice_ ;
	cout<<"Enter your choice :";
	cin>>choice_ ;
	cout<<"__________________________________________________"<<endl;

	if (choice_ == 'D' || choice_ == 'd')
	{
		int d ;
		cout<<"Enter a digit :";
		cin>>d;

		if (d==0 || d==1 || d==2 || d==3 ||d==4 || d==5 || d==6 || d==7 || d==8 || d==9)
		{
			cout<<"Yes, it is a digit."<<endl;
		}
		else
		{
			cout<<"NO , it is not a digit."<<endl;
		}
	}
	else if (choice_ == 'A' || choice_ == 'a')
	{
		char d ;
		cout<<"Enter an arithmetic operator :";
		cin>>d;

		if (d=='+' || d=='-' || d=='*' || d=='/' ||d=='^')
		{
			cout<<"Yes, it is an arithmetic operator."<<endl;
		}
		else
		{
			cout<<"NO , it is not an arithmetic operator."<<endl;
			
		}
	}

	else if (choice_ == 'S' || choice_ == 's')
	{
		char d ;
		cout<<"Enter a small letter :";
		cin>>d;

		d = static_cast<int>(d);
		if (d>=97 && d<=122 )
		{
			cout<<"Yes, it is a small digit."<<endl;
			
		}
		else
		{
			cout<<"NO , it is not a small digit."<<endl;
		}
	}

	else if (choice_ == 'c' || choice_ == 'C')
	{
		char d ;
		cout<<"Enter a capital letter :";
		cin>>d;

		d = static_cast<int>(d) ;

		if ( d>=65 && d<=90 )
		{
			cout<<"Yes, it is a capital letter."<<endl;
		}
		else
		{
			cout<<"NO , it is not a capital letter."<<endl;
		}
	}

	else if (choice_ == 'E' || choice_ == 'e')
	{
		cout<<"Your program has been ended."<<endl;
	}

}