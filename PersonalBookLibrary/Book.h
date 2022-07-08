#pragma once
#include <iostream>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

ref class Book
{
public:
	// конструкторы
	Book(String^ _name, String^ _author,
		String^ _publisher, String^ libSection,
		String^ _origin, int _rating, bool _exists);

	Book();

	// переопределение метода System::ToString() для отображения данных объекта
	virtual String^ ToString() override
	{
		return "Book name: " + this->name
			+ "\nAuthor name: " + this->author
			+ "\nPublisher: " + this->publisher
			+ "\nLibrary section: " + this->libSection
			+ "\nOrigin: " + this->origin
			+ "\nRating: " + this->rating
			+ "\nExistance: " + this->exists;
	}
	// поля класса
	String^ name; // название книги
	String^ author; // автор книги
	String^ publisher; // издательство
	String^ libSection; // раздел библиотеки
	String^ origin; // происхождение книги
	int rating; // субъективная оценка книги
	bool exists; // маркер о наличии/отсутствии книги
};

