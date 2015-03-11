#include <iostream>
using namespace std;
int main()
{
	int arr[5] = { 1 , 2 , 3 , 4 , 5 }; // k
	int full_arr[8] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 }; // sample of n ( from 1 to n )
	int true_arr[8] = { 4, 12 , 27 , 42 , 43 , 45 , 100 , 121 }; // true n (just elements of any type)
	int num = 1;
	int n, m;
	n = 7;
	int k = 4;
	int l = 0;
	for (int s = 0; s < 5; s++)
		cout << true_arr[s];
	cout << endl;
	int i;
	while (true)
	{
		for (i = k; i >= 0; i--)
		{
			while (arr[i] < full_arr[n - l])
			{
				arr[i]++;
				for (int f = i + 1; f <= k; f++)
					arr[f] = arr[i] + f - i;
				for (int s = 0; s <= k; s++)
					cout << true_arr[arr[s] - 1];
				cout << endl;
				for (int f = k; f >= i + 1; f--)
				{
					while (arr[f] < full_arr[f + n - k])
					{
						++arr[f];
						for (int s = 0; s <= k; s++)
							cout << true_arr[arr[s] - 1];
						cout << endl;
					}
				}
			}
			++l;
		}
		if (i == -1)
			break;
	}
	return 0;
}
