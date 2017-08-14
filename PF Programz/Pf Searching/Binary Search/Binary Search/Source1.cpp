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
int binarySearch(int arr[],int size,int key)
{
	bool found=false;
	int position=-1;
	int start=0;
	int end=size-1;
	int mid;
	while(!found&&start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==key)
		{
			found=true;
			position=mid;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
		else 
		{
			start=mid+1;
		}
	}
	return position;
}
int main()
{
	const int SIZE=10;
	int arr[SIZE]={1,2,3,5,6,4,9,5,8};
	cout<<binarySearch(arr,SIZE,8)<<endl;
	showArray(arr,SIZE);
	return 0;
}