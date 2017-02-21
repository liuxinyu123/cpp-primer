#include <utility>

class Base
{

public:
		Base ();
		Base (const Base &b) = delete;
};

class Derived : public Base
{

public:

};

int main (int argc, char *argv[])
{
	Derived d1;
	Derived d2 (d1);
	Derived d3 (std::move (d1));

	return 0;

}
