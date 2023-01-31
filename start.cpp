#include<iostream>
#include "controller/Controller.cpp"
using namespace std;

void displaySystem(){
	cout<<"\t\t************ Management System ************"<<endl;
	cout<<"Please Enter Your Process you need to do !"<<endl;
	cout<<"1 - About Students"<<"\t\t"<<"2 - About Courses"<<endl;
	cout<<"3 - About Teachers"<<"\t\t"<<"4 - Exit"<<endl;
}
void showList(string value){
	cout<<"\t\t************ "<<value<<" Management System ************"<<endl;
	cout<<"1 - Add "<<value<<"\t\t"<<"2 - Remove "<<value<<endl;
	cout<<"3 - Edit "<<value<<"\t"<<"4 - Show "<<value<<endl;
	cout<<"5 - Exit"<<endl;
}
void addStudent(){
	cout<<"Please Enter Student Data: "<<endl;
	Student student;
	cout<<"Enter Student Name :";
	string name;
	cin>>name;
	student.setName(name);
	cout<<"Enter Student Age :";
	int age;
	cin>>age;
	student.setAge(age);
	cout<<"Enter Student PhoneNumber :";
	string phoneNumber;
	cin>>phoneNumber;
	student.setPhoneNumber(phoneNumber);
	cout<<"Enter Student GPA :";
	double gpa;
	cin>>gpa;
	student.setGpa(gpa);
	StudentController studentController;
	cout<<"Success Added Student With Id ["<<studentController.addStudent(student)<<"]"<<endl;
}
void addCourse(){
	Course course;
	cout<<"Please Enter Course Data: "<<endl;
	cout<<"Enter Course Name :";
	string name;
	cin>>name;
	course.setName(name);
	cout<<"Enter Course hour :";
	double hour;
	cin>>hour;
	course.setHour(hour);
	CourseController courseController;
	cout<<"Success Added Course With Id ["<<courseController.addCourse(course)<<"]"<<endl;
}
void addTeacher(){
	cout<<"Please Enter Teacher Data: "<<endl;
	Teacher teacher;
	cout<<"Enter Teacher Name :";
	string name;
	cin>>name;
	teacher.setName(name);
	cout<<"Enter Teacher Age :";
	int age;
	cin>>age;
	teacher.setAge(age);
	cout<<"Enter Teacher PhoneNumber :";
	string phoneNumber;
	cin>>phoneNumber;
	teacher.setPhoneNumber(phoneNumber);
	cout<<"Enter Teacher Salary :";
	double salary;
	cin>>salary;
	teacher.setSalary(salary);
	TeacherController teacherController;
	cout<<"Success Added Teacher With Id ["<<teacherController.addTeacher(teacher)<<"]"<<endl;
}
int process;
int main(){
	int flag = 0;
	while(true){
		displaySystem();
		cin>>process;
		switch(process){
			case 1:
				showList("Student");
				cin>>process;
				switch(process){
					case 1:
						addStudent();
						break;
					case 2:
						cout<<"Remove Student"<<endl;
						break;
					case 3:
						cout<<"Edit Student"<<endl;
						break;
					case 4:
						cout<<"Show Student"<<endl;
						break;
					case 5:
						break;
					default:
						cout<<"Invalid Choose"<<endl;
				}
				break;
			case 2:
				showList("Course");
				cin>>process;
				switch(process){
					case 1:
						addCourse();
						break;
					case 2:
						cout<<"Remove Course"<<endl;
						break;
					case 3:
						cout<<"Edit Course"<<endl;
						break;
					case 4:
						cout<<"Show Course"<<endl;
						break;
					case 5:
						break;
					default:
						cout<<"Invalid Choose"<<endl;
				}
				break;
			case 3:
				showList("Teacher");
				cin>>process;
				switch(process){
					case 1:
						addTeacher();
						break;
					case 2:
						cout<<"Remove Teacher"<<endl;
						break;
					case 3:
						cout<<"Edit Teacher"<<endl;
						break;
					case 4:
						cout<<"Show Teacher"<<endl;
						break;
					case 5:
						break;
					default:
						cout<<"Invalid Choose"<<endl;
				}
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

