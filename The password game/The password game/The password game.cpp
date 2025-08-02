#include <iostream>
using namespace std;
int main()
{
    char p1;
    int p2;
    string p3;
    cout << "Please enter a letter for password for your new account:";
    cin >> p1;
    if ((int)p1 >= 49 && p1 <= 90) {
     cout << "Now enter numbers for your password:";
     cin >> p2;
     if ((char)p2 == 50) { 
         cout << "Good, now lastly enter a word for your password:";
         cin >> p3;
         if (p3 == "Basher") { cout << "Your password is amazing, its:"<<p1<<p2<<p3; }
         else { cout << "ehh its weak but i will allow it, your password is:" << p1 << p2 << p3; }
     }
     else { cout << "The number must be Capital B in ascii"; }
    }
    else { cout << "The letter should be capital"; }
}