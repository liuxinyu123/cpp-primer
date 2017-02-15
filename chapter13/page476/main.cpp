#include <string>

class X
{
	int i;
	std::string s;
};

class HasX
{
	X x;
};

int main(int argc, char* argv[])
{
	X x1;
	X x2 = std::move (x1);

	HasX xx1;
	HasX xx2 = std::move (xx1);

	return 0;
}
