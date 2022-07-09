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

	Book^ find(String^ parameter); // ����� � ���� ������ �� ��������� ���������

	void addListToDb(); // ���������� ������ � ���������� � ���� ������

	void printLib();

	void deleteAll();

	SinglyLinkedList<Book^>^ getListFromDb(String^ filepath); // ��������� ������ � ���������� �� ���� ������

	System::Collections::Generic::List<Book^>^ toList();

	SinglyLinkedList<Book^>^ books = gcnew SinglyLinkedList<Book^>; // ����������� ������, ���������� ������� �����
};
