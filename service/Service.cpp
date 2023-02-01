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
				student.getName().size() < 5) {
				cout<<"Invalid Name !"<<endl;
			} else if (student.getAge() >= 30 ||
					   student.getAge() <=18){ 
				cout<<"Invalid Age !"<<endl;
			} else if(student.getPhoneNumber()[0] != '0' ||
						(
						  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '1') &&
						  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '2') &&
						  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '0') &&
						  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '5')
					    ) 
						|| student.getPhoneNumber().size() != 11
					){ 
				cout<<"Invalid Phone Number !"<<endl;
			} else if(student.getGpa() >= 10 || student.getGpa() < 0){
				cout<<"Invalid GPA !"<<endl;
			} else {
				return studentRepository.addStudent(student);
			}
			return -1;
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
			if(course.getName().size() == 0 ||  //  ""
				course.getName().size() < 4){  //"fghngd"
				cout<<"Invalid Name !"<<endl;
			} else if (course.getHour() > 15 || course.getHour() < 5){ // 5  15
				cout<<"Invalid Hour !"<<endl;
			} else {
				return courseRepository.addCourse(course);
			}
			return -1;
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
			if(teacher.getName().size() == 0 ||
				teacher.getName().size() > 7 || 
				teacher.getName().size() < 5) {
				cout<<"Invalid Name !"<<endl;
			} else if (teacher.getAge() > 60 || // 30 60
					   teacher.getAge() < 30){ 
				cout<<"Invalid Age !"<<endl;
			} else if(teacher.getPhoneNumber()[0] != '0' ||
						(
						  (teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2]) != ('1' + '1') &&
						  (teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2]) != ('1' + '2') &&
						  (teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2]) != ('1' + '0') &&
						  (teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2]) != ('1' + '5')
					    ) 
						|| teacher.getPhoneNumber().size() != 11
					){ 
				cout<<"Invalid Phone Number !"<<endl;
			} else if (teacher.getSalary() < 5000 || teacher.getSalary() > 15000){
				cout<<"Invalid Salary !"<<endl;
			} else {
				return teacherRepository.addTeacher(teacher);
			}
			return -1;
		}
};
