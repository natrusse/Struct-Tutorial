// Struct Tutorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

struct Student {

	int age;
	int IDnum;
	char year;

};

int main()
{
	Student Mike; // presents the student structure and assigns 4 different names with the same variables.
	
	Mike.age = 25; //assigns the variables for student mike and no one else
	Mike.IDnum = 82678433;
	Mike.year = 'x';

	Student Mark;

	Mark.age = 23; //age differs from mike, but only affects mark

	Student Robert;

	Robert.age = 22;

	Student Nathan;

	Nathan.age = 19;


    return 0;
}

