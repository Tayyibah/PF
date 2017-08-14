#include <iostream>
using namespace std;

int main( )
{
	int size=5;
	for(int i=0;i<size;i++)
	{
		if(i==2)
			break;//it break loop only if i is 2
		else
			cout<<"Loop is continueing"<<endl;
	}
	cout<<"\n Do next\n\n";
	for(int i=0;i<size;i++)
	{
		if(i==2)
			continue;//it skip only if i is 2 and continues next incremented loop
		else
			cout<<"Loop is continueing"<<endl;
	}
   return 0;
}