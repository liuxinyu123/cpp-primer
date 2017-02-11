#include <iostream>
#include <string>

class Sales_data 
{

public:
		Sales_data () = default;
		Sales_data (const Sales_data&) = default;
		~Sales_data () = default;
		Sales_data& operator= (const Sales_data &sd) = default;
private:
		std::string BookNo;
		int unit_sold = 0;
		double revenue = 0.0;
};

int main (int argc, char *argv[])
{
	Sales_data sd1;
	Sales_data sd2 = sd1;
	Sales_data sd3;
	sd3 = sd2;

	return 0;
}
