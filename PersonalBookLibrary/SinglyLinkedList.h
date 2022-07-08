#pragma once
#include "Node.h"
#include <iostream>

using namespace System;
using namespace System::Diagnostics;

generic <typename T>
ref class SinglyLinkedList
{
public:
	void add(T data); // ���������� ��������
	bool remove(T data); // �������� �������� 
	bool isEmpty(); // �������� �� ������� ��������� � ������
	int getSize(); // ��������� ������� ������
	void printList(); // ������ ������ (����� ��� �����)
	bool contains(T data);

	// TO DEBUG
	void printListDebug();
	System::Collections::Generic::List<T>^ toBuiltInList();
private:
	Node<T>^ head; // �������� �������
	Node<T>^ tail; // ��������� �������
	int count; // ���������� ��������� � ������
};
