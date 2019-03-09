
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void checker(char&, int);

int main()
{
	char answer, questions_answers[20], grades[] = { 'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B' };
	int counter_number = 1, counter = 0, number = 1, wrong = 0, correct = 0;
	string respond, code_creator = "\nCode created by: \nAndres Rodriguez Toca\n\n";

	cout << "\n\t\t|-----------------------------|\n";
	cout << "\t\t|                             |\n";
	cout << "\t\t|    Driver's Licence Exam    |\n";
	cout << "\t\t|                             |\n";
	cout << "\t\t|-----------------------------|\n\n";

	cout << "\t\tType your answers for each question.\n";
	cout << "\t(Allowed answers ***A-B-C-D*** | No numbers | No Blank Spaces)\n";

	while (counter_number <= 20) {
		cout << counter_number << ". ";
		cin >> answer;
		checker(answer, counter_number);
		questions_answers[counter] = answer;
		counter++;
		counter_number++;
		if (counter == 20) {
			for (int i = 0; i < 20; i++) {
				if (questions_answers[i] != grades[i]) {
					wrong++;
				}
				else {
					correct++;
				}
			}
			cout << "\n***********************";
			cout << "\n\nQuestions Wrong: " << wrong << "\n";
			cout << "Questions Correct: " << correct << "\n\n\n";
			for (int o = 0; o <= 19; o++) {
				if (questions_answers == grades) {
					respond = "CORRECT!!!\n";
				}
				else {
					respond = "INCORRECT.\n";
				}
				cout << number << ". You Answer: " << questions_answers[o] << "\t Correct Answer: " << grades[o] << "\n";
				number++;
			}
			if (counter == 20) {
				if (correct >= 15) {
					cout << "\n\n\n*****Congratulations you pass the Exam!!!*****\n\n";
					cout << code_creator;
				}
				else
				{
					cout << "\n\n\n*****Sorry, you didn't pass. Try Again.*****\n\n";
					cout << code_creator;
				}
			}
		}
	}
}

// Check if the value answers it's allowed
void checker(char& answer, int counter_number) {
	char answer_letters[] = { 'A','B','C','D' };
	int counter = 0;

	while (answer != answer_letters[counter]) {
		counter++;
		if (counter == 4) {
			cout << "Letter incorrect try again. (A-B-C-D)\n";
			cout << counter_number << ". ";
			cin >> answer;
			counter = 0;
		}
	}
	counter = 0;
	
}