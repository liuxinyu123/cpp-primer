#include <new>
#include <iostream>
#include <memory>
#include <string>

using std::string;

int main (int argc, char *argv[])
{
	std::shared_ptr<int> p (new int (11));
	int *q = p.get ();
	p.reset (new int (22));
	//{
	//std::shared_ptr<int> p1 (q);
	//}

	int i = *q;
	
	std::cout << *p << std::endl;

	std::shared_ptr<string> p2 (new string ("hello"));
	std::shared_ptr<string> p3 (p2);

	if (!p2.unique ())
		p2.reset (new string (*p2));
	*p2 += "world";

	std::cout << *p2 << std::endl;
	std::cout << *p3 << std::endl;


	return 0;
}
