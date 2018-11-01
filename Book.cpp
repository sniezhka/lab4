#pragma once
#include "Header.h"
#include "Reader.h"
#include "Book.h"
#include "Admin.h"
Book::Book(string author, string title, int year, int number_of_pages, int price, int code){//�����������
	this->author = author;
	this->title = title;
	this->year = year;
	this->number_of_pages = number_of_pages;
	this->price = price;
	this->code = code;
}
//Book::Book(){//���������������� �����������
//	this->author = "Author";
//	this->title = "Title";
//	this->number_of_pages = 0;
//	this->price = 0;
//	this->year = 0;
//}
int Book::GetPrice(){//get �����
	return price;
}
void Book::SetPrice(int price){
	this->price = price;
}
int Book::GetNumberOfPages(){//get �����
	return number_of_pages;
}
int Book::GetYear(){//get �����
	return year;
}
string Book::GetTitle(){//get �����
	return title;
}
string Book::GetAuthor(){//get �����
	return author;
}
void Book::RandMemory(){//�������� ������� �-� ���'�� �� ������������� �����
	srand(time(0));
	int size = rand() % 100;
	int * mem = new int[size];
	for (int i = 0; i < size; i++){
		mem[i] = rand() % 100;
	}
	/* ����������� ������ �� �������� */
	for (int i = 1; i < size; ++i)
	{
		for (int r = 0; r < size - i; r++)
		{
			if (mem[r] < mem[r + 1])
			{
				// ����� �������
				int temp = mem[r];
				mem[r] = mem[r + 1];
				mem[r + 1] = temp;
			}
		}
	}
}
void Book::ShowBook(){
	cout << "Title: " << (*this).GetTitle() << endl;
	cout << "Author: " << (*this).GetAuthor() << endl;
	cout << "Price: " << (*this).GetPrice() << endl;
	cout << "Number Of Pages: " << (*this).GetNumberOfPages() << endl;
	cout << "Year: " << (*this).GetYear() << endl;
	cout << endl;
}