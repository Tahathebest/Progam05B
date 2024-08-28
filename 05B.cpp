// PO5 Fancy Number Guesser.cpp : Put your explanation here.
#include <iostream>
using namespace std;
int main()
{
    int playerGuess = 0;
    int guessCount = 0;
    bool gameOver = 0;
    unsigned int seedTime = static_cast<unsigned int>(time(NULL));
    srand(seedTime);
    int myNumber = rand() % 100;
    cout << "Hello! Guess a number between 1 and 100.\n";
    cin >> playerGuess;
    cout << "You guessed " << playerGuess << ".\n";
    while (!gameOver) 
    {
 
        if (playerGuess < myNumber)
        {
            cout << "Your guess was too low.\n";
        }
        else if (playerGuess > myNumber)
        {
            cout << "Your guess was too high.\n";
        }
        else
        {
            cout << "Wow, you were right!\n";
            gameOver=1;
        }
        cout << "Guess a number between 1 and 100.\n";
        cin >> playerGuess;
        guessCount++;
 
        
      }
    return 0;
}
