#pragma once
#include <iostream>

using namespace System;

generic <typename T>
ref class Node
{
public:
	T data; // ������ �� ������
	Node<T>^ next;

	// ������������
	Node();
	Node(T _data);
};
