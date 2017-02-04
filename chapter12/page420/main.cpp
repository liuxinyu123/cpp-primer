#include <iostream>
#include <memory>
#include <new>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	shared_ptr<int> p1 (new int (1));
	weak_ptr<int> p2 (p1);

	cout << p1.use_count () << endl;
	cout << *p2.lock () << endl;

	return 0;
}
