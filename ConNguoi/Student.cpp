#include "Student.h";


Student::Student() {
	strcpy_s(this->name, "");
	this->yearOfBirth = 1990;
}


void Student::input() {
	Person::input();
	do {
		cout << "\nEnter math point ";
		cin >> this->mathPoint;
	} while (this->mathPoint < 0 || this->mathPoint > 10);
	do {
		cout << "\nEnter physics point ";
		cin >> this->physicsPoint;
	} while (this->physicsPoint < 0 || this->physicsPoint > 10);
}

void Student::output() {
	Person::output();
	cout << ",math point " << this->mathPoint << ", physics point: " << this->physicsPoint;
};

