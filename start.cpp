#include<iostream>
#include "controller/Controller.cpp"
using namespace std;
int process;
int id;
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
	cout<<"5 - Show "<<value<<" By ID"<<"\t"<<"6 - Exit"<<endl;
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
	id = studentController.addStudent(student);
	if(id != -1){
		cout<<"Success Added Student With Id ["<<id<<"]"<<endl;
	}
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
	id = courseController.addCourse(course);
	if(id != -1){
		cout<<"Success Added Course With Id ["<<id<<"]"<<endl;
	}
	
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
	id = teacherController.addTeacher(teacher);
	if(id != -1){
		cout<<"Success Added Teacher With Id ["<<id<<"]"<<endl;
	}
}
void showStudentByID() {
	cout<<"Enter Student Id :";
	cin>>id;
	StudentController studentController;
	studentController.showStudentById(id);
}
void showCourseByID() {
	cout<<"Enter Course Id :";
	cin>>id;
	CourseController courseController;
	courseController.showCourseById(id);
}
void showTeacherByID() {
	cout<<"Enter Teacher Id :";
	cin>>id;
	TeacherController teacherController;
	teacherController.showStudentById(id);
}
void editStudent(){
	cout<<"Please Enter Student Data: "<<endl;
	Student student;
	cout<<"Enter Student ID :";
	cin>>id;
	student.setId(id);
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
	studentController.updateStudent(student);
}
void editCourse(){
	Course course;
	cout<<"Please Enter Course Data: "<<endl;
	cout<<"Enter Course ID :";
	cin>>id;
	course.setId(id);
	cout<<"Enter Course Name :";
	string name;
	cin>>name;
	course.setName(name);
	cout<<"Enter Course hour :";
	double hour;
	cin>>hour;
	course.setHour(hour);
	CourseController courseController;
	courseController.updateCourse(course);
}
void editTeacher(){
	cout<<"Please Enter Teacher Data: "<<endl;
	Teacher teacher;
	cout<<"Enter Teacher ID :";
	cin>>id;
	teacher.setId(id);
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
	teacherController.updateTeacher(teacher);
}
void switchStudent(){
	switch(process){
		case 1:
			addStudent();
			break;
		case 2:
			cout<<"Remove Student"<<endl;
			break;
		case 3:
			editStudent();
			break;
		case 4:
			cout<<"Show Student"<<endl;
			break;
		case 5:
			showStudentByID();
			break;
		case 6:
			break;
		default:
			cout<<"Invalid Choose"<<endl;
	}
}
void switchCourse(){
	switch(process){
		case 1:
			addCourse();
			break;
		case 2:
			cout<<"Remove Course"<<endl;
			break;
		case 3:
			editCourse();
			break;
		case 4:
			cout<<"Show Course"<<endl;
			break;
		case 5:
			showCourseByID();
			break;
		case 6:
			break;
		default:
			cout<<"Invalid Choose"<<endl;
	}
}
void switchTeacher(){
	switch(process){
		case 1:
			addTeacher();
			break;
		case 2:
			cout<<"Remove Teacher"<<endl;
			break;
		case 3:
			editTeacher();
			break;
		case 4:
			cout<<"Show Teacher"<<endl;
			break;
		case 5:
			showTeacherByID();
			break;
		case 6:
			break;
		default:
			cout<<"Invalid Choose"<<endl;
	}
}
int main(){
	int flag = 0;
	while(true){
		displaySystem();
		cin>>process;
		switch(process){
			case 1:
				showList("Student");
				cin>>process;
				switchStudent();
				break;
			case 2:
				showList("Course");
				cin>>process;
				switchCourse();
				break;
			case 3:
				showList("Teacher");
				cin>>process;
				switchTeacher();
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

