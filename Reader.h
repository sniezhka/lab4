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
	Reader(string, string, int, int, int, int);//�����������
	Reader(){};
	~Reader(){
		cout << "Object Reader was destructed" << endl;
	}
	string GetName();
	void SetName(string);
	void SetName();
	void FindBook(Book *, Admin, int, string);//����� ���� ����� �� ������
	void FindBook(Book *, Admin, int);//����� ��� ��������� ��� ����
	void MakeOrder(Book, Admin);//����� ��� ���������� ������� �����
	int get�ardnumber();
	friend class ReaderStatus;//11 ������ ����
};
class ReaderStatus{//11
	string status;
public:
	ReaderStatus();
	void setStatus(Reader &ob){
		if (ob.get�ardnumber() % 2 == 0){
			status = "twin";
		}
		else{
			status = "not twin";
		}
	}

};