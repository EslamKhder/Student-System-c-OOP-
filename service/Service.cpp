#include "../model/repository.cpp"
class StudentService {
	public:
		virtual int addStudent(Student student) = 0;
}
class StudentServiceImpl {
	private:
		StudentRepository studentRepository;
	public:
		int addStudent(Student student) {
			return studentRepository.addStudent(student);
		}
};

class CourseService {
	public:
		int addCourse(Course course) = 0;
};
class CourseServiceImpl {
	private:
		CourseRepository courseRepository;
	public:
		int addCourse(Course course) {
			return courseRepository.addCourse(course);
		}
};
class TeacherService {
	public:
		virtual int addTeacher(Teacher teacher) = 0;
};
class TeacherServiceImpl {
	private:
		TeacherRepository teacherRepository;
	public:
		int Teacher(Teacher teacher) {
			return teacherRepository.addTeacher(teacher);
		}
};
