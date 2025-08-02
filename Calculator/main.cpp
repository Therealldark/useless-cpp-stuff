#include <iostream>

using namespace std;

int main()
{
    float choice,a,b;
    cout << "Welcome to the calculator, Please choose a operator:\n1.Add\n2.Minus\n3.Multiply\n4.Divide"<<endl;
    cin>>choice;
    if(choice == 1){
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Your answer is "<<a+b;
    }
    else if(choice == 2){
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Your answer is "<<a-b;
    }
    else if(choice == 3){
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Your answer is "<<a*b;
    }
    else if(choice == 4){
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Your answer is "<<a/b;
    }
    return 0;
}
