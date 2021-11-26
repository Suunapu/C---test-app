#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool isNumber(const string &str)
{
    for (char const &c : str)
    {
        if (std::isdigit(c) == 0)
            return false;
    }
    return true;
}

int main()
{
    string raw_input = "";
    bool is_valid = true;
    int num = 0;
    int guess = 0;
    int tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    cout << "Guess a number between 1 and 100: ";
    do
    {
        cin >> raw_input;
        if (isNumber(raw_input))
        {
            stringstream valid_input(raw_input);
            valid_input >> guess;
            if (guess < num)
            {
                cout << "Guess was too low!";
            }
            else if (guess > num)
            {
                cout << "Guess was too high!";
            }
        }
        else
        {
            cout << "Please enter a number between 1 and 100 as a number.";
        }
    } while (guess != num);
    cout << "";
    cout << "Correct the answer was " << num;
}