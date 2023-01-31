#include "../repository/Repository.cpp"

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface StudentService
class StudentService {
	public:
		virtual int addStudent(Student student) = 0;
};
// Class StudentServiceImpl
class StudentServiceImpl {
	private:
		StudentRepositoryImpl studentRepository;
	public:
		int addStudent(Student student) {
			if(student.getName().size() == 0 ||
				student.getName().size() > 7 || 
				student.getName().size() < 5) {// ""    0
				cout<<"Invalid Name !"<<endl;
			} else if (student.getAge() >= 30 || // >= 30  31 32 .....
					   student.getAge() <=18){ // <= 18  17 16 .....
				cout<<"Invalid Age !"<<endl;
			} else if(student.getPhoneNumber()[0] != '0' ||
						(
						  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '1') &&
						  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '2') &&
						  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '0') &&
						  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '5')
					    )
					){ 
					
					//  012345678910
					// "0 15 13903660"
				cout<<"Invalid Phone Number !"<<endl;
			}
			return studentRepository.addStudent(student);
		}
};

/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface CourseService
class CourseService {
	public:
		virtual int addCourse(Course course) = 0;
};
// Class CourseServiceImpl
class CourseServiceImpl {
	private:
		CourseRepositoryImpl courseRepository;
	public:
		int addCourse(Course course) {
			return courseRepository.addCourse(course);
		}
};
/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface TeacherService
class TeacherService {
	public:
		virtual int addTeacher(Teacher teacher) = 0;
};
// Class TeacherRepositoryImpl
class TeacherServiceImpl {
	private:
		TeacherRepositoryImpl teacherRepository;
	public:
		int addTeacher(Teacher teacher) {
			return teacherRepository.addTeacher(teacher);
		}
};
