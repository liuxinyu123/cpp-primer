#include <iostream>
#include <vector>
#include <memory>

int main (int argc, char *argv[])
{
	std::vector<int> iVec;

	for (int i = 0; i != 20; ++i)
		iVec.push_back (i);

	std::allocator<int> alloc;
	auto p = alloc.allocate (2 * iVec.size ());
	auto q = std::uninitialized_copy (iVec.begin (), iVec.end (), p);
	std::uninitialized_fill_n (q, iVec.size (), 22);


	return 0;
}
