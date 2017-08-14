#include<iostream>
using namespace std;
class Pet
{
public:
	void eat() { cout<<"eat"; }
	void speak() { cout<<"speak"; }
	void sleep() { cout<<"sleep"; }
	void sleep(int i) {cout<<"sleep i"; }
};
class Goldfish : Pet
{
public:
	using Pet::eat;
	using Pet::sleep;
};
void main() 
{
	Goldfish bob;
	bob.eat();
	bob.sleep();
	bob.sleep(1);
	Pet *ptr=(Pet*)&bob;
	ptr->speak();
}