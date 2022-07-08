#pragma once
#include <iostream>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

ref class Book
{
public:
	// ������������
	Book(String^ _name, String^ _author,
		String^ _publisher, String^ libSection,
		String^ _origin, int _rating, bool _exists);

	Book();

	// ��������������� ������ System::ToString() ��� ����������� ������ �������
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
	// ���� ������
	String^ name; // �������� �����
	String^ author; // ����� �����
	String^ publisher; // ������������
	String^ libSection; // ������ ����������
	String^ origin; // ������������� �����
	int rating; // ������������ ������ �����
	bool exists; // ������ � �������/���������� �����
};

