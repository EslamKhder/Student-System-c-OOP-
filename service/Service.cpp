#include "../repository/Repository.cpp"
#include "../validation/Validation.cpp"
/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface StudentService
class StudentService {
	public:
		virtual int addStudent(Student student) = 0;
		virtual Student getStudentById(int id) = 0;
		virtual int editStudent(Student student) = 0;
};
// Class StudentServiceImpl
class StudentServiceImpl {
	private:
		StudentRepositoryImpl studentRepository;
		StudentValidation studentValidation;
		ValidationService validationService;
		Student studentResult;
	public:
		int addStudent(Student student) {
			if(studentValidation.validteStudent(student) == 1){
				int id = studentRepository.addStudent(student);
				if(id == -1){
					validationService.fullData("Student");
				} else {
					return id;
				}
			}
			return -1;
		}
		Student getStudentById(int id) {
			studentResult = studentRepository.getStudentById(id);
			if(studentResult.getId() == -1){
				validationService.notExist("Student",id);
			}
			return studentResult;
		}
		int editStudent(Student student) {
			int index = studentRepository.editStudent(student);
			if(index == -1){
				validationService.notExist("Student",student.getId());
			} else {
				cout<<"Sucess Edit Student Wit ID ["<<student.getId()<<"]"<<endl;
			}
		}
};

/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface CourseService
class CourseService {
	public:
		virtual int addCourse(Course course) = 0;
		virtual Course getCourseById(int id) = 0;
		virtual int editCourse(Course course) = 0;
};
// Class CourseServiceImpl
class CourseServiceImpl {
	private:
		CourseRepositoryImpl courseRepository;
		CourseValidation courseValidation;
		ValidationService validationService;
		Course courseResult;
	public:
		int addCourse(Course course) {
			if(courseValidation.validteCourse(course) == 1) {
				int id = courseRepository.addCourse(course);
				if(id == -1){
					validationService.fullData("Course");
				} else {
					return id;
				}
			}
			return -1;
		}
		Course getCourseById(int id) {
			courseResult = courseRepository.getCourseById(id);
			if(courseResult.getId() == -1){
				validationService.notExist("Course",id);
			}
			return courseResult;
		}
		int editCourse(Course course) {
			int index = courseRepository.editCourse(course);
			if(index == -1){
				validationService.notExist("Course",course.getId());
			} else {
				cout<<"Sucess Edit Course Wit ID ["<<course.getId()<<"]"<<endl;
			}
		}
};
/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface TeacherService
class TeacherService {
	public:
		virtual int addTeacher(Teacher teacher) = 0;
		virtual Teacher getTeacherById(int id) = 0;
		virtual int editTeacher(Teacher teacher) = 0;
};
// Class TeacherRepositoryImpl
class TeacherServiceImpl {
	private:
		TeacherRepositoryImpl teacherRepository;
		TeacherValidation teacherValidation;
		ValidationService validationService;
		Teacher teacherResult;
	public:
		int addTeacher(Teacher teacher) {
			if(teacherValidation.validteTeacher(teacher) == 1) {
				int id = teacherRepository.addTeacher(teacher);
				if(id == -1){
					validationService.fullData("Teacher");
				} else {
					return id;
				}
			}
			return -1;
		}
		Teacher getTeacherById(int id) {
			teacherResult = teacherRepository.getTeacherById(id);
			if(teacherResult.getId() == -1){
				validationService.notExist("Teacher",id);
			}
			return teacherResult;
		}
		int editTeacher(Teacher teacher) {
			int index = teacherRepository.editTeacher(teacher);
			if(index == -1){
				validationService.notExist("Teacher",teacher.getId());
			} else {
				cout<<"Sucess Edit Teacher Wit ID ["<<teacher.getId()<<"]"<<endl;
			}
		}
};
