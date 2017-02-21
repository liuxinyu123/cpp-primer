#include <iostream>

class Base 
{

public:
		Base (int val = 0)
			:i (val) {}
		int mem ()
		{
			return i;
		}

protected:
		int i;
};

class Derived : public Base
{

public:
		Derived (int val = 0, const std::string &str = "")
			:Base (val), s (str) {}
		int mem (int val)
		{
			return val;
		}

protected:
			std::string s;		
};


int main (int argc, char *argv[])
{
	Derived d (1, "hello");
	Base b (100);
	std::cout << d.mem (12) << std::endl;
	//std::cout << d.mem () << std::endl;
	std::cout << d.Base::mem () << std::endl;
	std::cout << b.mem () << std::endl;

	return 0;
}
