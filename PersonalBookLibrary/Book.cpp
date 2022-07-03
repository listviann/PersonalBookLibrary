#include "Book.h"
#include <iostream>

using namespace System;

Book::Book(String^ _name, String^ _author,
	String^ _publisher, String^ _libSection,
	String^ _origin, String^ _assessment, bool _exists)
{
	name = _name;
	author = _author;
	publisher = _publisher;
	libSection = _libSection;
	origin = _origin;
	assessment = _assessment;
	exists = exists;
}

Book::Book()
{

}

String^::Book::getName()
{
	return name;
}

String^::Book::getAuthor()
{
	return author;
}

String^::Book::getPublisher()
{
	return publisher;
}

String^::Book::getLibSection()
{
	return libSection;
}

String^::Book::getOrigin()
{
	return origin;
}

String^::Book::getAssessment()
{
	return assessment;
}

bool::Book::checkExistance()
{
	return exists;
}

void Book::setName(String^ _name)
{
	name = _name;
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

void Book::SetAssessment(String^ _assessment)
{
	assessment = _assessment;
}

void Book::setExistance(bool _exists)
{
	exists = _exists;
}
