#pragma once
#include "Node.h"
#include <iostream>

using namespace System;

generic <typename T>
ref class SinglyLinkedList
{
public:
	void add(T data); // ���������� ��������
	bool remove(T data); // �������� �������� 
	bool isEmpty(); // �������� �� ������� ��������� � ������
	int getSize(); // ��������� ������� ������
	void printList(); // ������ ������ (����� ��� �����)

private:
	Node<T>^ head; // �������� �������
	Node<T>^ tail; // ��������� �������
	int count; // ���������� ��������� � ������
};
