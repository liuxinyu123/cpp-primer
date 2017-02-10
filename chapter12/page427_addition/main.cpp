#include <iostream>
#include <memory>
#include <string>

//using namespace std;

int main (int argc, char *argv[])
{
	std::allocator<std::string> alloc;
	
	auto const p = alloc.allocate (10);

	//for (auto *q = p; q != p + 10; ++q)
		//std::cout << *q << " ";
	//std::cout << std::endl;
	auto q = p;
	alloc.construct (q++);
	alloc.construct (q++, 10, 'x');
	alloc.construct (q++, "hello");
	

	while (q != p)
		alloc.destroy (--q);

	alloc.deallocate (p, 10);

	return 0;		
}
