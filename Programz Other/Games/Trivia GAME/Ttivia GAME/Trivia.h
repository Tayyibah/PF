#ifndef TRIVIA_H
#define TRIVIA_H
#include<string>
using namespace std;

class Trivia
{
private:
	string Question;
	string optionOne;
	string optionTwo;
	string optionThree;
	string optionFour;
	int correct;
	static const string arr[7];
public:
	Trivia();
	void setQuestion(string Ques);
	void setoptionOne(string opOne);
	void setoptionTwo(string opTwo);
	void setoptionThree(string opThree);
	void setoptionFour(string opFour);
	string getQuestion();
	string getoptionOne();
	string getoptionTwo();
	string getoptionThree();
	string getoptionFour();
	int getCorrect();
	int incrementCorrect();
	char determineCorrect(string option,int i);
	~Trivia();
};
#endif