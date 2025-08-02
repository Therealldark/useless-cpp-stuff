#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main()
{
    int a;
    int b = (rand() * time(0)) % 10;
    cout << "Welcome, Please guess a number from 0 to 10:";
    cin >> a;
    if (a == b) { cout << "You won!, the answer was:"<<b; }
    else if (a != b) {
        if (a > 10 || a < 0) { cout << "Please try again"; }
        else { cout << "The number you guessed is wrong, the right number is:" << b; }
    }
}
