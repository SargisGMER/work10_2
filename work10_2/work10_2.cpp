#include "pr.h"
int N = 4;
int main()
{
	float average;
	Journal * pointer = new Journal[N];
	for (size_t i = 0; i < N; i++)
	{
		cout << "Enter the name of journal: ";
		cin >> pointer[i].name;
		cout << "Enter the printing: ";
		cin >> pointer[i].val;
		cout << "Enter the price: ";
		cin >> pointer[i].price;
	}
	average = func(pointer);
	cout << average << endl;
	system("pause");
    return 0;
}

