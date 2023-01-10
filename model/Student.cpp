#include "BaseEntity.cpp"
class Student: public BaseEntity {
	private:
		double gpa;
		string n;
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
