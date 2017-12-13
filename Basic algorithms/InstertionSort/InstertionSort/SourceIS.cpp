#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
	cout << "How many numbers you want to put in array? " << endl;
	int a, b;
	cin >> a;
	int *w = new int[a];
	for (int i = 0; i < a; i++) {
		w[i] = rand() % 101;
		cout << w[i] << endl;
	}
	cout << "Type 1 if You wanna sort " << endl;
	cin >> b;
	if (b == 1) {
		cout << "It'll take a second for INSERTION SORT to get the job done. " << endl;
		for (int i = 1; i < a; i++) {
			for (int j = i; j >= 1; j--) {
				if (w[j - 1] > w[j]) {
					int tmp = w[j];
					w[j] = w[j - 1];
					w[j - 1] = tmp;
				}
			}
		}
		cout << "10 numbers from 10 sections, each number after 10% : " << endl;
		for (int i = 0; i < a; i = i + a / 10) {
			cout << "Number No " << i << "):" << w[i] << endl;
		}
	}
	else { cout << "Finito" << endl; }
	system("pause");
	return 0;
}
