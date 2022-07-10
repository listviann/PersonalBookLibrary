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

// ����� �� �����
List<Book^>^ BookLibrary::find(String^ searchName)
{
	List<Book^>^ foundItems = gcnew List<Book^>();

	for (int i = 0; i < books->toBuiltInList()->Count; i++)
	{
		if (books->toBuiltInList()[i]->name == searchName)
		{
			foundItems->Add(books->toBuiltInList()[i]);
		}
	}

	return foundItems;
}

List<Book^>^ BookLibrary::find(String^ searchAuthor, String^ searchPublisher, String^ searchOrigin, String^ selectedParameter)
{
	List<Book^>^ foundItems = gcnew List<Book^>();

	if (selectedParameter == "�����")
	{
		for (int i = 0; i < books->toBuiltInList()->Count; i++)
		{
			if (books->toBuiltInList()[i]->author == searchAuthor)
			{
				foundItems->Add(books->toBuiltInList()[i]);
			}
		}
	}
	else if (selectedParameter == "������������")
	{
		for (int i = 0; i < books->toBuiltInList()->Count; i++)
		{
			if (books->toBuiltInList()[i]->publisher == searchPublisher)
			{
				foundItems->Add(books->toBuiltInList()[i]);
			}
		}
	}
	else if (selectedParameter == "�������������")
	{
		for (int i = 0; i < books->toBuiltInList()->Count; i++)
		{
			if (books->toBuiltInList()[i]->origin == searchOrigin)
			{
				foundItems->Add(books->toBuiltInList()[i]);
			}
		}
	}

	return foundItems;
}

List<Book^>^ BookLibrary::find(int searchRating)
{
	List<Book^>^ foundItems = gcnew List<Book^>();

	for (int i = 0; i < books->toBuiltInList()->Count; i++)
	{
		if (books->toBuiltInList()[i]->rating == searchRating)
		{
			foundItems->Add(books->toBuiltInList()[i]);
		}
	}

	return foundItems;
}

List<Book^>^ BookLibrary::find(String^ section, String^ existance, String^ selectedParameter)
{
	List<Book^>^ foundItems = gcnew List<Book^>();

	if (selectedParameter == "������")
	{
		for (int i = 0; i < books->toBuiltInList()->Count; i++)
		{
			if (books->toBuiltInList()[i]->libSection == section)
			{
				foundItems->Add(books->toBuiltInList()[i]);
			}
		}
	}
	else if (selectedParameter == "�������")
	{
		if (existance == "��")
		{
			for (int i = 0; i < books->toBuiltInList()->Count; i++)
			{
				if (books->toBuiltInList()[i]->exists == true)
				{
					foundItems->Add(books->toBuiltInList()[i]);
				}
			}
		}
		else if (existance == "���")
		{
			for (int i = 0; i < books->toBuiltInList()->Count; i++)
			{
				if (books->toBuiltInList()[i]->exists == false)
				{
					foundItems->Add(books->toBuiltInList()[i]);
				}
			}
		}
	}

	return foundItems;
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

