#pragma once
#include <iostream> 
#include <string.h>
using namespace std;

class Person {
protected:
	char name[30];
	int yearOfBirth;
public :
	Person();
	

	void input();

	void output();

};