#include <iostream>
#include <list>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	std::list<int> iList(10,1);

	if(!iList.empty())
		cout << "The max size of iList is " << iList.max_size() << "\nThe size of iList is:"
				<< iList.size() << endl;

	return 0;
}
