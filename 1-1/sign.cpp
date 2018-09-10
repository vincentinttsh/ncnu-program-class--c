#include <iostream>
#include <fstream>
struct node{
	int time;
	bool inclass = false;
	bool identify;
	std::string name;
}list[100];

int now_people;

int Loading(){
	std::ifstream in ("data.txt");
	int i=0;
	while(in>>list[i].name>>list[i].time>>list[i].identify)
		i++;
	return i;
}

void Sign(){
	std::string name;
	while(1){
		std::cout<<" please input name\n";
		std::cin>>name;
		if(name=="end")
			break;
		bool find;
		int num;
		find =false;
		for(int h=0;h<now_people;h++){
			if(name == list[h].name){
				find=true;
				num=h;
			}
		}
		if(!find){
			std::cout<<"Not find \n Adding\n";
			list[now_people].name = name;
			list[now_people].time = 1;
			list[now_people].identify = 1;
			list[now_people].inclass =1;
			now_people++;
		}
		if(find){
			list[num].time++;
			list[num].inclass=1;
		}
	}
}

void out_data(){
	std::ofstream out ("data.txt");
	for(int i=0; i<now_people;i++){
		if(list[i].inclass)
			out<<list[i].name<<" "<<list[i].time<<" "<<list[i].identify<<std::endl;
	}
}
int main(){
	now_people=Loading();
	Sign();
	out_data();
}