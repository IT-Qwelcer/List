#include "list.h"
#include "list.cpp"
#include <iostream>
#include <string>
#include <list>

int main(int argc, char** argv)
{
	std::list<std::string> _list;

	std::string element = "";

	//////////////////////////////////////////////////////////////////

	List<std::string> list(element);
	List<std::string> list2(list);

	//////////////////////////////////////////////////////////////////

	bool result = list == list2;

	int x;
	do
	{
		std::cout << "\n 1.Add to head" << "\n 2.Add to tail" << "\n 3.Del from head" << "\n 4.Del from tail" << "\n 5.Del all" << "\n 6.Print" << "\n 0.Exit" << "\n\n Select an action:\n -> ";
		std::cin >> x;
		system("cls");
		switch (x)
		{
		case 1:
			std::cout << " Enter element -> "; std::cin >> element;
			if (element.size() > 0)
			{
				_list.push_front(element);
			}
			break;
		case 2:
			std::cout << " Enter element -> "; std::cin >> element;
			if (element.size() > 0)
			{
				_list.push_back(element);
			}
			break;
		case 3:
			_list.pop_front();
			break;
		case 4:
			_list.pop_back();
			break;
		case 5:
			_list.clear();
			break;
		case 6:
			for (auto iter = _list.begin(); iter != _list.end(); iter++)
			{
				std::cout << *iter << std::endl;
			}
			//////////////////////////////////////////////////////////////////
			if (result)
			{
				std::cout << " list == list2 " << std::endl;
			}
			else
			{
				std::cout << "list != list2 " << std::endl;
			}
			//////////////////////////////////////////////////////////////////
			break;
		default:
			//std::cout << " Error!" << std::endl;
			break;
		}
	} while (x != 0);

	return 0;
}