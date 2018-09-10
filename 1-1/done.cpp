#include <iostream>
#include <fstream>
using namespace std;
int main(){
	std::ifstream in ("data.txt");
	std::string name;
	while(in>>name){
		cout<<name<<" ";
		int time;
		in>>time;
		cout<<"has in class "<<time<<" time and is ";
		bool t;
		in>>t;
		if(t)
			cout<<"add student."<<endl;
		else
			cout<<"normal student."<<endl;
	}
}