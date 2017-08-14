#include <iostream>
using namespace std;

int * arrangingArray(int * arr , int new_size);
int * sortingArray(int *arr, int size);
void swapIndexes(int * arr, int second_index, int third_index);

int main()
{
	int size;
	cout<<"Enter size of array =";
	cin>>size;
	int *arr=new int(size);
	cout<<"Now,please fill this array"<<endl;
	for (int i=0 ;i<size ; ++i)
	{
		cout<<"Enter data =";
		cin>>arr[i];
		cin.ignore();
	}
	int * arr1 =arrangingArray(arr, size);
	cout<<"Array is = "<<endl;
	for ( int i=0 ; i<size ; ++i)
	{
		cout<<arr1[i]<<endl;
	}
	system("pause");
	return 0;
}

int * arrangingArray(int * arr , int size)
{
	int second_index=1;
	int third_index=2;
	int * arr1 =sortingArray(arr, size);
	for (int i=0 ; i < (size-2) ; i+=2)
	{
		swapIndexes(arr, second_index , third_index);
		second_index+=2;
	    third_index+=2;
	}
	return arr1;
}

int *sortingArray(int *arr, int size)
{
	for (int i=0 ; i<size ; ++i)
	{
		for (int j=i+1 ; j<size ; ++j)
		{
			if(arr[j]<arr[i])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return arr;
}

void swapIndexes(int * arr, int second_index, int third_index)
{
	int temp= arr[third_index];	
	arr[third_index]=arr[second_index];
	arr[second_index]=temp;
}