#include <iostream>
using namespace std;
struct samp
{
	int x;
	samp *next;
};
class linkedlist
{
public:
	samp *Head;
	linkedlist()
	{
		Head = NULL;
	}
	void add(int x)
	{
		samp *temp = new samp;
		temp->x = x;
		temp->next = Head;
		Head = temp;
	}
	void show()
	{
		samp *temp = Head;
		cout << "your list: ";
		while (temp != NULL)
		{
			cout << temp->x << " ";
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