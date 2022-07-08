#pragma once
#include "Book.h"
#include "SinglyLinkedList.h"

using namespace System;

ref class BookLibrary
{
public:
	BookLibrary() { }

	void addBook(Book^ _book); // ���������� ����� � ������� ������

	void deleteBook(Book^ _book); // �������� ����� �� �������� ������

	//void editBook(Book^ _book, String^ _name, String^ _author,
	//	String^ _publisher, String^ _libSection,
	//	String^ _origin, int _rating, bool _exist); // �������������� ������ �����

	Book^ find(String^ parameter); // ����� � ���� ������ �� ��������� ���������

	void addListToDb(); // ���������� ������ � ���������� � ���� ������

	void printLib();

	SinglyLinkedList<Book^>^ getListFromDb(String^ filepath); // ��������� ������ � ���������� �� ���� ������

	System::Collections::Generic::List<Book^>^ toList();

	SinglyLinkedList<Book^>^ books = gcnew SinglyLinkedList<Book^>; // ����������� ������, ���������� ������� �����	
};
