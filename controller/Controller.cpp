#include "../service/Service.cpp"

class StudentController {
	private:
		StudentService studentService;
	public:
		int addStudent(Student student) {
			return studentService.addStudent(student);
		}
};

class CourseController {
	private:
		CourseService courseService;
	public:
		int addCourse(Course course) {
			return courseService.addCourse(course);
		}
};

class TeacherController {
	private:
		TeacherService teacherService;
	public:
		int Teacher(Teacher teacher) {
			return teacherService.addTeacher(teacher);
		}
};


