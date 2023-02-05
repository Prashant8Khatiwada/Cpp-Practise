#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// function for printing guesses
void printGuesses(int guesses[], int guess_count)
{
    int n = guess_count;
    for (int i = 0; i < n; i++)
    {

        cout << guesses[i] << "\t"
             << endl;
    }
}
// function for playing game
void play_game()
{
    int guesses[251];
    int guess_count = 0;
    int random = rand() % 251;
    cout << "Guess a Number from (0 - 250)\n";
    while (true)
    {
        int guess;
        cin >> guess;
        guesses[guess_count++] = guess;
        if (guess == random)
        {
            cout << "You Win\n\n";
            break;
        }
        else if (guess < random && random - guess <= 10)
        {
            cout << "Almost there. Go little higher...\n";
        }
        else if (guess < random && random - guess >= 10)
        {
            cout << "Too Low\n";
        }
        else if (guess > random && guess - random <= 10)
        {
            cout << "Almost there. Go little lower...\n";
        }
        else
        {
            cout << "Too High\n";
        }
    }
    printGuesses(guesses, guess_count);
}

// main function
int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. Quit\n1. Play Game\n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thank's for nothing!\n";
            return 0;

        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
}