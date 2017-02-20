#ifndef _QUOTE_H_
#define _QUOTE_H_

#include <string>

class Quote
{

public:
		Quote () = default;
		Quote (const std::string &s, double p);
		std::string Isbn () const;
		virtual double net_price (std::size_t n) const;
private:
		std::string book_no;

protected:
		double price;
};

#endif
