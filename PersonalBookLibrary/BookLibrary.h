#pragma once
#include "Book.h"
#include "SinglyLinkedList.h"

using namespace System;
using namespace System::Collections::Generic;

ref class BookLibrary
{
public:
	BookLibrary() { }

	void addBook(Book^ _book); // добавление книги в связный список
	void deleteBook(Book^ _book); // удаление книги из связного списка
	void printLib();
	void deleteAll();
	System::Collections::Generic::List<Book^>^ toList();

	SinglyLinkedList<Book^>^ books = gcnew SinglyLinkedList<Book^>; // односвязный список, содержащий объекты книги
};
