#include "FunctionalViewModel.h"
#include "ViewModel.h"

void FunctionalViewModel::addEntity(String^ _name, String^ _author,
    String^ _publisher, String^ _libSection,
    String^ _origin, int _rating, bool _existance)
{
    // создание объекта класса Book
    Book^ book = gcnew Book(_name, _author, _publisher,
        _libSection, _origin, _rating, _existance);

    // добавление объекта класса Book в объект класса BookLibrary
    ViewModel::bookLibrary->addBook(book);
}

void FunctionalViewModel::updateEntity(Book^ _item, String^ _bookName, 
    String^ _authorName, String^ _publisherName, String^ _librarySection,
    String^ _bookOrigin, int _bookRating, bool _bookExistance)
{
    // изменение свойств объекта
    _item->name = _bookName;
    _item->author = _authorName;
    _item->publisher = _publisherName;
    _item->libSection = _librarySection;
    _item->origin = _bookOrigin;
    _item->rating = _bookRating;
    _item->exists = _bookExistance;
}

void FunctionalViewModel::deleteEntity(Book^ _item)
{
    // удаление объекта
    ViewModel::bookLibrary->deleteBook(_item);
}

void FunctionalViewModel::saveToJsonFile(String^ _filename)
{
    // сериализация в JSON и запись в файл
    File::WriteAllText(_filename, 
        JsonConvert::SerializeObject(ViewModel::bookLibrary->toList(), Formatting::Indented));
}

List<Book^>^ FunctionalViewModel::deserializeFromJson(String^ _filename)
{
    // открытие JSON-файла и десериализация из JSON
    List<Book^>^ books = ViewModel::bookLibrary->toList();
    ViewModel::bookLibrary->deleteAll();
    books = JsonConvert::DeserializeObject<List<Book^>^>(File::ReadAllText(_filename));

    return books;
}

void FunctionalViewModel::addDeserializedData(List<Book^>^ _books)
{
    // копирование десериализованных объектов в основное хранилище
    for (int i = 0; i < _books->Count; i++)
    {
        ViewModel::bookLibrary->addBook(_books[i]);
    }
}
