#include <iostream>
using namespace std;


int main()
{
	//1
	/*
	* for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	*/

	//2
	/*
	int village[] = { 2, 3, 5, 1, 7, 9, 2, 3, 4, 3, 2 };
	int n = sizeof(village) / sizeof(village[0]);

	int min = village[0];
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (min > village[i])
		{
			min = village[i];
		}

		sum += village[i];

	}

	cout << "min - " << min << ";  how many people live in the village - " << sum << endl;
	*/

	//3
	/*
	int n = 5, m = 9;

	for (int i = 0; i < m; i++)
		cout << "-";
	cout << endl;


	for (int j = 0; j < (n / 2 - 1); j++)
	{
		for (int i = 0; i < (m / 2 + 1); i++)
			cout << "| ";
		cout << endl;
	}


	for (int i = 0; i < m; i++)
		cout << "-";
	cout << endl;


	for (int j = 0; j < (n / 2 - 1); j++)
	{
		for (int i = 0; i < (m / 2 + 1); i++)
			cout << "| ";
		cout << endl;
	}

	for (int i = 0; i < m; i++)
		cout << "-";
	cout << endl;
	*/

	//4
	/*
	int n, m;
	cin >> n >> m;

	int cell_count = n * m;


	int max_1 = 0, max_2 = 0;

	int k = 1 , t;

	while (cell_count)
	{
		cout << "left " << cell_count << " free cells" << endl;
		cin >> t;

		cell_count -= t;

		if (k == 1 && t > max_1) max_1 = t;
		if (k == 2 && t > max_2) max_2 = t;

		k++;

		if (k > 2) k = 1;
	}

	if( k == 2) cout << 1 << "player won" << endl;
	else        cout << 2 << "player won" << endl;


	cout << "max player 1 = " << max_1 << endl;
	cout << "max player 2 = " << max_2 << endl;
	*/


}
