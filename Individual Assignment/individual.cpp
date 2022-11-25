#include <iostream>
#include <limits>

using namespace std;

int main()
{

    //////////////// A B
    double a;
    double b;
    cout << "Enter a, b (range): ";

    do {
        while (!(cin >> a >> b)) {
            cout << "Incorrect input. Please input a and b again:\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if  (a > b) cout << "a and b should be > than 0. \nPlease input a and b again: \n";
    } while (a > b);

    ///////////// Step
    double step;
    cout << "Enter step: ";

    do {
        while (!(cin >> step)) {
            cout << "Incorrect input. Please input step again:\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if  (step <= 0) cout << "step should be > than 0. \nPlease input step again: \n";
    } while (step <= 0);


    //////////////// X N
    double x;
    double n;
    cout << "Enter n (n should be more then 2 and int): ";
    do {
        while (!(cin >> n)) {
            cout << "Incorrect input. Please input n again:\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if  (n < 2 || !(n == (int)n)) cout << "n should be > than 2 adn int. \nPlease input n again: \n";
    } while (n < 2 || !(n == (int)n));


    for (x = a; x < b; x += step)
        if (x < 0)
        {
            double sum = 0;

            for (int i = 1; i <= n; i++)
            {
                sum += (i + x) * (i + x);
            }
            cout << "y = " << sum << "\n";
        } 
        else if (x > 0)
        {
            double sum = 0;
            double mlt = 1;

            for (int i = 0; i <= (n - 1); i++)
            {

                for (int j = 1; j <= n; j++)
                {
                    mlt *= ((x + j) / (i + j));
                }
                sum += mlt;
            }
            cout << "y = " << sum << "\n";
            cout << "x = " << x << "\n";
        }
        else if (x == 0) 
        {
            cout << "y = 0";
        }
        else {
            cout << "Try again";
        }
        cout << "x = " << x << "\n";

    }
