#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed the random number generator
    srand(time(0));

    // generate the secret number
    int secret = rand() % 100 + 1;

    // initialize player's guess
    int guess;

    cout << "Guess a number between 1 and 100: ";
    cin >> guess;

    // loop until the player guesses correctly
    while (guess != secret) {
        if (guess < secret) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Too high! Try again: ";
        }
        cin >> guess;
    }

    cout << "Congratulations! You guessed the number!" << endl;

    return 0;
}