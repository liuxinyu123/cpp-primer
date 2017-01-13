#include <iostream>
#include<string>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::list;

void Print(const list<string> &l);

int main(int argc, char *argv[])
{
	list<string> strList(3, "hi");
	Print(strList);

	strList.resize(10, "fuck");
	Print(strList);

	strList.resize(5,"hello");
	Print(strList);

	return 0;
}

void Print(const list<string> &l)
{
	cout << "The size is " << l.size() << endl;

	for(const auto &elem : l)
		cout << elem << " ";
	cout << endl;
}
