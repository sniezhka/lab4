#pragma once
#include "Header.h"
#include "Book.h"
#include "Seller.h"
#include "Admin.h"
#include "Bookstore.h"
class SellerOrder{
public:
	SellerOrder(Book book, Admin &admin, Seller &seller, Bookstore &bookstore, string date);
	SellerOrder(const Book &obj);
	~SellerOrder(){
		cout << "Object SellerOrder was destructed!\n";
	}

	void setBook(Book book);
	void setDate(string date);
	string getDate();
	void MakeOrder(Seller seller);
	void PayOrder(int cardnumber, int price, int money, Seller seller, Admin admin);
private:
	Book *book;
	Seller seller;
	Admin admin;
	string date;
	Bookstore bookstore;
};