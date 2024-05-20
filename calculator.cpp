#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char n;
    cout << "enter a and b:";
    cin >> a >> b;
    cout << "enter the operator(+,-,*,/):";
    cin >> n;
    switch (n)
    {
    case '+':
        cout << " sum of " << a << " and " << b << " is: " << a + b << endl;
        break;
    case '-':
        cout << " difference of " << a << " and " << b << " is: " << a - b << endl;
        break;
    case '*':
        cout << " product of " << a << " and " << b << " is: " << a * b << endl;
        break;
    case '/':
        cout << "on dividing " << a << " and " << b << " the quotient is: " << a / b << " and remainder is: " << a % b << endl;
        break;
    default:
        cout << "wrong input!";
    }
}