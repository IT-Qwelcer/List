#include "list.h"

template<typename T>
inline List<T>::List(T element)
{
	this->element = element;
}

template<typename T>
List<T>::List(const List& list)
{
	this->element = list.element;
}

template<typename T>
List<T>::~List()
{
}

template<typename T>
T List<T>::GetElement()
{
	return element;
}

template<typename T>
bool List<T>::operator==(const List& list)
{
	return this->element == list.element;
}
