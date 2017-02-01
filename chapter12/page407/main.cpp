#include <iostream>
#include <new>
#include <string>
#include <vector>

using std::cout;
using std::endl;
//using std::new;
using std::string;
using std::vector;

int main (int argc, char *argv[])
{
	int *pi1 = new int;
	string *ps1 = new string;
	int *pi2 = new int (20);
	string *ps2 = new string (10, 'o');
	vector<int> *pv = new vector<int> {1, 2, 3, 4, 5, 6, 7, 8, 9};

	cout << *pi1 << endl;
	cout << *ps1 << endl;

	cout << *pi2 << endl;
	cout << *ps2 << endl;

	for (const auto &elem : *pv)
		cout << elem << " ";
	cout << endl;

	return 0;
}
