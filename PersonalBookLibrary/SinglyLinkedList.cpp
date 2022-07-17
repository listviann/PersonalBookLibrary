#include "SinglyLinkedList.h"

using namespace System::Diagnostics;

generic<class T>
inline void SinglyLinkedList<T>::add(T data)
{
	Node<T>^ node = gcnew Node<T>(data);

	if (head == nullptr)
	{
		// установка головного элемента
		head = node;
	}
	else
	{
		// получение ссылки на новый узел
		tail->next = node;
	}

	// переустановка хвостового элемента
	tail = node;
	count++;
}

generic<class T>
inline bool SinglyLinkedList<T>::remove(T data)
{
	// для обхода списка
	Node<T>^ current = head;
	// для отслеживания предыдущего узла
	Node<T>^ previous = nullptr;

	while (current != nullptr)
	{
		if (current->data->Equals(data))
		{
			// если элемент в середине или в конце
			if (previous != nullptr)
			{
				/*переустановка предыдущего узла по отношению к удаляемому 
				на следующий по отношению к удаляемому*/
				previous->next = current->next;

				if (current->next == nullptr)
				{
					tail = previous;
				}
			}
			// если элемент в начале
			else
			{
				// происходит удаление с начала списка
				head = head->next;
				if (head == nullptr)
				{
					tail = nullptr;
				}
			}
			count--;
			return true;
		}

		previous = current;
		current = current->next;
	}
	return false;
}

generic<class T>
inline bool SinglyLinkedList<T>::isEmpty()
{
	if (count == 0)
	{
		return true;
	}

	return false;
}

generic<class T>
inline int SinglyLinkedList<T>::getSize()
{
	return count;
}

generic<class T>
inline void SinglyLinkedList<T>::printList()
{
	Node<T>^ current = head;
	while (current != nullptr)
	{
		Console::WriteLine(current->data);
		current = current->next;
	}
}

generic<class T>
inline bool SinglyLinkedList<T>::contains(T data)
{
	Node<T>^ current = head;
	while (current != nullptr)
	{
		if (current->data->Equals(data))
		{
			return true;
		}
		current = current->next;
	}
	return false;
}

generic<typename T>
void SinglyLinkedList<T>::clear()
{
	head = nullptr;
	tail = nullptr;
	count = 0;
}

generic<typename T>
void SinglyLinkedList<T>::printListDebug()
{
	Node<T>^ current = head;
	while (current != nullptr)
	{
		Debug::WriteLine(current->data + "\n");
		current = current->next;
	}
}

generic<typename T>
System::Collections::Generic::List<T>^ SinglyLinkedList<T>::toBuiltInList()
{
	// преобразование в System::Collections::Generic::List<T>
	System::Collections::Generic::List<T>^ _list = gcnew System::Collections::Generic::List<T>();
	Node<T>^ current = head;

	while (current != nullptr)
	{
		_list->Add(current->data);
		current = current->next;
	}

	return _list;
}
