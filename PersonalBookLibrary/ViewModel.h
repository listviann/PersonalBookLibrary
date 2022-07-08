#pragma once
#include "Book.h"
#include "BookLibrary.h"
#include "SinglyLinkedList.h"

using namespace System;

ref class ViewModel
{
public:
	static BookLibrary^ bookLibrary = gcnew BookLibrary();
};

