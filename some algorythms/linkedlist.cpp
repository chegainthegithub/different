#include <iostream>
using namespace std;
class linkedlist
{
public:
	int x;
	linkedlist *Head;
	linkedlist()
	{
		Head = NULL;
	}
	void add(int x)
	{
		linkedlist *temp = new linkedlist;
		temp->x = x;
		temp->Head = Head;
		Head = temp;
	}
	void show()
	{
		linkedlist *temp = Head;
		cout << "your list: ";
		while (temp != NULL)
		{
			cout << temp->x << " ";
			temp = temp->Head;
		}

	}
	~linkedlist()
	{
	/*	while (Head != NULL)
		{
			linkedlist *temp = Head->Head; //better use structure rly
			delete Head;
			Head = temp;
		}*/
	}
};

int main()
{
	linkedlist a;
	int N; int buf;
	cout << "N: "; cin >> N; cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "[" << i + 1 << "]: "; cin >> buf; cout << endl;
		a.add(buf);
	}
	a.show();
}