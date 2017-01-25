#include <iostream>
#include <memory>
#include <string>
#include <list>

using namespace std;

int main (int argc, char *argv[])
{
	shared_ptr<string> p1;
	shared_ptr<list<int>> p2;

	if (!p1)
		cout << "null" << endl;
	return 0;
}
