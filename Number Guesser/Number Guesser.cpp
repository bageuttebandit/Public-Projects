#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    system("color 17");
    int number;
    int guess;
    
    srand(time(0));
    number = rand() % 500 + 1;
    
    cout << "I have generated a number. Attempt to guess it! (1-500)" << endl;
    Guess:
    cin >> guess;
    if (guess > number)
    {
              cout << "Your guess is too big." << endl;
              goto Guess;
    }
    else if (guess < number)
    {
              cout << "Your guess is too small." << endl;
              goto Guess;
    }
    else if (guess = number)
    {
              cout << "Correct! Good job!";
              cout << endl;
              cout << endl;
    }
    
    system("pause");
    return 0;
}
