#include <iostream>

class Foo
{
public:
	Foo () {}
	Foo (const Foo&) {}
};

int main (int argc, char *argv[])
{
	Foo f1;
	Foo f2 (f1);
	Foo f3 = f2;

	return 0;
}
