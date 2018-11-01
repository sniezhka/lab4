#pragma once
#include "Header.h"
class Human{
protected:
	string surname;
	void SetSurname(string);
	string GetSurname();

public:
	string name;
	void SetName(string);
	string GetName();
	Human(string, string, int);
	Human(string);
	Human(){};
	~Human(){
		cout << "Object Human was destructed" << endl;
	}

private:
	int age;
	void SetAge(int);
	int GetAge();
};