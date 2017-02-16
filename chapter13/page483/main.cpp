#include <string>
#include <iostream>

class Foo
{

public:
		friend Foo& RetFoo (Foo &f);
		friend Foo RetValue (const std::string &str, int val);
public:
		Foo (const std::string &str = "", int val = 0)
			:s (str), i (val) {}
		Foo& operator= (const Foo &f)  &
		{
			s = f.s;
			i = f.i;

			return *this;
		}
private:
		std::string s;
		int i;
};


Foo& RetFoo (Foo &f)
{
	return f;		
}

Foo RetValue (const std::string &str, int val)
{
	Foo f (str, val);

	return f;
}

int main (int argc, char *argv[])
{
	std::string s1 = "hello";
	std::string s2 = "world";
	
	std::cout << "s1: " << s1 << std::endl;
	std::cout << "s2: " << s2 << std::endl;

	s1 + s2 = "wow";
	std::cout << "s1+s2: " << s1 + s2 << std::endl;
	
	Foo f1, f2;
	f1 = f2;
	RetFoo (f2) = f1;
	//RetValue ("hello", 1) = f2;


	return 0;
}
