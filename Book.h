#pragma once
#include "Header.h"
using namespace std;
class  Book
{
	int price;
	int number_of_pages;
	string title;
	string author;
	int year;
public:
	int code;
	Book(string, string, int, int, int, int);//конструктор
	Book() :price(100), title("noname"){
		this->author = "Author";
		this->number_of_pages = 0;
		this->year = 0;
	};//5
	~Book(){
		cout << "Object Book was destructed" << endl;
	}
	int GetPrice();
	int GetNumberOfPages();
	int GetYear();
	string GetTitle();
	string GetAuthor();
	void SetPrice(int price);
	int SetYear();
	string SetTitle();
	void RandMemory();//виділення рандомої к-ті пам'яті під цілочисельний масив
	void ShowBook();
};