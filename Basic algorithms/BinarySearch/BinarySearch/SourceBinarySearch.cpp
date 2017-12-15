#include <iostream>
using namespace std;

int binarySearch(int *p, int n, int);

int main()
{
	int a;
	cout << "Type number which You are looking for(from 1 to 10): " << endl;
	cin >> a;
	int T[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int result = binarySearch(T, a, 10);
	if (result == -1) 
	{ 
		cout << "Number out of range (1-10)." << endl; 
	}
	else 
	{ 
		cout << "Your number " << a << " is in " << result << 
			" cell in our array!"<<endl; 
	}
	system("pause");
	return 0;
}

int binarySearch(int *p, int n, int size)
{
	int bottom = 0;		
	int top = size - 1;
	int middle;

	while(true)
	{
		int middle = (bottom + top) / 2;
		if (bottom > top) { return -1; }
		else if (p[middle] == n) { return middle; }			//n-number we are looking for
		else if (p[middle] < n) bottom = middle + 1; 	
		else if (p[middle] > n) top = middle - 1; 
	}
	return 0;
}