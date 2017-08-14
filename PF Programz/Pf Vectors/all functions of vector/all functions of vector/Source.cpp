#include<iostream>
#include<vector>
using namespace std;
int main()
{
	const int size=5;
	vector<double>numbers(size,3);
	numbers.push_back(1);//it adds element in the last position of vector n if initial size of vector is end than it extends the size of vector
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(6);
	numbers.push_back(7);
	numbers.push_back(8);
	numbers.push_back(9);
	numbers.push_back(10);
	numbers.push_back(11);
	numbers.push_back(12);
	for(int i=0;i<numbers.size();i++)
	{
		cout<<numbers[i]<<",";
	}
	cout<<'\b'<<endl;
	for(int i=0;i<numbers.size();i++)
	{
		if(numbers[i]==12 && numbers[i]==11)
			numbers.pop_back();//it removes last element from vector
	}
	for(int i=0;i<numbers.size();i++)
	{
		cout<<numbers[i]<<",";
	}
	cout<<'\b'<<endl;
	
	numbers.resize(3,12);
	
	/*int x=numbers.at(12);
	cout<<"Number 12 is at index: "<<x<<endl;
	int y=numbers.at(8);
	cout<<"Number 12 is at index: "<<y<<endl;*/
	if(numbers.empty())
		cout<<"Vector is empty "<<endl;
	else
		cout<<"Vector is not empty "<<endl;

	//numbers.reverse();
	//error
	//it reverses all elements 
	cout<<"Capacity of vector: "<<numbers.capacity()<<endl;
	cout<<"Size of vector: "<<numbers.size()<<endl;
	numbers.clear();
	cout<<"After clearing Capacity of vector: "<<numbers.capacity()<<endl;
	cout<<"After clearing Size of vector: "<<numbers.size()<<endl;
	vector<double>otherVect(size,1);
	numbers.swap(otherVect);
	for(int i=0;i<numbers.size();i++)
	{
		cout<<numbers[i]<<",";
	}
	cout<<'\b'<<endl;
	
	return 0;
}