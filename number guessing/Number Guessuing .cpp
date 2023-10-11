#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned int) time(NULL));
	int Number = (rand() % 30) +1 ;
	int guess = 0;
	do
	{
		cout << "Enter the Guess Between (1-30): ";
		cin >> guess;
		if (guess > Number)
		{
			cout << " Guess lower! "<<endl;
		}
		else if (guess < Number)
		{
			cout << " Guess Higher! "<<endl;
		}
		else
		{
			cout << " You Won "<<endl;
		}
	} while (guess != Number);
	return 0;
}