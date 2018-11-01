#pragma once
#include "Admin.h"
#include "Book.h"
#include "Reader.h"
#include "Header.h"

using namespace std;
class Bookstore{
	string name;
	string address;
	int department_number;
	Admin* admin;
	Reader* reader;
	Book book;
	Seller* seller;
public:
	Bookstore( Admin* admin, Reader* reader,Seller*seller, Book book, string name, string address, int department_number){
		this->admin = admin;
		this->reader = reader;
		this->seller = seller;
		this->book = book;
		this->name = name;
		this->address = address;
		this->department_number = department_number;
	};
	~Bookstore(){
		cout << "Object Bookstore was destructed" << endl;
	};
	explicit Bookstore(){};
	int getDepartment_number(){
		return department_number;
	}
	string getName(){
		return name;
	}
	string getAddress(){
		return address;
	}


};