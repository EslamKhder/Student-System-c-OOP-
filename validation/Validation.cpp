class StudentValidation {
	public:
		int validteStudent(Student student){
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
				return 1;
			}
			return -1;
		}
};
class CourseValidation {
	
	public:
		
};
class TeacherValidation {
	public:
		
};
