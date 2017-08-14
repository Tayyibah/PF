//hr loop mai sb se choti value 1st mai ae gi
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
void insertionSort(int arr[],int size)
{
	int i,j,key;
	for(int i=1;i<size;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&key<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main()
{
	const int SIZE=10;
	int arr[SIZE]={23,11,3,5,6,4,9,5,9,0};
	insertionSort(arr,SIZE);
	showArray(arr,SIZE);
	return 0;
}