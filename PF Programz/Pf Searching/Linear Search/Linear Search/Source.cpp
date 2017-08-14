#include<iostream>
using namespace std;
void showArray(int newArray[],int size)
{
    for (int i = 0; i< size; ++i)
	{
      cout <<" " << newArray[i];
    }
	cout<<endl;
}
int LinearSearch(int arr[],int size,int key)
{
	bool found=false;
	int position=-1;
	int i=0;
	while(i<size&&!found)
	{
		if(arr[i]==key)
		{
			found=true;
			position=i;
		}
		i++;
	}
	return position;
}
int main()
{
	const int SIZE=10;
	int arr[SIZE]={1,2,3,5,6,4,6,5,8};
	cout<<LinearSearch(arr,SIZE,6)<<endl;
	showArray(arr,SIZE);
	return 0;
}