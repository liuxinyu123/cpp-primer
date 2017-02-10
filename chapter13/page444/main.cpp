#include <iostream>
#include <string>

class Sales_data
{
public:
		Sales_data (const std::string &s = "", int us = 0, double price = 0.0)
				:BookNo (s), unit_sold (us), revenue (us * price)
		{ std::cout << "This is construct function" << std::endl; }
		std::string& GetBookNo () { return BookNo; }
		int GetUnitSold () { return unit_sold; }
		double GetRevenue () { return revenue; }
private:
		std::string BookNo;
		int unit_sold = 0;
		double revenue = 0.0;
};

int main (int argc, char *argv[])
{
	Sales_data sd1;
	Sales_data sd2 ("hello", 3, 22.5);
	Sales_data sd3;
	sd3 = sd2;//编译器为我们合成拷贝赋值运算符

	std::cout << sd3.GetBookNo () << " " << sd3.GetUnitSold () << " "
		   	<< sd3.GetRevenue () << std::endl;


	return 0;
}
