#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x , y = 0 , g = 1;
    srand(time(0));
    x = rand() % 10 + 1;
    cout << "_NUMBER GUESSING GAME_ \n here, you have to guess the number computer already generated \n THE COMPUTER HAS GENERATED A NUMBER BETWEEN 1 TO 10 \n LET'S START THE GAME" << endl;
    while (x != y)
    {
        cout << "\n guess the number:";
        cin >> y;
        if (y > 10)
        {
            cout << "wrong input only guess number between 1 and 10";
        }
        else if (x == y)
        {
            if (g == 1)
            {
                cout << "you guessed the right number in 1 guess only CONGRATULATIONS" << endl;
            }
            else
            {
                cout << "you guessed the right number after " << g << " guesses" << endl;
            }
            break;
        }
        else if (x + 1 == y && x - 1 == y)
        {
            cout << "TOO CLOSE to number try again! try to shift by 1 " << endl;
        }
        else if (y < x)
        {
            cout << "number is quite HIGH than you guessed number try again!" << endl;
        }
        else
        {
            cout << "number is quite LOW than number you guessed,try again!" << endl;
        }
        ++g;
    }
    cout << "\n THANKYOU FOR PLAYING";
}
