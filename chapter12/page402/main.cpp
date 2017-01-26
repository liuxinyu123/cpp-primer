#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

int main (int argc, char *argv[])
{
	auto p1 = make_shared<int> (11);
	//{
		auto p2 (p1);
	//}
	auto p3 = make_shared <string> ();

	cout << p1.use_count () << endl;
	cout << p2.use_count () << endl;
	cout << p3.use_count () << endl;

	return 0;

}
