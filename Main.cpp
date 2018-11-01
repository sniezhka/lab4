#include "Header.h"
#include "Admin.h"
#include "Reader.h"
#include "Book.h"
#include "Seller.h"
#include "SellerOrder.h"
#include"Bookstore.h"
using namespace std;
int i = 0;
void SalaryNew(Admin admin);//13 перевантаженння
void SalaryNew(Admin* &admin);//14
int Admin::salary;
int Admin::premium;
int Admin::wallet;
int main() {
	setlocale(LC_ALL, "Ukrainian");
	bool active = true;
	Admin admin("John", "Mcgill", "Young admin", 456783, 5000, 24, 650);
	Seller seller("Bill","Mcgill",22,2345);
	Seller seller2("Sam", "Smit", 24, 235434);
	Reader reader("Валєра", "Нестеренко", 1111, 2000, 1234,30);
	Book book("book", "C++", 2114, 89, 1999, 1);
	Bookstore *bookstores = new Bookstore[3];
	for (int j = 0; j < 3; j++){
		cout << "Назва: " << bookstores[j].getName() << endl;
		cout << "Адреса: " << bookstores[j].getAddress() << endl;
		cout << "Номер відділення: " << bookstores[j].getDepartment_number() << endl;

	}
	SellerOrder order(book, admin, seller, bookstores[1], bookstores[1].getAddress());
	order.MakeOrder(seller);
	SellerOrder order2(book, admin, seller2, bookstores[2], bookstores[2].getAddress());
	order.MakeOrder(seller2);

	while (active) {
		int choose = 0;
		cout << "Авторизація:\nАдмін - введіть 1\nКористувач - введіть 2" << endl;;
		Admin admin("John", "Mcgill", "Young admin", 456783, 5000, 24, 650);
		Seller seller("ManagerName", "ManagerSurname", 27, 123456);
		seller.cardnumber = 1000;
	/*	Admin *p = &admin;*/
		Admin::SetWallet(0);
		cin >> choose;
		if (choose == 1) {
			choose = 0;
			cout << "Введіть кількість книг, які хочете додати\n";
			int count;
			cin >> count;
			for (; i < count; i++){
				admin.AddBook("Ritchi", "C++", 2114, 89, 1999, i);
			}

		}
		else if (choose == 2) {
			Reader reader("Walter", "White", 1111, 2000, 1234, 24);
			cout << "Що ви хочите: \nЗнайти книгу за назвою, введіть 1\nВибрати книгу зі списку, натисність 2" << endl;

			cin >> choose;
			if (choose == 1){
				choose = 0;
				Book *books = new Book[i];//item 6 //item 7 //item 11
				string title;
				cout << "Введіть назву" << endl;
				cin >> title;
				reader.FindBook(books, admin, i, title); //item 8 //item 10

			}
			else if (choose == 2){
				choose = 0;
				Book *books = new Book[i];//item 6// item 7
				reader.FindBook(books, admin, i);
				for (int j = 0; j < i; j++){
					cout << "Number: " << j << endl;
					books[j].ShowBook();
				}
				cout << "Будь ласка, введіть назву книги" << endl;
				string title;
				cin >> title;
				reader.FindBook(books, admin, i, title);

			}
		}
		else{
			char response;
			cout << "Чи сподобалось вам обслуговування?";
			cin >> response;
			if (response == 'yes'){
				cout << "Зарплата з премією складатиме";
				SalaryNew(admin);//13-14
			}
			cout << "Вихід";
			active = false;
		}
	}

	getchar();
	getchar();
	return 0;
}
void SalaryNew(Admin  admin){//13
	cout << "Admin receives a salary " << admin.getSalary() + admin.GetPremium() << endl;
}

void SalaryNew(Admin* &admin){//14
	cout << "Admin receives a salary " << admin->getSalary() + admin->GetPremium() << endl;
}