#ifndef _DISCQUOTE_H_
#define _DISCQUOTE_H_

#include "quote.h"

class DiscQuote : public Quote
{

public:
		DiscQuote () = default;
		DiscQuote (const std::string &s, double p, std::size_t q, double dis);
		double net_price (std::size_t n) const = 0;
private:
		
protected:
		std::size_t quantity = 0;
		double discount = 0.0;

};

#endif
