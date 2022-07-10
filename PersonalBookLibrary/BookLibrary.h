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
	List<Book^>^ find(String^ searchName); // ����� �� �����
	List<Book^>^ find(String^ searchAuthor, String^ searchPublisher, String^ searchOrigin, String^ selectedParameter); // ����� �� ������, ��� ������������, ��� �������������
	List<Book^>^ find(int searchRating); // ����� �� ������
	List<Book^>^ find(String^ section, String^ existance, String^ selectedParameter); // ����� �� ������� ��� �������

	SinglyLinkedList<Book^>^ books = gcnew SinglyLinkedList<Book^>; // ����������� ������, ���������� ������� �����
};
