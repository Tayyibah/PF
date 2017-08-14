//hr loop mai do values compare hn gi n swap hn gi
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
void bubbleSort(int arr[],int size)
{
	int swap;
	int temp;
	do
	{
		swap=false;
		for(int i=0;i<size-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				swap=true;
			}
		}
	}while(swap);
}
int main()
{
	const int SIZE=10;
	int arr[SIZE]={23,11,3,5,6,4,9,5,8,0};
	bubbleSort(arr,SIZE);
	showArray(arr,SIZE);
	return 0;
}