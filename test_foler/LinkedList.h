#include <iostream>

using namespace std;

struct cell
{
	int datum;
	cell *next;
	cell *previous;
};
class LinkedList
{
public:
	cell *current = new cell;
	LinkedList()
	{
		current->next = NULL;
		current->previous = NULL;
	}
	~LinkedList()
	{
		while (current)
		{
			cell *temp = new cell;
			temp = current->next;
			delete[]current;
			current = temp;
		}
	}
	void Add(int x)
	{
			cell *temp = new cell;
			temp->next = NULL;
			temp->previous = NULL;
			temp->datum = x;
			temp->next = current;
			current->previous = temp;
			current = temp;

	}
	void Show()
	{
		cell *temp = new cell;
		temp = NULL;
		temp = current;
		while (temp)
		{
			cout << temp->datum<<" ";
			temp = temp->next;
		}
		while (temp)
		{
			cout << temp->datum << " ";
			temp = temp->previous;
		}
	}
};
	