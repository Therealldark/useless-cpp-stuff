#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main()
{
    cout << "Welcome to Coin Flip!, We will flip a coin, it might not add up\nto a hundred because the coins are flipped a hundred time each" << endl;
    int a = 100;
    for (int i = 0; i < 1; i++) { cout << "Heads:" << (rand()*time(0) % a) << endl; }
    for (int i = 0; i < 1; i++) { cout << "Tails:" << (rand() * time(0) % a) << endl; }
}