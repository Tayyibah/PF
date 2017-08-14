#include<iostream>
using namespace std;
#include"Set.h"
int main()
{
	Set s;
	s.insert(90);
	s.insert(15);
	s.insert(28);
	s.insert(389);
	cout<<s.getCardinality()<<endl;
	s.print();
	Set s1,s2;
	s1.insert(0);
	s1.insert(1);
	s1.insert(2);
	s1.insert(389);
	s1.print();
	s2.insert(90);
	s2.insert(1);
	s2.insert(28);
	s2.insert(9);
	s2.print();
	s2.calcUnion( s1 );
	s2.calcIntersection( s1);
	s2.calcDifference(s1 );
	s2.calcSymmetricDifference( s1);
	return 0;
}