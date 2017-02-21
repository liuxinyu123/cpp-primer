#include <iostream>

class Base
{
public:
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
		Derived (int val = 0) 
			:i (val) {}
		int get_mem ()
		{
			return i;
		}
protected:
		int i;
};

int main (int argc, char *argv[])
{
	Derived d (22);
	std::cout << d.get_mem () << std::endl;

	return 0;
}
