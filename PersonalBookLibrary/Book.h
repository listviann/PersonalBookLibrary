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

	// геттеры (методы для получения значений приватных полей)
	String^ getName();
	String^ getAuthor();
	String^ getPublisher();
	String^ getLibSection();
	String^ getOrigin();
	int getRating();
	bool checkExistance();

	// сеттеры (для установки или редактирования значений приватных полей)
	void setName(String^ _name);
	void setAuthor(String^ _author);
	void setPublisher(String^ _publisher);
	void setLibSection(String^ _libSection);
	void setOrigin(String^ _origin);
	void setRating(int _rating);
	void setExistanceMarker(bool _existance);

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
//private:
//	// поля класса
//	String^ name; // название книги
//	String^ author; // автор книги
//	String^ publisher; // издательство
//	String^ libSection; // раздел библиотеки
//	String^ origin; // происхождение книги
//	int rating; // субъективная оценка книги
//	bool exists; // маркер о наличии/отсутствии книги
};

