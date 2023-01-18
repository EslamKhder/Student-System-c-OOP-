#include "../model/Models.cpp"
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface StudentRepository
class StudentRepository {
	public:
		virtual int addStudent(Student student);
		
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
	
};

// Class CourseRepositoryImpl
class CourseRepositoryImpl: public CourseRepository {
	
};

/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface TeacherRepository
class TeacherRepository {
	
};

// Class TeacherRepositoryImpl
class TeacherRepositoryImpl: public TeacherRepository {
	
};
