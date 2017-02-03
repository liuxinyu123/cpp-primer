#include <memory>
#include <new>

int main (int argc, char *argv[])
{
	std::shared_ptr<int> p1;
	std::shared_ptr<int> p2 (new int (11));
	int *p3 = new int (32);

	return 0;
}
