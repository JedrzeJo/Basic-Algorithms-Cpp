#include <iostream>
using namespace std;

void sprawdz(int x, int y);

int main()
{
	int a, b;
	cout << "Type a BOTTOM limit of section from which You're gonna guess a number: " << endl;
	cin >> a;
	cout << "Type a TOP limit of section...(MAX value) : " << endl;
	cin >> b;

	int x = (rand() % (b - a + 1)) + a;
	cout << "Try Your luck: " << endl;
	int y;
	int licznik=0;
	do  {
		cin >> y;
			if (y > b || y < a) { 
				cout << "Out of section, are you a dumbass or what?" << endl;
				licznik++;
				continue; 
			};
		sprawdz(x, y);
		licznik++;
	} while (x != y);
	cout << "You have solved this mysterious puzzle in " << licznik <<" steps."<< endl;
	system("pause");
	return 0;
}

void sprawdz(int x, int y) {
	if (x == y) { cout << "CONGRATZZZ!!!" << endl; }
	else if (x > y) { cout << "try with a bigger value" << endl; }
	else { cout << "try with a smaller value" << endl; };
}