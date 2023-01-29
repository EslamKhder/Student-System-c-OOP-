#include<iostream>
using namespace std;
void displaySystem(){
	cout<<"\t\t************ Student Management System ************"<<endl;
	cout<<"Please Enter Your Process you need to do !"<<endl;
	cout<<"1 - About Students"<<"\t\t"<<"2 - About Courses"<<endl;
	cout<<"3 - About Teachers"<<"\t\t"<<"4 - Exit"<<endl;
}
void showList(string value){
	cout<<"1 - Add "<<value<<"\t\t"<<"2 - Remove "<<value<<endl;
	cout<<"3 - Edit "<<value<<"\t"<<"4 - Show "<<value<<endl;
	cout<<"5 - Exit"<<endl;
}
int main(){
	
	int process;
	int flag = 0;
	while(true){
		displaySystem();
		cin>>process;
		switch(process){
			case 1:
				showList("Student");
				break;
			case 2:
				showList("Course");
				break;
			case 3:
				showList("Teacher");
				break;
			case 4:
				flag = 1;
				break;
			default:
				cout<<"Invalid Choose"<<endl;
		}
		if(flag == 1){
			break;
		}
	}
}

