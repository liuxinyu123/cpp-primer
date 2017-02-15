#include <utility>

class Foo
{

public:
		Foo () = default;
		Foo (const Foo &) = default;
};

int main (int argc, char *argv[])
{
	Foo f1;
	Foo f2 (f1);
	
	Foo f3 = std::move (f2);

	return 0;
}
