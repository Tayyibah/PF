#include<iostream>
#include"Trivia.h"
using namespace std;
const string Trivia::arr[7]={"Tayyibah","Girl","Muslim","Lahori","Pakistan","mango","oranges"};

char Trivia::determineCorrect(string option,int i)
{
	if(arr[i]==option)
	{
		cout<<" Correct selected "<<endl;
		return 'T';
	}
}
Trivia::Trivia()
{
	Question=" ";
	optionOne=" ";
	optionTwo=" ";
	optionThree=" ";
	optionFour=" ";
	correct=0;
}
void Trivia::setQuestion(string Ques)
{
	Question=Ques;
}
void Trivia::setoptionOne(string opOne)
{
	optionOne=opOne;
}
void Trivia::setoptionTwo(string opTwo)
{
	optionTwo=opTwo;
}
void Trivia::setoptionThree(string opThree)
{
	optionThree=opThree;
}
void Trivia::setoptionFour(string opFour)
{
	optionFour=opFour;
}
string Trivia::getQuestion()
{
	return Question; 
}
string Trivia::getoptionOne()
{ 
	return optionOne; 
}
string Trivia::getoptionTwo()
{ 
	return optionTwo; 
}
string Trivia::getoptionThree()
{ 
	return optionThree; 
}
string Trivia::getoptionFour()
{ 
	return optionFour;
}
int Trivia::incrementCorrect()
{
	correct=correct+1;
	return correct;
}
Trivia::~Trivia()
{
	Question=" ";
	optionOne=" ";
	optionTwo=" ";
	optionThree=" ";
	optionFour=" ";
	correct=0;
}

int Trivia::getCorrect()
{
	return correct;
}