#include<iostream>
using namespace std;
void show_array(const int b[], int SIZE);

int main()

{
	const int SIZE=5;
	int a[5] = {1, 2, 3, 4, 5};
	int b[5]= {14, 12, 5, 14, 21};
    memcpy(a, b, SIZE * sizeof(int));
    show_array(a, SIZE);
    return 0;
}
void show_array(const int elemCpd[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
       cout<<elemCpd[i]<<" ";
	cout<<endl;
}
