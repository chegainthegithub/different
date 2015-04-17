#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
#include <string>
#include "LinkedList.h"


struct Hcell
{
	public:
	int length;
	linkedlist list;
};

class HashTable
{
	public:
	Hcell *size;
	int dimention;
	HashTable(int dimentions)
	{
		Hcell *size = new Hcell [dimentions] ;
		int i = 0;
		for (;i<dimentions;i++)
			size[i].length = i+1;
		dimention = i;
	}
	void add(string sample)
	{
		int length = (sample).size();
		int local=0;
		while (true)
		{
			
			if (size[local].length == length)
			{
				size[local].list.add(sample);
				break;
			}
		local++;
		}
	}
};
#endif