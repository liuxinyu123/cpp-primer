#include <iostream>
#include <memory>
#include <string>
#include <vector>


using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::make_shared;
using std::shared_ptr;

int main (int argc, char *argv[])
{
	shared_ptr<int> p1 = make_shared<int> (23);
	shared_ptr<string> p2 = make_shared<string> (10, 'a');
	shared_ptr<int> p3 = make_shared<int> ();
	
	auto p4 = make_shared<vector<string>> ();
	auto p5 = p1;

	cout << "p1 is " << *p1 << " and use count is " << p1.use_count () << endl;
	cout << "p2 is " << *p2 << endl;
	cout << "p3 is " << *p3 << endl;
	cout << "p4 is ";
	for (const auto &elem : *p4)
		cout << elem << " ";
	cout << endl;

	return 0;
}

