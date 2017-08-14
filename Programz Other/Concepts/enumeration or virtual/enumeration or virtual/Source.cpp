#include<iostream>
using namespace std;
//Solution-B
class Animal
{
public:
	enum EnumType { Cat, Dog, Rat };
	Animal( EnumType type );
	void speak();
private:
	EnumType animalType;
};
void Animal::speak()
{
	switch ( animalType )
	{
		case Cat:
		cout<<";Meeeaaauuun";
		break;
		case Dog:
		cout<<";Baao Baaaaaaoooo";
		break;
		case Rat:
		cout<<";chi een eeeen";
		break;
	}
}
int main()
{
	enum EnumType { Cat, Dog, Rat };
	Animal a(EnumType);
	a(EnumType).speak();
	return 0;
}
