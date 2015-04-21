#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>

using namespace std;


class linkedlist
{
	struct samp
{
	string x;
	samp *next;
};
public:
	samp *Head;
	linkedlist()
	{
		Head = NULL;
	}
	void add(string x)
	{
		samp *temp = new samp;
		temp->x = x;
		temp->next = Head;
		Head = temp;
	}
	void show()
	{
		samp *temp = Head;
		std :: cout << "your list: ";
		while (temp != NULL)
		{
			std :: cout << temp->x << " ";
			temp = temp->next;
		}
		

	}
	~linkedlist()
	{
		while (Head != NULL)
		{
			samp *temp = Head->next;
			delete Head;
			Head = temp;
		}
	}
};
#endif