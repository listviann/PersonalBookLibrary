#include "SinglyLinkedList.h"

generic<class T>
inline void SinglyLinkedList<T>::add(T data)
{
	Node<T>^ node = gcnew Node<T>(data);

	if (head == nullptr)
	{
		head = node;
	}
	else
	{
		tail->next = node;
	}

	tail = node;
	count++;
}

generic<class T>
inline bool SinglyLinkedList<T>::remove(T data)
{
	Node<T>^ current = head;
	Node<T>^ previous = nullptr;

	while (current != nullptr)
	{
		if (current->data->Equals(data))
		{
			if (previous != nullptr)
			{
				previous->next = current->next;

				if (current->next == nullptr)
				{
					tail = previous;
				}
			}
			else
			{
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