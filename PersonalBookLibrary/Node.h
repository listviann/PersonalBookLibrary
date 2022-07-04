#pragma once
#include <iostream>

using namespace System;

generic <typename T>
ref class Node
{
public:
	T data; // ссылка на данные
	Node<T>^ next;

	// конструкторы
	Node();
	Node(T _data);
};
