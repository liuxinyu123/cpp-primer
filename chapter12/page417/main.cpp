#include <iostream>
#include <new>
#include <memory>

using namespace std;

int main (int argc, char *argv[])
{
	unique_ptr<int> p1 (new int (111));
	//unique_ptr<int> p2 (p1);
	//unique_ptr<int>  p3 = p1;
	
	cout << *p1 << endl;
	return 0;
}
