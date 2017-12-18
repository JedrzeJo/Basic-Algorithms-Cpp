#include <iostream>
using namespace std;
void quickSort(int[], int, int);

int main()
{
	int n, i;
	cout << "Podaj ilosc liczb do posortowania: ";
	cin >> n;
	int *T = new int[n]; // utworzenie dynamicznej tablicy na n elementow

		for (i = 0; i < n; i++) // wczytywanie losowych liczb do tablicy
		{
			T[i] = rand()%100;
			//cout << T[i] << endl;
		}
	
	quickSort(T, 0, n - 1);	//wywo³anie qs dolna granica 0 el tab. , górna n-1 el tab.

		for (i = 0; i < n; i++) //wypisanie posortowanych liczb
		{
			cout << T[i] << endl;
		}

	delete[] T;
	system("pause");
	return 0;
}

void quickSort(int tab[], int left, int right)
{
	int i = left;
	int j = right;
	int x = tab[(left + right) / 2];
	do
	{
		while (tab[i] < x)
			i++;

		while (tab[j] > x)
			j--;

		if (i <= j)
		{
			swap(tab[i], tab[j]);
			i++;
			j--;
		}
	} while (i <= j);

	if (left < j) quickSort(tab, left, j);

	if (right > i) quickSort(tab, i, right);

}