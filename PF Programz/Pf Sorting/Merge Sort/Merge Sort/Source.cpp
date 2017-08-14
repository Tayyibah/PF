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
int mergeArrays(int arr1[], int size1, int arr2[], int size2, int newArray[])
{
  int i=0, j=0, k=0;
  int newSize = size1+size2;
  while (k<newSize)
  {
	  if(arr1[i]>arr2[j])
	  {
		  newArray[k]=arr1[i];
		  i++;
	  }
	  else 
	  {
		  newArray[k]=arr2[j];
		  j++;
	  }
	  k++;
  }
  while(i<size1)
  {	
	  newArray[k]=arr1[i];
	  i++;
  }
  while(j<size2)
  {
     newArray[k]=arr2[j];
	 j++;
  }
  return k;
}
int main()
{
    const int size1=6;
    const int size=5;
    int arrayA[size1]={1,3,5,7,9,5};
    int arrayB[size]={2,4,6,8,10};
    int newArray[size1+size];
    mergeArrays(arrayA,size1,arrayB,size, newArray);
	showArray(newArray,size1+size);
	return 0;
}
