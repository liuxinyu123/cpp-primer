#include <iostream>
#include <string>
#include <new>

using namespace std;

int main (int argc, char *argv[])
{
	int *pia1 = new int[10];
	int *pia2 = new int[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	string *psa1 = new string[10];
	string *psa2 = new string[10] {"a", "an", "the", string (3, 'x')};

	for (int i = 0; i < 10; ++i)
		cout << *pia1++ << " ";
	cout << endl;

	for (int i = 0; i < 10; ++i)
		cout << *pia2++ << " ";
	cout << endl;

	for (int i = 0; i < 10; ++i)
		cout << *psa1++ << " ";
	cout << endl;

	for (int i = 0; i < 10; ++i)
		cout << *psa2++ << " ";
	cout << endl;

	return 0;
}
