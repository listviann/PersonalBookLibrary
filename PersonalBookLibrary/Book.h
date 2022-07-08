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

	// ������� (������ ��� ��������� �������� ��������� �����)
	String^ getName();
	String^ getAuthor();
	String^ getPublisher();
	String^ getLibSection();
	String^ getOrigin();
	int getRating();
	bool checkExistance();

	// ������� (��� ��������� ��� �������������� �������� ��������� �����)
	void setName(String^ _name);
	void setAuthor(String^ _author);
	void setPublisher(String^ _publisher);
	void setLibSection(String^ _libSection);
	void setOrigin(String^ _origin);
	void setRating(int _rating);
	void setExistanceMarker(bool _existance);

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
//private:
//	// ���� ������
//	String^ name; // �������� �����
//	String^ author; // ����� �����
//	String^ publisher; // ������������
//	String^ libSection; // ������ ����������
//	String^ origin; // ������������� �����
//	int rating; // ������������ ������ �����
//	bool exists; // ������ � �������/���������� �����
};

