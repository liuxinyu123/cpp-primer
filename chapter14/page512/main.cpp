#include <iostream>
#include <functional>
#include <map>

int Add (int a, int b)
{
	return a + b;
}

class Divide
{

public:
		int operator() (int a, int b)
		{
			return a / b;
		}
};


int main (int argc, char *argv[])
{
	auto mod = [] (int a, int b) { return a % b;};
	std::function<int (int, int)> f1 = Add;
	std::function<int (int, int)> f2 = Divide ();
	std::function<int (int, int)> f3 = mod;

	std::cout << f1 (1,2) << std::endl;
	std::cout << f2 (3, 2) << std::endl;
	std::cout << f3 (4, 3) << std::endl;


	std::map<std::string, std::function<int (int, int)>> binops;
	binops.insert ({"+", Add});
	binops.insert ({"-", std::minus<int> ()});
	binops.insert ({"*", std::multiplies<int> ()});
	binops.insert ({"/", Divide ()});
	binops.insert ({"%", mod});

	int a = 25;
	int b = 4;

	std::cout << a << " + " << b << " = " << binops["+"] (a, b) << std::endl;
	std::cout << a << " - " << b << " = " << binops["-"] (a, b) << std::endl;
	std::cout << a << " * " << b << " = " << binops["*"] (a, b) << std::endl;
	std::cout << a << " / " << b << " = " << binops["/"] (a, b) << std::endl;
	std::cout << a << " % " << b << " = " << binops["%"] (a, b) << std::endl;


	return 0;
}

