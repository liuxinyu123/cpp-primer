#include <iostream>
#include <string>

class Base
{

friend std::ostream& operator << (std::ostream &os, const Base &b);

public:
		Base (std::size_t val = 0)
			:i (val) {}
protected:
		std::size_t i;
};

class Derived : public Base
{
friend std::ostream& operator << (std::ostream &os, const Derived &d);
public : 
		Derived (std::size_t val, const std::string &str = "")
			:Base (val), s (str) {}
private:
		std::string s;
};

std::ostream& operator << (std::ostream &os, const Base &b)
{
	os << b.i;
	return os;
}

std::ostream& operator << (std::ostream &os, const Derived &d)
{
	os << d.i << " "  << d.s;
	return os;
}

int main (int argc, char *argv[])
{
	Derived d1 (2, "hello");
	Derived d2 (4, "world");
	Base b (d1);

	std::cout << b << std::endl;
	std::cout << d1 << std::endl;

	b = d2;

	std::cout << b << std::endl;
	
	Base *pb = &d2;
	//Derived *pd = pb;
	return 0;
}
