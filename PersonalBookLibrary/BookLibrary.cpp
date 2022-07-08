#include "BookLibrary.h"

using namespace System;

void BookLibrary::addBook(Book^ _book)
{
	books->add(_book);
}

void BookLibrary::deleteBook(Book^ _book)
{
	books->remove(_book);
}

//void BookLibrary::editBook(Book^ _book, String^ _name, String^ _author, String^ _publisher, String^ _libSection, String^ _origin, int _rating, bool _exist)
//{
//	_book->setName(_name);
//	_book->setAuthor(_author);
//	_book->setPublisher(_publisher);
//	_book->setLibSection(_libSection);
//	_book->setOrigin(_origin);
//	_book->setRating(_rating);
//	_book->setExistanceMarker(_exist);
//}

Book^ BookLibrary::find(String^ parameter)
{
	/*if (parameter == "name")
	{

	}*/

	throw gcnew System::NotImplementedException();
}

void BookLibrary::addListToDb()
{
	throw gcnew System::NotImplementedException();
}

SinglyLinkedList<Book^>^ BookLibrary::getListFromDb(String^ filepath)
{
	throw gcnew System::NotImplementedException();
	// // O: insert return statement here
}

System::Collections::Generic::List<Book^>^ BookLibrary::toList()
{
	return books->toBuiltInList();
}

// ENCAPSULATES LINKED LIST DEBUG
void BookLibrary::printLib()
{
	books->printListDebug();
}
