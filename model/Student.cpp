#include "BaseEntity.cpp"
#include "Teacher.cpp"
class Student: public BaseEntity {
	private:
		double gpa;
		string n;
		Teacher arr[5];
	public:
		//  Setter
		void setGpa(double gpa){
			this->gpa = gpa;
		}
		
		// Getter
		double getGpa(){
			return gpa;
		}
};
