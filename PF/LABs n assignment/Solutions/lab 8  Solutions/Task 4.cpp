#include<iostream>
using namespace std;
double getlength();
double getwidth();
double getarea(double,double);
void displaydata(double,double,double);


int main()
{
	
	double length = getlength();
	double width = getwidth();
	double area = getarea(length,width);
	displaydata(length , width , area);
	return 0;
}

double getlength()
{
	double length_;
	cout<<"Enter length of rectangle :";
	cin>>length_;

	while (length_<=0)
	{
		cout<<"Enter length greater than zero :";
		cin>>length_;
	}
	return length_;
}

double getwidth()
{
	double width_;
	cout<<"Enter length of rectangle :";
	cin>>width_;

	while (width_<=0)
	{
		cout<<"Enter length greater than zero :";
		cin>>width_;
	}
	return width_;
}

double getarea(double length , double width )
{
	double area_;
	area_= length * width ;
	return area_;
}

void displaydata(double length , double width , double area)
{
	cout<<"Enter length of rectangle :"<<length<<endl;
	cout<<"Enter width of rectangle :"<<width<<endl;
	cout<<"Area of rectangle = "<<area<<endl;
}