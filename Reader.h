#pragma once
#include "Header.h"
#include"Human.h"
#include "Book.h"
#include"Admin.h"

class Reader: public Human{//item 2
	int cardnumber;
	int id;
public:
	int money;
	Reader(string, string, int, int, int, int);//конструктор
	Reader(){};
	~Reader(){
		cout << "Object Reader was destructed" << endl;
	}
	string GetName();
	void SetName(string);
	void SetName();
	void FindBook(Book *, Admin, int, string);//метод шукає книги за назвою
	void FindBook(Book *, Admin, int);//метод для виведення всіх книг
	void MakeOrder(Book, Admin);//метод для замовлення вибраної книги
	int getСardnumber();
	friend class ReaderStatus;//11 дружній клас
};
class ReaderStatus{//11
	string status;
public:
	ReaderStatus();
	void setStatus(Reader &ob){
		if (ob.getСardnumber() % 2 == 0){
			status = "twin";
		}
		else{
			status = "not twin";
		}
	}

};