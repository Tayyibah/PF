//hr loop mai sb e choti value ,1st index n so on k sath swap ho gi
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
void selectionSort(int arr[],int size)
{
	int minIndex,minValue;
	for(int i=0;i<(size-1);i++)
	{
		minIndex=i;
		minValue=arr[i];
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<minValue)
			{
				minIndex=j;
				minValue=arr[j];
			}
		}
		arr[minIndex]=arr[i];
		arr[i]=minValue;
	}
}
//void selectionSort(int arr[],int size)
//{
//	int temp;
//	for(int i=0;i<size-1;i++)
//	{
//		for(int j=i+1;j<size;j++)
//		{
//			if(arr[i]>arr[j])
//			{
//				temp=arr[j];
//				arr[j]=arr[i];
//				arr[i]=temp;
//			}
//		}
//	}
//}
int main()
{
	const int SIZE=10;
	int arr[SIZE]={23,11,3,5,6,4,9,5,9,0};
	selectionSort(arr,SIZE);
	showArray(arr,SIZE);
	return 0;
}