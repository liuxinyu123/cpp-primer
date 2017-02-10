#include <iostream>

class Foo
{
public:
		Foo () { std::cout << "This is construct function" << std::endl; }
		Foo (const Foo&) { std::cout << "This is copy construct function" << std::endl; }
		Foo& operator= (const Foo&) { std::cout << "This is copy assign function" << std::endl; }

};

int main (int argc, char *argv[])
{
	Foo f1;
	Foo f2 = f1;
	Foo f3;
	f3 = f2;
	return 0;
}
