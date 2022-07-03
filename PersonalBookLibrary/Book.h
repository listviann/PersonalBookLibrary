#pragma once
#include <iostream>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

ref class Book
{
public:
	Book(String^ _name, String^ _author, 
		String^ _publisher, String^ _libSection, 
		String^ _origin, String^ _assessment, bool _exists);

	Book();

	String^ getName();
	String^ getAuthor();
	String^ getPublisher();
	String^ getLibSection();
	String^ getOrigin();
	String^ getAssessment();
	bool checkExistance();

	void setName(String^ _name);
	void setAuthor(String^ _author);
	void setPublisher(String^ _publisher);
	void setLibSection(String^ _libSection);
	void setOrigin(String^ _origin);
	void SetAssessment(String^ _assessment);
	void setExistance(bool _exists);

private:
	String^ name;
	String^ author;
	String^ publisher;
	String^ libSection;
	String^ origin;
	String^ assessment;
	bool exists;
};

