#include "Book.h"
#include <iostream>

using namespace System;

Book::Book()
{

}

Book::Book(String^ _name, String^ _author,
	String^ _publisher, String^ _libSection,
	String^ _origin, int _rating, bool _exists)
{
	name = _name;
	author = _author;
	publisher = _publisher;
	libSection = _libSection;
	origin = _origin;
	rating = _rating;
	exists = _exists;
}

// геттеры
String^ Book::getName()
{
	return name;
}

String^ Book::getAuthor()
{
	return author;
}

String^ Book::getPublisher()
{
	return publisher;
}

String^ Book::getLibSection()
{
	return libSection;
}

String^ Book::getOrigin()
{
	return origin;
}

int Book::getRating()
{
	return rating;
}

bool Book::checkExistance()
{
	return exists;
}

// сеттеры
void Book::setName(String^ _name)
{
	name = name;
}

void Book::setAuthor(String^ _author)
{
	author = _author;
}

void Book::setPublisher(String^ _publisher)
{
	publisher = _publisher;
}

void Book::setLibSection(String^ _libSection)
{
	libSection = _libSection;
}

void Book::setOrigin(String^ _origin)
{
	origin = _origin;
}

void Book::setRating(int _rating)
{
	rating = rating;
}

void Book::setExistanceMarker(bool _existance)
{
	exists = _existance;
}
