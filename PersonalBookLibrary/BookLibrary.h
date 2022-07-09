#pragma once
#include "Book.h"
#include "SinglyLinkedList.h"

using namespace System;
using namespace System::Collections::Generic;

ref class BookLibrary
{
public:
	BookLibrary() { }

	void addBook(Book^ _book); // ���������� ����� � ������� ������
	void deleteBook(Book^ _book); // �������� ����� �� �������� ������
	void printLib();
	void deleteAll();
	System::Collections::Generic::List<Book^>^ toList();

	SinglyLinkedList<Book^>^ books = gcnew SinglyLinkedList<Book^>; // ����������� ������, ���������� ������� �����
};
