#include <iostream>
#include <new>
#include <memory>
#include <string>

using namespace std;

unique_ptr<int> Clone (int val);
unique_ptr<int> Clone1 (int val);

int main (int argc, char *argv[])
{
	unique_ptr<string> p1 (new string ("hello"));
	unique_ptr<string> p2 (p1.release ());

	p1.reset (p2.release ());
	//if (!p1)
		//cout << *p1 << endl;
	//cout << *p2 << endl;
	cout << *p1 << endl;
	auto p3 = Clone (1);
	cout << *p3 << endl;
	auto p4 = Clone1 (2);
	cout << *p4 << endl;

	return 0;
}

unique_ptr<int> Clone (int val)
{
	return unique_ptr<int> (new int (val));
}

unique_ptr<int> Clone1 (int val)
{
	unique_ptr<int> ret (new int (val));

	return ret;
}
