#ifndef _QUOTE_H_
#define _QUOTE_H_

#include <string>

class Quote
{

public:
		Quote () = default;
		Quote (const std::string &s, double p)
			:BookNo (s), price (p) {}
		std::string GetBookNo () const
		{
			return BookNo;
		}
		virtual double NetPrice (std::size_t n) const
		{
			return n * price;
		}
private:
		std::string BookNo;
	
protected:
		double price;

};


#endif
