#include "../service/Service.cpp"

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class StudentController
class StudentController {
	private:
		StudentServiceImpl studentService;
		Student studentResult;
	public:
		int addStudent(Student student) {
			return studentService.addStudent(student);
		}
		void showStudentById(int id){
			studentResult = studentService.getStudentById(id);
			if(studentResult.getId() != -1){
				cout<<"\t\t ID \t\t Name \t\t Age \t\t Phone Number \t\t GPA"<<endl;
				cout<<"\t\t"<<studentResult.getId()<<"\t\t"<<studentResult.getName()<<"\t\t"<<studentResult.getAge()<<"\t\t"<<studentResult.getPhoneNumber()<<"\t\t"<<studentResult.getGpa()<<endl;
			}
		}
		void updateStudent(Student student){
			studentService.editStudent(student);
		}
};
/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class CourseController
class CourseController {
	private:
		CourseServiceImpl courseService;
		Course courseResult;
	public:
		int addCourse(Course course) {
			return courseService.addCourse(course);
		}
		void showCourseById(int id){
			courseResult = courseService.getCourseById(id);
			if(courseResult.getId() != -1){
				cout<<"\t\t ID \t\t Name \t\t Hour"<<endl;
				cout<<"\t\t"<<courseResult.getId()<<"\t\t"<<courseResult.getName()<<"\t\t"<<courseResult.getHour()<<endl;
			}
		}
		void updateCourse(Course course){
			courseService.editCourse(course);
		}
};
/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Class TeacherController
class TeacherController {
	private:
		TeacherServiceImpl teacherService;
		Teacher teacherResult;
	public:
		int addTeacher(Teacher teacher) {
			return teacherService.addTeacher(teacher);
		}
		void showStudentById(int id){
			teacherResult = teacherService.getTeacherById(id);
			if(teacherResult.getId() != -1){
				cout<<"\t\t ID \t\t Name \t\t Age \t\t Phone Number \t\t Salary"<<endl;
				cout<<"\t\t"<<teacherResult.getId()<<"\t\t"<<teacherResult.getName()<<"\t\t"<<teacherResult.getAge()<<"\t\t"<<teacherResult.getPhoneNumber()<<"\t\t"<<teacherResult.getSalary()<<endl;
			}
		}
		void updateTeacher(Teacher teacher){
			teacherService.editTeacher(teacher);
		}
};
