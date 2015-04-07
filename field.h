#ifndef FIELD_H
#define FIELD_H

#include <iostream>
#include <string>
using namespace std;

struct teil
{
	int object;
};
class Field
{
public:
	int length;
	int weitgh;
		teil gamefield[25][25];
	Field()
	{
		length = 25;
		weitgh = 25;
		for (int i = 0;i<25;i++)
			for (int j = 0;j<25;j++)
			{
				gamefield[i][j].object = 0;

			}
	}
};

#endif
