#include "../model/Models.cpp"
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface StudentRepository
class StudentRepository {
	public:
		virtual int addStudent(Student student) = 0;
		
};

// Class StudentRepositoryImpl
class StudentRepositoryImpl: public StudentRepository {
	private:
		Student students[25];
		int index = 0;
	public:
		int addStudent(Student student) {
			if(index == 25){
				cout<<"Full Student"<<endl;
			} else {
				students[index] = student;
				index++;
			}
		}
};

/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface CourseRepository
class CourseRepository {
	public:
		virtual int addCourse(Course course) = 0;
};

// Class CourseRepositoryImpl
class CourseRepositoryImpl: public CourseRepository {
	private:
		Course courses[25];
		int index = 0;
	public:
		int addCourse(Course course) {
			if(index == 25){
				cout<<"Full Course"<<endl;
			} else {
				courses[index] = course;
				index++;
			}
		}
};

/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface TeacherRepository
class TeacherRepository {
	public:
		virtual int addTeacher(Teacher teacher) = 0;
};

// Class TeacherRepositoryImpl
class TeacherRepositoryImpl: public TeacherRepository {
	private:
		Teacher teachers[25];
		int index = 0;
	public:
		int addTeacher(Teacher teacher) {
			if(index == 25){
				cout<<"Full Course"<<endl;
			} else {
				teachers[index] = teacher;
				index++;
			}
		}
};
