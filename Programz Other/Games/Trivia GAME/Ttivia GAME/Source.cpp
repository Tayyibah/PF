#include<iostream>
#include"Trivia.h"
using namespace std;
int main()
{
	Trivia T[7];
	T[0].setQuestion("Whats ur name");
	T[0].setoptionOne("Tayyibah");
	T[0].setoptionTwo("Num");
	T[0].setoptionThree("Preet");
	T[0].setoptionFour("Amcil");
	
	T[1].setQuestion("Who are u");
	T[1].setoptionOne("Tayyibah");
	T[1].setoptionTwo("Girl");
	T[1].setoptionThree("Preet");
	T[1].setoptionFour("Amcil");
	
	T[2].setQuestion("What's ur religion ");
	T[2].setoptionOne("Tayyibah");
	T[2].setoptionTwo("Num");
	T[2].setoptionThree("Muslim");
	T[2].setoptionFour("Amcil");
	
	T[3].setQuestion("what's ur city ");
	T[3].setoptionOne("Lahori");
	T[3].setoptionTwo("Num");
	T[3].setoptionThree("Preet");
	T[3].setoptionFour("Amcil");
	
	T[4].setQuestion("Where do u live ");
	T[4].setoptionOne("Pakistan");
	T[4].setoptionTwo("Num");
	T[4].setoptionThree("Preet");
	T[4].setoptionFour("Amcil");
	
	T[5].setQuestion("What's ur favourite summer fruit");
	T[5].setoptionOne("Tayyibah");
	T[5].setoptionTwo("Num");
	T[5].setoptionThree("mango");
	T[5].setoptionFour("Amcil");
	
	T[6].setQuestion("What's ur favourite winter fruit");
	T[6].setoptionOne("Tayyibah");
	T[6].setoptionTwo("Num");
	T[6].setoptionThree("oranges");
	T[6].setoptionFour("Amcil");
	char ch;
	int i=0;
	while(i<7)
	{
		cout<<"Question is "<<endl<<T[i].getQuestion()<<endl;
		cout<<"1)"<<T[i].getoptionOne()<<endl;
		cout<<"2)"<<T[i].getoptionTwo()<<endl;
		cout<<"3)"<<T[i].getoptionThree()<<endl;
		cout<<"4)"<<T[i].getoptionFour()<<endl;
		cout<<"Select option for Question "<< i  <<":";
		cin.get(ch);
		cin.get();
		if(ch=='A' || ch=='a' )
		{
			if(T[i].determineCorrect(T[i].getoptionOne(),i))
				T[i].incrementCorrect();
		}
		else if(ch=='B' || ch=='b')
		{
			if(T[i].determineCorrect(T[i].getoptionTwo(),i))
				T[i].incrementCorrect();
		}
		else if(ch=='C' || ch=='c')
		{
			if(T[i].determineCorrect(T[i].getoptionThree(),i))
				T[i].incrementCorrect();
		}
		else if(ch=='D' || ch=='d')
		{
			if(T[i].determineCorrect(T[i].getoptionFour(),i))
				T[i].incrementCorrect();
		}
		else 
			cout<<"Select Valid option b/w a to d "<<endl;
		i++;
	}

	Trivia T1[7];
	T1[0].setQuestion("Whats ur name");
	T1[0].setoptionOne("Tayyibah");
	T1[0].setoptionTwo("Num");
	T1[0].setoptionThree("Preet");
	T1[0].setoptionFour("Amcil");
	
	T1[1].setQuestion("Who are u");
	T1[1].setoptionOne("Tayyibah");
	T1[1].setoptionTwo("Girl");
	T1[1].setoptionThree("Preet");
	T1[1].setoptionFour("Amcil");
	
	T1[2].setQuestion("What's ur religion ");
	T1[2].setoptionOne("Tayyibah");
	T1[2].setoptionTwo("Num");
	T1[2].setoptionThree("Muslim");
	T1[2].setoptionFour("Amcil");
	
	T1[3].setQuestion("what's ur city ");
	T1[3].setoptionOne("Lahori");
	T1[3].setoptionTwo("Num");
	T1[3].setoptionThree("Preet");
	T1[3].setoptionFour("Amcil");
	
	T1[4].setQuestion("Where do u live ");
	T1[4].setoptionOne("Pakistan");
	T1[4].setoptionTwo("Num");
	T1[4].setoptionThree("Preet");
	T1[4].setoptionFour("Amcil");
	
	T1[5].setQuestion("What's ur favourite summer fruit");
	T1[5].setoptionOne("Tayyibah");
	T1[5].setoptionTwo("Num");
	T1[5].setoptionThree("mango");
	T1[5].setoptionFour("Amcil");
	
	T1[6].setQuestion("What's ur favourite winter fruit");
	T1[6].setoptionOne("Tayyibah");
	T1[6].setoptionTwo("Num");
	T1[6].setoptionThree("oranges");
	T1[6].setoptionFour("Amcil");
	i=0;
	while(i<7)
	{
		cout<<"Question is "<<endl<<T1[i].getQuestion()<<endl;
		cout<<"1)"<<T1[i].getoptionOne()<<endl;
		cout<<"2)"<<T1[i].getoptionTwo()<<endl;
		cout<<"3)"<<T1[i].getoptionThree()<<endl;
		cout<<"4)"<<T1[i].getoptionFour()<<endl;
		cout<<"Select option for Question "<< i  <<":";
		cin.get(ch);
		cin.get();
		if(ch=='A' || ch=='a' )
		{
			if(T1[i].determineCorrect(T1[i].getoptionOne(),i))
				T1[i].incrementCorrect();
		}
		else if(ch=='B' || ch=='b')
		{
			if(T1[i].determineCorrect(T1[i].getoptionTwo(),i))
				T1[i].incrementCorrect();
		}
		else if(ch=='C' || ch=='c')
		{
			if(T1[i].determineCorrect(T1[i].getoptionThree(),i))
				T1[i].incrementCorrect();
		}
		else if(ch=='D' || ch=='d')
		{
			if(T1[i].determineCorrect(T1[i].getoptionFour(),i))
				T1[i].incrementCorrect();
		}
		else 
			cout<<"Select Valid option b/w a to d "<<endl;
		i++;
	}
	if(T[6].getCorrect()>T1[6].getCorrect())
		cout<<"Player one has won "<<endl;
	else if(T[6].getCorrect()<T1[6].getCorrect())
		cout<<"Player two has won "<<endl;
	else if(T[6].getCorrect()==T1[6].getCorrect())
		cout<<"Game tie"<<endl;

	return 0;
}

