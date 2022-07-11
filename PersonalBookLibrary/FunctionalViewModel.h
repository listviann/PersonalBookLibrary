#pragma once
#include "Book.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace Newtonsoft::Json;
using namespace System::IO;

ref class FunctionalViewModel
{
public:
	static void addEntity(String^ _name, String^ _author, 
		String^ _publisher, String^ _libSection, 
		String^ _origin, int _rating, bool _existance);
	static void updateEntity(Book^ _item, String^ _bookName,
		String^ _authorName, String^ _publisherName, String^ _librarySection,
		String^ _bookOrigin, int _bookRating, bool _bookExistance);
	static void deleteEntity(Book^ item);
	static void saveToJsonFile(String^ _filename);
	static List<Book^>^ deserializeFromJson(String^ _filename);
	static void addDeserializedData(List<Book^>^ _books);
};

