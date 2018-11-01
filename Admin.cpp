#pragma once
#include "Header.h"
#include "Admin.h"
#include"Book.h"
#include "Reader.h"

Admin::Admin(string name, string surname, string work, int cardnumber, int salary, int age, int premium) :Human(name, surname, age){//�����������
	this->work = work;
	this->cardnumber = cardnumber;
	this->salary = salary;
	this->premium = premium;
	this->SetWallet(0);
}
Admin::Admin(string name):Human(name){//�����������
}
void Admin::AddToBlackList(Book book){// ������ ����������� ���������� �� ������� ������
	cout << "���������� ������ � ������ ������" << endl;
}
void Admin::SetName(){
	this->name = "Anonym";
}
void Admin::AddBook(string author, string name, int year, int number_of_pages, int price, int code){//������ ���� �����
	Book book(author, name, year, number_of_pages, price, code); //item 3 //item 6
	ofstream file("Books.data", ios::app);//item 5
	file.write((char *)&book, sizeof(Book));
	file.close();
}
void Admin::ClassName(){// item 4 //���������� classname
	cout << typeid(*this).name();
}
string Admin::GetName(){
	return name;
}
void Admin::SetName(string name){
	this->name = name;
}
void Admin::PayForBook(int cardnumber, int price, int money){ //��������� ������ �� ����������
	if (cardnumber == this->cardnumber){
		if (money >= price){
			money -= price;
			this->wallet += price;
			cout << "���� ���������� ��������\n";
		}
		else{
			cout << "�� �� ���� ��������� ������\n";
		}
	}
	else{
		cout << "����� ������ �� ����������\n";
	}
}
void ChangeWork(Admin &ob){//10 ������ �-��
	ob.work = "Senioradmin";
}
