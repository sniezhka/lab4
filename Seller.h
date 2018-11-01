#pragma once
#include "Header.h"
#include "Admin.h"
#include "Human.h"

class Seller : private Admin, public Human{//item 9, 10
public:
	using Admin::cardnumber;//12
	int money = 0;
	Seller(string, string, int, int);
	Seller(){};
	~Seller(){
		cout << "Object Seller was destructed\n";
	}

};