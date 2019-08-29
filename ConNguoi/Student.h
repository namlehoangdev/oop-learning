#pragma once
#include <iostream> 
#include <string.h>
#include "Person.h"
using namespace std;

class Student: Person {
private:  
	float mathPoint;
	float physicsPoint;
public:
	Student();
	 
	void input();

	void output();

};