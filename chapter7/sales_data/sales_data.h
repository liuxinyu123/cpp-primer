#ifndef _SALES_DATA_H_
#define _SALES_DATA_H_

#include <iostream>
#include <string>

class Sales_data
{
public:
		friend Sales_data Add(const Sales_data &data1, const Sales_data &data2);
		friend std::istream& Read(std::istream &is, Sales_data &data);
		friend std::ostream& Print(std::ostream &os, const Sales_data &data);
		Sales_data() = default;
		Sales_data(const std::string &str):bookNo(str) {}
		Sales_data(const std::string &str, unsigned int u, double p)
				: bookNo(str), unitSold(u), revenue(u * p) {}
		Sales_data(std::istream &is);
		std::string Isbn() const {return bookNo;}
		Sales_data& Combine(const Sales_data &data);

private:
		double AveragePrice() const;

private:
		std::string bookNo;
		unsigned int unitSold = 0;
		double revenue = 0.0;
};

Sales_data Add(const Sales_data &data1, const Sales_data &data2);
std::istream& Read(std::istream &is, Sales_data &data);
std::ostream& Print(std::ostream &os, const Sales_data &data);

#endif
