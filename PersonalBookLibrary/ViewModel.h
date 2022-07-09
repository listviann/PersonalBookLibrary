#pragma once
#include "Book.h"
#include "BookLibrary.h"
#include "SinglyLinkedList.h"

using namespace System;

// ViewModel для связи объекта BookLibrary со всеми окнами приложения
ref class ViewModel
{
public:
	static BookLibrary^ bookLibrary = gcnew BookLibrary();
	static String^ filename = ".\\libraryData.json";
};

