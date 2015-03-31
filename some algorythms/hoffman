#include <iostream>
#include <string>

using namespace std;


struct matrix
{
	char symbol;
	int frequency;
};

void TableTreeConstr(matrix *table)
{

}

int main()
{
	matrix *table = new matrix;
	table[0].symbol = 'A';
	table[1].symbol = 'B';
	table[2].symbol = 'C';
	for(int i =0;i<3;i++)
		table[i].frequency =0;
	string line;
	cin >> line;
	for (int i = 0;i<line.size();i++)
	{
		char buffer;
		buffer = line[i];
		for (int j = 0;j<3;j++)
		{
			if (table[j].symbol == buffer)
				table[j].frequency++;
		}
	}
	for (int i =0;i<3;i++)
		cout<<table[i].frequency<<" ";
	cout << endl;

}
