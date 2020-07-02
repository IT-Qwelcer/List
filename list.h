#pragma once
template<typename T>
class List
{
public:
	List(T element);
	List(const List& list);
	~List();

	T GetElement();
	bool operator ==(const List& list);

private:
	T element;
};

