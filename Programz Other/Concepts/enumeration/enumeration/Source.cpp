#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	enum Day{Monday,Tuesday,Wednesday,Thursday,Friday};
	int weekday=Friday;  //Day weekday=Friday; do static_cast<Day>(i) else error ae ga
	int sales[5];
	cout<<weekday<<"  "<<Monday<<"  "<<Tuesday<<"  "<<Wednesday<<"  "<<Thursday<<"  "<<Friday<<endl;
	for(int i=Monday;i<Friday;i++)
	{
		cout<<"On "<<i<<" Sales were ";
		cin>>sales[i];
	}
	for(int i=Monday;i<Friday;i++)
	{
		cout<<"On "<<static_cast<Day>(i)<<" Sales were ";
		cout<<sales[i]<<endl;
	}

	enum Water{boiling=100,freezing=212}temp;
	temp=freezing;
	if(temp==boiling)
		cout<<"Water is boiling"<<endl;
	else
		cout<<"Water is freezing"<<endl;

	return 0;
}