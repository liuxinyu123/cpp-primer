#include <iostream>
#include <map>
#include <string>

int Add (int a, int b)
{
	return a + b;
}

int Minus (int a, int b)
{
	return a - b;
}

int main (int argc, char *argv[])
{
	std::map<std::string, int (*) (int, int)> binops;
	binops.insert ({"+", Add});
	binops.insert ({"-", Minus});

	std::cout << binops["+"] (10, 20) << std::endl;
	std::cout << binops["+"] (13, 22) << std::endl;
	
	std::cout << binops["-"] (23, 12) << std::endl;
	std::cout << binops["-"] (2, 24) << std::endl;

	return 0;	
}
