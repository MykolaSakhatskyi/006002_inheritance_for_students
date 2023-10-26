#include <iostream>

class Person {
private:
	std::string id;
	std::string name;
	std::string sureName;
	std::string passportId;
	std::string birthday;
	std::string additionalInformation;
public : void PersonData(std::string id, std::string name, std::string sureName, std::string passportId, std::string birthday, std::string additionalInformation) {
		this->id = id;
		this->name = name;
		this->sureName = sureName;
		this->passportId = passportId;
		this->birthday = birthday;
		this->additionalInformation = additionalInformation;
	}
	   void Show() {
		   std::cout << "ID : " << id << std::endl;
		   std::cout << "Name : "<< name << std::endl;
		   std::cout << "Sure Name : "<< sureName << std::endl;
		   std::cout << "Passport Id : " <<passportId << std::endl;
		   std::cout << "Birthday : " << birthday << std::endl;
		   std::cout << "Additional Information : " << additionalInformation << std::endl;
}
	
};
void PersonDataPointer(std::string id, std::string name, std::string sureName, std::string passportId, std::string birthday, std::string additionalInformation, Person* p) {
	p->PersonData(id, name, sureName, passportId, birthday, additionalInformation);
}

class Student : public Person {
private:
	std::string school;
	std::string specialyty;
	std::string group;
public: void StudentData(std::string id, std::string name, std::string sureName, std::string passportId, std::string birthday, std::string additionalInformation, std::string school, std::string specialyty, std::string group) {
	PersonData(id, name, sureName, passportId, birthday, additionalInformation);
	this->school = school;
	this->specialyty = specialyty;
	this->group = group;
}
	  void Show() {
		  Person::Show();
		  std::cout << "School : " << school << std::endl;
		  std::cout << "Specialyty : " << specialyty << std::endl;
		  std::cout << "Group : " << group << std::endl;
	}
};




int main() {
	Student student;
	student.StudentData("34576804983", "Petro","Kostenko","BN456783","30.02.1990","Robotiaga","PTU N15","Maliar","5");
	student.Show();
	std::cout << "------------------------------------------------------------------------------------------------------------------" << std::endl;
	student.StudentData("86545657446", "Yarynka", "Kuripko", "AH756323", "23.06.1991", "Model", "PTU N15", "Maliar", "5");
	student.Show();
	std::cout << "------------------------------------------------------------------------------------------------------------------" << std::endl;
	student.StudentData("54370294586", "Volodymyr", "Chaban", "JK125385", "01.11.1989", "Botan", "PTU N15", "Sadivnytstvo", "6");
	student.Show();
	std::cout << "------------------------------------------------------------------------------------------------------------------" << std::endl;
	student.StudentData("09685746732", "Tatiana", "Mykhalchuk", "UA459023", "14.09.1990", "Starosta", "PTU N15", "Sadivnytstvo", "6");
	student.Show();
	std::cout << "------------------------------------------------------------------------------------------------------------------" << std::endl;
	return 0;
}