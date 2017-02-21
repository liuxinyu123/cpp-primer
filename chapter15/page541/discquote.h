#ifndef _DISCQUOTE_H_
#define _DISCQUOTE_H_

#include "quote.h"

class DiscQuote : public Quote
{
//friend std::ostream& operator<< (std::ostream &os, const DiscQuote &dq);

public:
		DiscQuote () = default;
		DiscQuote (const std::string &s, double p, std::size_t q, double disc);
		double net_price (std::size_t n) const = 0;
private:
		
protected:
		std::size_t quantity = 0;
		double discount = 0.0;

};

#endif
