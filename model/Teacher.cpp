#include "BaseEntity.cpp"
class Teacher: public BaseEntity {
	private:
		double salary;
	public:
		//  Setter
		void setSalary(double salary){
			this->salary = salary;
		}
		
		// Getter
		double getSalary(){
			return salary;
		}
};
