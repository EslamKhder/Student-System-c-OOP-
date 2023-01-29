#include "../repository/Repository.cpp"

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface StudentService
class StudentService {
	public:
		virtual int addStudent(Student student) = 0;
}
// Class StudentServiceImpl
class StudentServiceImpl {
	private:
		StudentRepository studentRepository;
	public:
		int addStudent(Student student) {
			return studentRepository.addStudent(student);
		}
};

/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface CourseService
class CourseService {
	public:
		int addCourse(Course course) = 0;
};
// Class CourseServiceImpl
class CourseServiceImpl {
	private:
		CourseRepository courseRepository;
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
		TeacherRepository teacherRepository;
	public:
		int Teacher(Teacher teacher) {
			return teacherRepository.addTeacher(teacher);
		}
};
