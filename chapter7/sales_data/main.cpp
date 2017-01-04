#include <iostream>
#include <string>
#include "sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	cout << "Please input book's No.,unit sold and price: " << endl;
	Sales_data total;
	
	if(Read(cin, total))
	{
		Sales_data trans;

		while(Read(cin, trans))
		{
			if(total.Isbn() == trans.Isbn())
				total.Combine(trans);
			else
			{
				Print(cout, total) << endl;
				total = trans;
			}
		}
		
		Print(cout, total) << endl;
	}
	else
		cerr << "No data?" << endl;
	
	return 0;
}

