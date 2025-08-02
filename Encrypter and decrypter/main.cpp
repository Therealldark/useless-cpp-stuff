#include <iostream>
using namespace std;
 void Encrypt() {
char a1,a2,a3,a4,a5,a6,a7,a8;
cout<<"Please type what you want encrypted(consisted of 8 letters):";
cin>>a1;
cin>>a2;
cin>>a3;
cin>>a4;
cin>>a5;
cin>>a6;
cin>>a7;
cin>>a8;
cout<<"the encrypted word becomes(ascii):"<<endl<<(int)a1<<endl<<(int)a2<<endl<<(int)a3<<endl<<(int)a4<<endl<<(int)a5<<endl<<(int)a6<<endl<<(int)a7<<endl<<(int)a8<<endl;
};
 void Decrypt() {
int a1,a2,a3,a4,a5,a6,a7,a8;
cout<<"Please type what you want decrypted(only 8 letters and\ntype 3 digits of the number and press enter,ascii):";
cin>>a1;
cin>>a2;
cin>>a3;
cin>>a4;
cin>>a5;
cin>>a6;
cin>>a7;
cin>>a8;
cout<<"the decrypted word becomes:"<<(char)a1<<(char)a2<<(char)a3<<(char)a4<<(char)a5<<(char)a6<<(char)a7<<(char)a8;


};
int main()
{
    int choice;
    cout << "Choose: \n1.Encrypt \n2.Decrypt" << endl;
    cin>>choice;
    if(choice == 1) {Encrypt();}
    else if (choice == 2) {Decrypt();}
    else {cout<<"Please try again";}
    return 0;
}
