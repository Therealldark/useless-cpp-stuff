#include <iostream>
#include <fstream>
#include <ctime>
#include <chrono>
using namespace std;
int main(int argc, char** argv) 
{
	string story;
	auto now = chrono::system_clock::now();
	time_t now_time = chrono::system_clock::to_time_t(now);
	ofstream outFile ("Diary.txt",ios::app);
	cout<<"Write what happened today"<<endl<<">";
	getline(cin, story);
	outFile<<"\n"<<ctime(&now_time)<< "\n"<<story;
	return 0;
}
