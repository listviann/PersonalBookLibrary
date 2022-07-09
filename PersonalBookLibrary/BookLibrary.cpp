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

System::Collections::Generic::List<Book^>^ BookLibrary::toList()
{
	return books->toBuiltInList();
}

void BookLibrary::deleteAll()
{
	books->clear();
}

// ENCAPSULATES LINKED LIST DEBUG
void BookLibrary::printLib()
{
	books->printListDebug();
}

