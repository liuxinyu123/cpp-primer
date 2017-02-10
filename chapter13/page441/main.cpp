#include <iostream>
#include <string>

class Sales_data
{
public:
		Sales_data (const std::string &s = "", int us = 0, double price = 0.0)
				:BookNo (s), unit_sold (us), revenue (us * price)
		{}
		std::string& GetBookNo() { return BookNo; }
		int GetUnitSold () { return unit_sold; }
		double GetRevenue () { return revenue; }
private:
		std::string BookNo;
	   	int unit_sold = 0;
		double revenue = 0.0;	
};

int main (int argc, char *argv[])
{
	Sales_data sd1("hello", 3, 21.3);
	Sales_data sd2 = sd1;

	std::cout << sd2.GetBookNo () << " " << sd2.GetUnitSold () << " " 
			<< sd2.GetRevenue() << std::endl;

	return 0;

}
