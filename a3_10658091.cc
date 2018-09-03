#include <iostream>

using namespace std;

int main()
{
	int score;

	cout << "What is the score?: ";
	cin >> score;
	cout << score << endl;

	if (score >=80) {
		if (score >=90 && score == 100) {
			cout << "You are amazing! You got an A+! Keep up the great work!\n";
		}
		else {
			cout << "You got an A!\n";
		}
	}
	else if (score >= 70 && score <= 79) {
		cout << "You got a B.\n";
	}
	else if (score >= 60 && score <= 69) {
		cout << "You got a C. Need more learning!\n";
	}
	else if (score >= 50 && score <= 59) {
		cout << "You got a D! You had a credit score!\n";
	}
	else if (score >= 40 && score <= 49) {
		cout << "You got an E! You barely passed!\n";
	}
	else if (score < 40) {
		cout << "You got an F! You failed...\n";
	}
    return 0;
}
