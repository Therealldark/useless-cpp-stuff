#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main()
{
  int key;
  int a = rand();
  int b = time(0);
  cout<<"Enter a passkey for a more secure password(if you dont want enter 1):";
  cin>>key;
  cout<<"password key:"<<key*a*b;
}
