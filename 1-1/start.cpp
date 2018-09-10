#include <iostream>
#include <fstream>
int main(){
	std::string name;
	std::ofstream out ("data.txt");
	while(std::cin>>name){
		if(name == "end")
			break;
		out<<name<<" 0 0"<<std::endl;
	}
}