#include <iostream>

using namespace std;

int main()
{
    int h;
    int w;
    short choice;
    cout << "Welcome to the area calculator!, Please choose a shape\n1.Rectangle (or square)\n2.Triangle\n3.Rhombus\n4.Parellelogram" << endl;
    cin>>choice;
    if (choice == 1) {
    cout<<"Please enter height:";
    cin>>h;
    cout<<"Please enter width:";
    cin>>w;
    cout<<"The answer is "<<h*w;
    }
    else if (choice == 2) {
    cout<<"Please enter base length:";
    cin>>w;
    cout<<"Please enter height:";
    cin>>h;
    cout<<"The answer is "<<(w*h)/2;
    }
    else if (choice == 3) {
    cout<<"Please enter the length of the diagonal vertical:";
    cin>>h;
    cout<<"Please enter the length of the diagonal horizontal:";
    cin>>w;
    cout<<"The answer is "<<(h*w)/2;
    }
    else if (choice == 4) {
    cout<<"Please enter the base length:";
    cin>>w;
    cout<<"Please enter the height length:";
    cin>>h;
    cout<<"The answer is "<<h*w;
    }
    else {
        cout<<"Please try again";
    }
    return 0;
}
