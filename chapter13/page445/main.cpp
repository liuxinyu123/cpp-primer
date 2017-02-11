#include <iostream>
#include <string>
#include <vector>
#include <new>
#include <memory>

class Sales_data
{

public:

private:
		std::string BookNo;
		int unit_sold = 0;
		double revenue = 0.0;
};


int main (int argc, char *argv[])
{
	Sales_data *p = new Sales_data;
	auto p1 = std::make_shared<Sales_data> ();
	std::cout << "use count is " << p1.use_count () << std::endl;

	Sales_data item (*p);
	std::vector<Sales_data> sVec;
	sVec.push_back (*p1);

	std::cout << "use count is " << p1.use_count () << std::endl;

	delete p;

	return 0;
}
