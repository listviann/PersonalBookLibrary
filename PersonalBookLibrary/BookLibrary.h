#pragma once
#include "Book.h"
#include "SinglyLinkedList.h"

using namespace System;

ref class BookLibrary
{
public:
	void addBook(String^ _name, String^ _author,
		String^ _publisher, String^ _libSection,
		String^ _origin, int _rating, bool _exist, SinglyLinkedList<Book^>^ _books); // добавление книги в связный список

	void deleteBook(SinglyLinkedList<Book^>^ _books); // удаление книги из связного списка

	void editBook(String^ _name, String^ _author,
		String^ _publisher, String^ _libSection,
		String^ _origin, int _rating, bool _exist, SinglyLinkedList<Book^>^ _books); // редактирование данных книги

	Book^ find(String^ parameter); // поиск в базе данных по заданному параметру
	void addListToDb(SinglyLinkedList<Book^>^ _books); // добавление списка с элементами в базу данных

	SinglyLinkedList<Book^>^ getListFromDb(String^ filepath); // получение списка с элементами из базы данных
private:
	SinglyLinkedList<Book^>^ books; // односвязный список, содержащий объекты книги
};

