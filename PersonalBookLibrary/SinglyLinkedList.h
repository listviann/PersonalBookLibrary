#pragma once
#include "Node.h"
#include <iostream>

using namespace System;

generic <typename T>
ref class SinglyLinkedList
{
public:
	void add(T data); // добавление элемента
	bool remove(T data); // уделение элемента 
	bool isEmpty(); // проверка на наличие элементов в списке
	int getSize(); // получение размера списка
	void printList(); // печать списка (метод для теста)

private:
	Node<T>^ head; // головной элемент
	Node<T>^ tail; // хвостовой элемент
	int count; // количество элементов в списке
};
