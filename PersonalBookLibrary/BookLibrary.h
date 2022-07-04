#pragma once
#include "Book.h"
#include "SinglyLinkedList.h"

using namespace System;

ref class BookLibrary
{
public:
	void addBook(String^ _name, String^ _author,
		String^ _publisher, String^ _libSection,
		String^ _origin, int _rating, bool _exist, SinglyLinkedList<Book^>^ _books); // ���������� ����� � ������� ������

	void deleteBook(SinglyLinkedList<Book^>^ _books); // �������� ����� �� �������� ������

	void editBook(String^ _name, String^ _author,
		String^ _publisher, String^ _libSection,
		String^ _origin, int _rating, bool _exist, SinglyLinkedList<Book^>^ _books); // �������������� ������ �����

	Book^ find(String^ parameter); // ����� � ���� ������ �� ��������� ���������
	void addListToDb(SinglyLinkedList<Book^>^ _books); // ���������� ������ � ���������� � ���� ������

	SinglyLinkedList<Book^>^ getListFromDb(String^ filepath); // ��������� ������ � ���������� �� ���� ������
private:
	SinglyLinkedList<Book^>^ books; // ����������� ������, ���������� ������� �����
};

