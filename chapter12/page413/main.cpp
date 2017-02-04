#include <iostream>
#include <memory>
#include <new>

using namespace std;

void Process (shared_ptr<int> p);

int main (int argc, char *argv[])
{
	shared_ptr<int> p1 (new int (11));
	Process (p1);
	
	cout << *p1 << endl;

	int *p2 (new int (22));
	Process (shared_ptr<int> (p2));

	cout << *p2 << endl;

	return 0;	
}

void Process (shared_ptr<int> p)
{
	
}
