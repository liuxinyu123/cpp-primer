#include <iostream>
#include <string>
#include "sales_item.h"

Sales_item::Sales_item(const std::string &book, unsigned int cnt, double rev)
			:bookNo_(book),unitSold_(cnt),revenue_(rev)  {}

Sales_item::Sales_item(const Sales_item &item)
{
	bookNo_ = item.bookNo_;
	unitSold_ = item.unitSold_;
	revenue_ = item.revenue_;
}

std::istream& operator>>(std::istream &is,Sales_item &item)
{
	double price = 0.0;
	is >> item.bookNo_ >> item.unitSold_ >> price;
	if(is)
		item.revenue_ = item.unitSold_ * price;
	else
		item = Sales_item();

	return is;
}

std::ostream& operator<<(std::ostream &os,const Sales_item &item)
{
	os << item.bookNo_ << "  "  << item.unitSold_ << "  "<< item.revenue_ << "  " << item.RevPrice();

	return os;
}

Sales_item operator+(const Sales_item &item1,const Sales_item &item2)
{
	Sales_item item(item1);
	item += item2;

	return item;
}

Sales_item& Sales_item::operator+=(const Sales_item &item)
{
	unitSold_ += item.unitSold_;
	revenue_ += item.revenue_;

	return *this;
}

inline bool operator==(const Sales_item &lhs, const Sales_item &rhs)
{
	return ((lhs.bookNo_ == rhs.bookNo_) && 
					(lhs.unitSold_ == rhs.unitSold_) && 
						(lhs.revenue_ == rhs.revenue_));
}	

inline bool operator!=(const Sales_item &lhs, const Sales_item &rhs)
{
	return (!(lhs == rhs));
}

