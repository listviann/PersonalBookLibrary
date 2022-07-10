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
		return "��������: " + this->name
			+ " �����: " + this->author
			+ " ������������: " + this->publisher
			+ " ������ ����������: " + this->libSection
			+ " �������������: " + this->origin
			+ " ������: " + this->rating
			+ " �������: " + this->exists;
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

