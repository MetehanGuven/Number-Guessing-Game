#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int num = 0;
	int guessNum = 0;
	int attempts = 0;
	srand(time(NULL));
	num = rand() % 100;
	while (true)
	{
		cout << " Guess the number: ";
		cin >> guessNum;
		if (guessNum < num)
			cout << " Higher than the number you guessed. " << endl;
		else if (guessNum > num)
			cout << " Lower than the number you guessed. " << endl;
		else {
			cout << " Congratulations. You found the number. "<< endl;
			break;
		}
		attempts++;
	}
	cout << " Number " << num << " Found in " << attempts << " tries. ";

	return 0;
}
