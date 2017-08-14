#include <iostream>
using namespace std;

inline int calculate(int num)//by declaring a function inline ,when it is called ,it actually does not call just replace there with it's code
{
	int x=2;
	x=x*num;
	return x;
}

int main( )
{
	int num=2;
	cout<<calculate(num)<<endl;
   return 0;
}