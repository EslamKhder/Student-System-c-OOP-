#include "../service/Service.cpp"

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class StudentController
class StudentController {
	private:
		StudentService studentService;
	public:
		int addStudent(Student student) {
			return studentService.addStudent(student);
		}
};
/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class CourseController
class CourseController {
	private:
		CourseService courseService;
	public:
		int addCourse(Course course) {
			return courseService.addCourse(course);
		}
};
/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class TeacherController
class TeacherController {
	private:
		TeacherService teacherService;
	public:
		int Teacher(Teacher teacher) {
			return teacherService.addTeacher(teacher);
		}
};


