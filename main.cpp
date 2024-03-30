#include <iostream>

using namespace std;

int main()
{
  // Declare variables to store the randomly generated number, user's guess, and number of tries
  int num;
  int guess;
  int tries = 0; // Initialize tries to zero

  // Seed the random number generator with the current time
  srand(time(NULL));

  // Generate a random number between 1 and 100
  num = (rand() % 100) + 1;

  // Display the title of the number guessing game
  cout << "*********** NUMBER GUESSING GAME **********\n";

  do
  {
    // Prompt the user to enter a guess between 1 and 100
    cout << "Enter a guess between (1-100): ";
    cin >> guess;
    tries++; // Increment the number of tries

    // Check if the guess is too high, too low, or correct
    if (guess > num)
    {
      cout << "Your guess is too high.\n";
    }
    else if (guess < num)
    {
      cout << "Your guess is too low.\n";
    }
    else
    {
      // Display a congratulatory message if the guess is correct
      cout << "\nCongratulations! You guessed the number in " << tries << " tries!\n\n";
    }
  } while (guess != num);

  // Display the end of the number guessing game
  cout << "*************************************\n";

  // Return 0 to indicate successful execution
  return 0;
}
