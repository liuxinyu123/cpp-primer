#include <iostream>
#include <memory>
#include <new>

using namespace std;

int main (int argc, char *argv[])
{
	unique_ptr<int []> up (new int [10]);

	for (int i = 0; i != 10; ++i)
		up[i] = i;

	for (int i = 0; i != 10; ++i)
		cout << up[i] << " ";
	cout << endl;

	up.release ();

	shared_ptr<int> sp (new int [10], [] (int *p) { delete [] p; });

	for (int i = 0; i != 10; ++i)
		*(sp.get () + i) = i;

	for (int *p = sp.get (); p != sp.get () + 10; ++p)
		cout << *p << " ";
	cout << endl;


	sp.reset ();


	return 0;
}
