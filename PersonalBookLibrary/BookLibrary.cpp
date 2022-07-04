#include "BookLibrary.h"

using namespace System;

void BookLibrary::addBook(String^ _name, String^ _author,
	String^ _publisher, String^ _libSection,
	String^ _origin, int _rating,
	bool _exist, SinglyLinkedList<Book^>^ _books)
{
	throw gcnew System::NotImplementedException();
}

void BookLibrary::deleteBook(SinglyLinkedList<Book^>^ _books)
{
	throw gcnew System::NotImplementedException();
}

void BookLibrary::editBook(String^ _name, String^ _author, String^ _publisher, String^ _libSection, String^ _origin, int _rating, bool _exist, SinglyLinkedList<Book^>^ _books)
{
	throw gcnew System::NotImplementedException();
}

Book^ BookLibrary::find(String^ parameter)
{
	throw gcnew System::NotImplementedException();
	// // O: insert return statement here
}

void BookLibrary::addListToDb(SinglyLinkedList<Book^>^ _books)
{
	throw gcnew System::NotImplementedException();
}

SinglyLinkedList<Book^>^ BookLibrary::getListFromDb(String^ filepath)
{
	throw gcnew System::NotImplementedException();
	// // O: insert return statement here
}
