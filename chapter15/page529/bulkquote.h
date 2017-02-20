#ifndef _BULKQUOTE_H_
#define _BULKQUOTE_H_

#include "quote.h"

class BulkQuote : public Quote
{

public: 
		BulkQuote () = default;
		BulkQuote (const std::string &s, double p, std::size_t min, double dis)
			:Quote (s, p), min_qty (min), discount (dis) {}
		double net_price (std::size_t n) const override;
private:
		std::size_t min_qty = 0;
		double discount = 0.0;
};

#endif
