#include <iostream>

using namespace std;

int main()
{
    int g;
    cout << "Hello, What is your grade percentage" << endl;
    cin>>g;
    if(g>=90&&g<=100){cout<<"You get an A";}
    else if(g>=80&&g<=89){cout<<"You get a B";}
    else if(g>=70&&g<=79){cout<<"You get a C";}
    else if(g>=60&&g<=69){cout<<"You get an D";}
    else if(g>=0&&g<=59){cout<<"You get an F";}
    else {cout<<"There is something wrong";}
    return 0;
}
