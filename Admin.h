#pragma once
#include "Header.h"
#include"Book.h"
#include"Human.h"


class Admin :public Human {
	string work;
	static int salary;//12
	static int wallet;
	static int premium;
public:
	int cardnumber;
	Admin(string, string, string, int, int, int, int);//�����������  4
	explicit Admin(string);//�����������
	Admin(){};//4
	Admin(const Admin &obj)//4
	{
	}
	~Admin(){
		cout << "Object Admin was destructed" << endl;
	}
	friend void ChangeWork(Admin &);//10
	string GetName();
	void PayForBook(int, int, int);//��������� ������ �� �����
	void SetName(string);
	void SetName();
	void AddToBlackList(Book);//������� ���������� �� ������� ������
	void AddBook(string, string, int, int, int, int);//item 3 //��������� ���� �����
	void ClassName();//�����, �� ������� ��'� �����


	static int getSalary(){//12
		return salary;
	}
	void setSalary(int salary){//12
		this->salary = salary;
	}
	static int GetPremium(){
		return premium;
	}
	void SetPremium(int premium)
	{
		this->premium = premium;
	}
	static void SetWallet(int value){
		wallet += value;
	};//12
	Admin func(){//15
		Admin admin;
		admin.setSalary(800);
		return admin;
	}
};