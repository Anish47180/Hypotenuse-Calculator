#include <iostream>
#include <cmath>
#define string std::string
#define cin std::cin
#define cout std::cout
#define tan std::tan
#define sin std::sin
#define cos std::cos
#define _USE_MATH_DEFINES
int main()
{
    // variable declaration

    long double length;
    long double anglef;
    long double opposite;
    long double angle;
    long double tanned;
    long double oppositef;
    int restart;

    // console input

    cout << "Enter angle: ";
    cin >> angle;
    cout << "Enter adjacent side: ";
    cin >> length;

    // processing

    anglef = angle / 57.2957795;
    opposite = tan(anglef) * length;

    // console output

    cout << "The side of the opposite is " << opposite << "\n";

    // restart

    cout << "Do you want to find another opposite side of another triangle?\n"
         << "Type 1 for yes or 0 for no";
    cin >> restart;

    if (restart == 0)
    {
        cout << "Bye!";
    }
    else if (restart == 1)
    {
        main();
    }
    else
    {
        cout << "INVALID ARGUMENT";
    }
}