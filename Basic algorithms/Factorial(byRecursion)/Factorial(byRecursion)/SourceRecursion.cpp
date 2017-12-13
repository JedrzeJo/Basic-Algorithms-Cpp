#include <iostream>
using namespace std;

int silnia(int a);

int main() {
	cout << "If you wanna quit program, type -1" << endl;
	while (true) {
		cout << "Choose number from 0 to 30 to count a factorial for it: " << endl;
		int x;
		cin >> x;
		if (x >= 0 && x <= 30) {
			cout << "Factorial from " << x << " is " << silnia(x) << endl;
			cout << "digit in units section: " << silnia(x) % 10 << endl;			//cyfra w jednosiach
			cout << "digit in tens section: " << (silnia(x) / 10) % 10 << endl;			//cyfra w dziesi¹tkach

		}
		else if (x == -1) { break; }
		else { cout << "Wrong number" << endl; }
	}
	cout << "Finito! Hope you've enjoyed :)" << endl;
	system("pause");
	return 0;
}

int silnia(int a) {
	if (a == 0) { return 1; }
	else { return a = a*silnia(a - 1); }			//Recursion
}