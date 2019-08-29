#include "Person.h";


Person::Person() {
	strcpy_s(this->name, "");
	this->yearOfBirth = 1990; 
}


void Person::input() { 
	cout << "\nPlease enter your name : ";
	cin >> this->name;
	do {
		cout << "\nEnter year of birth";
		cin >> this->yearOfBirth;
	} while (this->yearOfBirth < 1900 || this->yearOfBirth > 2019);
}

void Person::output() {
	cout << "\nPerson : name: " << this->name << ", year of birth : " << this->yearOfBirth;
};

