#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int cor_num(void){
    int guess_num;
    cin>>guess_num;
}
int main()
{
    int num,guess, tries;
    srand(time(0)); //this will print the different random number since everytime I run the program
    num = rand() % 10;
    
    do
	{
		cout << "Enter a guess between 1 and 9 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

    
    
    
        return 0;
}