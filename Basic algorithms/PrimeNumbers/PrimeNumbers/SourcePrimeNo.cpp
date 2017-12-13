#include <iostream>
using namespace std;

bool funkcja(int a);

int main()
{
	cout << "Check if the number is a Prime number (could be divided only by 1 and itself)." << endl;
	cout << "If You wanna quit type 0" << endl;
	int a;
	do {
		cin >> a;
		int b = funkcja(a);
		if (a == 1) { cout << "YES" << endl; }
		else if (a == 0) { cout << "FINITTTO" << endl; break; }
		else if (b) { cout << "YES" << endl; }
		else { cout << "NO" << endl; }
	} while (a != 0);
	system("pause");
	return 0;
}

bool funkcja(int a) {
	int licznik = 0;
	for (int i = 1; i <= a; i++) {
		if (a%i == 0) { licznik = licznik + 1; };
	}
	if (licznik == 2) { return true; }
	else { return false; };
}
