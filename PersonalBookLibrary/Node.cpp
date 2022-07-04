#include "Node.h"
#include <iostream>

using namespace System;

generic <class T>
Node<T>::Node() { }

generic <class T>
Node<T>::Node(T _data)
{
	data = _data;
}