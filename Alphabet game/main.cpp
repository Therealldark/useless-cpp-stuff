#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"Welcome to the alphabet game, in here you should\nsay all the alphabet in order if you get one wrong you lose!(all of them should be small letter)"<<endl;
for(char a='a';a>=26;a++){
    char b;
    cin>>b;
    if(a!=b){
        cout<<"\nyou lose";
        exit(0);
    }
    else if(a=='z')
        {cout<<"\nyou win";
         exit(0);

    }


}



return 0;
}

