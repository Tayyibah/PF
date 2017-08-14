#include<iostream>
using namespace std;
int main()
{
	const int row=3;
	const int col=6;
	int arr[row][col]={{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6}};
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	cout<<*arr[row*col+col]<<endl;
	cout<<arr[1][1]<<endl;
	cout<<*arr[1*1+1]<<endl;
	return 0;
}