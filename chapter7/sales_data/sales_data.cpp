#include "sales_data.h"

Sales_data::Sales_data(std::istream &is)
{
	Read(is, *this);
}
double Sales_data::AveragePrice() const
{
	if(unitSold == 0)
		return 0;
	else
		return revenue / unitSold;
}

Sales_data& Sales_data::Combine(const Sales_data &data)
{
	unitSold += data.unitSold;
	revenue += data.revenue;

	return *this;
}

std::istream& Read(std::istream &is, Sales_data &data)
{
	double price = 0;
	is >> data.bookNo >> data.unitSold >> price;
	data.revenue = data.unitSold * price;

	return is;
}

std::ostream& Print(std::ostream &os, const Sales_data &data)
{
	os << data.bookNo << " " << data.unitSold << " "<< data.revenue
		   	<< " " << data.AveragePrice();

	return os;
}

Sales_data Add(const Sales_data &data1, const Sales_data &data2)
{
	Sales_data result = data1;
	result.Combine(data2);

	return result;
}
