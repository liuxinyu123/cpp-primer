#include <iostream>
#include <string>

class Quote
{

public:
		Quote (const std::string &s = "", std::size_t us, double price)
			:isbn (s), unit_sold (us), reveneu (us * price) {}
		virtual double net_price (std::size_t n) const;
		{
			return 
		}
private:
		std::string isbn;
		std::size_t unit_sold = 0;
		double reveneu = 0.0;
};

class BulkQuote : public Quote
{
public:
		double net_price (std::size_t n) const override;


};
