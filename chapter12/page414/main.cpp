#include <new>
#include <iostream>
#include <memory>

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

	return 0;
}
