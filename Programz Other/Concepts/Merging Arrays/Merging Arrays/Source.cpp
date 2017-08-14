#include<iostream>
using namespace std;
int mergeArrays(int array1[],int size1,int array2[],int size2, int outArray[]);
int main()
{
    const int size1=8;
    const int size=12;
    int arrayA[size1]={10,25,37,49,50,51,55,60};
    int arrayB[size]={2,5,26,27,29,32,40,45,70,80,90,95};
    int mergedArray[size1+size];
    int len = mergeArrays(arrayA,size1,arrayB,size, mergedArray);
    cout <<"Size of Array : "<< len<<endl;
    for (int i = 0; i< size1+size; ++i)
	{
      cout << mergedArray[i]<<" " ;
    }
	cout <<endl;
}

int mergeArrays(int array1[], int size1, int array2[], int size2, int mergedArray[])
{
  int i=0, j=0, k=0;
  int newSize = size1+size2;
  while (k<newSize)
  {
    if (i==size1){// only left array2, copy it
      for (; j<size2; ++j)
	  { 
        mergedArray[k++] = array2[j];
      }
    }
	else if (j == size2)
	{ // only left array1, copy it
      for (; i<size1; ++i)
	  {
        mergedArray[k++] = array1[i];
      }
    }
    else if (array1[i] > array2[j])
	{ // copy the min value to outArray
      mergedArray[k++] = array2[j++];
    }
	else
	{
      mergedArray[k++] = array1[i++];
    }
  }
  return k;
}