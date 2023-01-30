#include "../service/Service.cpp"

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class StudentController
class StudentController {
	private:
		StudentServiceImpl studentService;
	public:
		int addStudent(Student student) {
			return studentService.addStudent(student);
		}
};
/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class CourseController
class CourseController {
	private:
		CourseServiceImpl courseService;
	public:
		int addCourse(Course course) {
			return courseService.addCourse(course);
		}
};
/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class TeacherController
class TeacherController {
	private:
		TeacherServiceImpl teacherService;
	public:
		int Teacher(Teacher teacher) {
			return teacherService.addTeacher(teacher);
		}
};
