#include "Header.h"
#include "Book.h"
#include "Admin.h"
#include"Seller.h"
#include"SellerOrder.h"
#include"Bookstore.h"

SellerOrder::SellerOrder(Book book, Admin &admin, Seller &seller,Bookstore &bookstore, string date){
	this->book = &book;
	this->admin = admin;
	this->seller = seller;
	this->bookstore = bookstore;
	this->date = date;
}
void SellerOrder::setBook(Book book){
	this->book = &book;
}
void SellerOrder::setDate(string date){
	this->date = date;
}
string SellerOrder ::getDate(){
	return date;
}
void SellerOrder::MakeOrder(Seller seller){
	setDate(bookstore.getAddress);
	ofstream file("Orders.data", ios::app);
	file.write((char *)&(*this), sizeof(*this));
	file.close();
	cout << "Order was made!\n" << endl;

	char yes_or_no;
	int how_many_times = 0;
	cout << "Do you want pay order? y/n\n";
tryagain:
	cin >> yes_or_no;
	if (yes_or_no == 'y'){
		this->PayOrder(seller.cardnumber, book->GetPrice(), seller.money, seller, admin);
	}
	else if (yes_or_no == 'n'){
		cout << "Your order wasn`t pay\n";
		admin.AddToBlackList(*book);
	}
	else{
		cout << "Try again pls";
		if (how_many_times<3){
			goto tryagain;
		}
		else{
			admin.AddToBlackList(*book);
		}
	}
}
void SellerOrder::PayOrder(int cardnumber, int price, int money, Seller seller, Admin admin){
	if (cardnumber == seller.cardnumber){
		money -= price;
		admin.SetWallet(price);
		cout << "Your order was succesfully payed\n";
	}
}