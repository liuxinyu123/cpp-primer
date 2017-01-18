#include <list>
#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::list;
using std::inserter;

int main (int argc, char *argv[])
{
	list<int> iList;
	auto it = inserter (2, iList.end ());
	
	if (it == iList.end ())
		cout << "end" << endl;

	return 0;	
}
