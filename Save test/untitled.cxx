#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	int start;
	cout<<"Welcome to my save test app, testing save files in c++\nif you want to start type 1,if you want to delete the file type 0"\n;
	cin>>start;
	if (start == 1)
	{
	ifstream inFile("save.txt");
	string line;
	char answer;
	getline(inFile, line);
		if (line == "Like")
		 {
			 cout<<"You like syria";
		 }
		else if (line == "No")
		{
			cout<<"You dont like syria";
		}
		else
		 {
			 ofstream onFile("save.txt");
			 cout<<"Do you like syria? (Y/N) :";
			 cin>>answer;
			 if (answer == 'Y') {onFile<<"Like";}
			 else if (answer == 'N') {onFile<<"No";}
			 else {cerr<<"Wrong input";}	 
	     }
	  }
	  else if (start == 0)
	  {
			remove("save.txt");
	  }  
}

